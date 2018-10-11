#!/usr/bin/env python
# -*- coding: UTF-8 -*-
'''
 * @Author: WangNing
 * @Date: 2018-08-23 10:40:21
 * @LastEditors: WangNing
 * @LastEditTime: 2018-08-23 10:40:44
 * @Description:    在地图上指定6个坐标点作为巡逻点,可以在这些点
                    之间进行不断的巡逻,也可以指定巡逻的圈数,当到
                    达指定的圈数后就会停止运行.该patrol_nav_node,
                    是通过向MoveBaseGoal的target_pose中发布目标
                    位姿来达到巡航的目的,根据move_base的action状态
                    来判断机器人是否到达了目标位置.当到达了目标位置
                    后取出下一个目标位姿进行导航.直到字典存储的所有
                    目标位姿都到达后,就认为巡航一圈结束了.
 * @Email: wangning@youibot.com
 * @Company: Youibot Robotics Co., Ltd.
 * @youWant: add you want
'''

import rospy
import random
import actionlib
import time
import logging
import logging.config
from logging.handlers import TimedRotatingFileHandler
from actionlib_msgs.msg import *
from geometry_msgs.msg import Pose, Point, Quaternion
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal


class PatrolNav():
    def __init__(self):
        rospy.init_node('patrol_nav_node', anonymous=False)
        rospy.on_shutdown(self.shutdown)
        # 创建一个日志器logger并设置其日志级别为DEBUG
        logFilePath = "mengbao.log"
        self.logger = logging.getLogger('mengbao_logger')
        self.logger.setLevel(logging.DEBUG)
        # 1.创建一个流处理器handler并设置其日志级别为DEBUG
        handler = logging.StreamHandler(sys.stdout)
        handler.setLevel(logging.DEBUG)
        # 2.创建一个handler，用于写入日志文件
        fh = logging.FileHandler(logFilePath)
        fh.setLevel(logging.DEBUG)
        # 3.日志回滚
        handle = TimedRotatingFileHandler(
            logFilePath, when="d", interval=1, backupCount=7)
        # 创建一个格式器formatter并将其添加到处理器handler
        formatter = logging.Formatter(
            "%(asctime)s - %(name)s - %(levelname)s - %(message)s")
        handler.setFormatter(formatter)
        fh.setFormatter(formatter)
        handle.setFormatter(formatter)
        # 为日志器logger添加上面创建的处理器handler
        # logger.addHandler(handler)
        # self.logger.addHandler(fh)
        self.logger.addHandler(handle)

        # From launch file get parameters
        self.rest_time = rospy.get_param("~rest_time", 5)
        self.keep_patrol = rospy.get_param("~keep_patrol", False)
        self.random_patrol = rospy.get_param("~random_patrol", False)
        self.patrol_type = rospy.get_param("~patrol_type", 0)
        self.patrol_loop = rospy.get_param("~patrol_loop", 1)
        self.patrol_time = rospy.get_param("~patrol_time", 5)

        #set all navigation target pose
        self.locations = dict()
        self.locations['one'] = Pose(
            Point(0.00, 0.0, 0.0), Quaternion(0.0, 0.0, 0.0, 1.0))
        self.locations['two'] = Pose(
            Point(2.2280, 1.69786, 0.00),
            Quaternion(0.0, 0.0, 0.99968, 0.0249974))
        self.locations['three'] = Pose(
            Point(0.70128, 1.80909, 0.00),
            Quaternion(0.000, 0.000, 0.99968, 0.0249974))
        self.locations['four'] = Pose(
            Point(-0.7331, 1.902, 0.00),
            Quaternion(0.000, 0.000, -0.72456, 0.68920))
        self.locations['five'] = Pose(
            Point(0.00, 0.0, 0.0), Quaternion(0.0, 0.0, 0.0, 1.0))
        # self.locations['six']   = Pose(Point(18.8389, -24.51314, 0.00), Quaternion(0.000, 0.000, 0.281277, 0.959626))
        # self.locations['seven'] = Pose(Point(0.53, -0.37, 0.0), Quaternion(0.0, 0.0, 0.113, 1.0))

        # Goal state return values
        goal_states = [
            'PENDING', 'ACTIVE', 'PREEMPTED', 'SUCCEEDED', 'ABORTED',
            'REJECTED', 'PREEMPTING', 'RECALLING', 'RECALLED', 'LOST'
        ]

        # Subscribe to the move_base action server
        self.move_base = actionlib.SimpleActionClient("move_base",
                                                      MoveBaseAction)
        self.move_base.wait_for_server(rospy.Duration(30))
        rospy.loginfo("Connected to move base server")
        self.logger.info("Connected to move base server")

        # Variables to keep track of success rate, running time etc.
        loop_cnt = 0
        n_goals = 0
        n_successes = 0
        target_num = 0
        running_time = 0
        location = ""
        start_time = rospy.Time.now()
        locations_cnt = len(self.locations)
        sequeue = ['one', 'two', 'three', 'four', 'five']

        rospy.loginfo("Starting position navigation ")
        self.logger.info(
            "+++++++++++++++++++++Starting position navigation+++++++++++++++++++++"
        )
        # Begin the main loop and run through a sequence of locations
        while not rospy.is_shutdown():
            #judge if set keep_patrol is true
            if self.keep_patrol == False:
                if self.patrol_type == 0:  #use patrol_loop
                    if target_num == locations_cnt:
                        if loop_cnt < self.patrol_loop - 1:
                            target_num = 0
                            loop_cnt += 1
                            rospy.logwarn("Left patrol loop cnt: %d",
                                          self.patrol_loop - loop_cnt)
                            self.logger.info(
                                "~~~~~~~~Left patrol loop cnt: %d ~~~~~~~~",
                                self.patrol_loop - loop_cnt)
                        else:
                            rospy.logwarn("Now patrol loop over, exit...")
                            self.logger.warn("Now patrol loop over, exit...")
                            rospy.signal_shutdown('Quit')
                            break
            else:
                if self.random_patrol == False:
                    if target_num == locations_cnt:
                        target_num = 0
                else:
                    target_num = random.randint(0, locations_cnt - 1)

            # Get the next location in the current sequence
            location = sequeue[target_num]
            rospy.loginfo("Going to: " + str(location))
            self.logger.info("Going to: " + str(location))
            self.send_goal(location)

            # Increment the counters
            target_num += 1
            n_goals += 1

            # Allow 5 minutes to get there
            finished_within_time = self.move_base.wait_for_result(
                rospy.Duration(300))
            # Check for success or failure
            if not finished_within_time:
                self.move_base.cancel_goal()
                rospy.logerr("ERROR:Timed out achieving goal")
                self.logger.error("ERROR:Timed out achieving goal")
            else:
                state = self.move_base.get_state()
                if state == GoalStatus.SUCCEEDED:
                    n_successes += 1
                    rospy.loginfo("Goal succeeded!")
                    self.logger.info("Goal succeeded!")
                else:
                    rospy.logerr("Goal failed with error code:" +
                                 str(goal_states[state]))
                    self.logger.error("Goal failed with error code:" +
                                      str(goal_states[state]))

            # How long have we been running?
            running_time = rospy.Time.now() - start_time
            running_time = running_time.secs / 60.0

            # Print a summary success/failure and time elapsed
            rospy.loginfo("!!!!!Success so far: " + str(n_successes) + "/" +
                          str(n_goals) + " = " +
                          str(100 * n_successes / n_goals) + "%" + "!!!!!")
            self.logger.info("!!!!!Success so far: " + str(n_successes) + "/" +
                             str(n_goals) + " = " +
                             str(100 * n_successes / n_goals) + "% !!!!!")
            rospy.loginfo("Running time: " + str(self.trunc(running_time, 1)) +
                          " min")
            self.logger.info("Running time: " +
                             str(self.trunc(running_time, 1)) + " min")
            rospy.sleep(self.rest_time)

            if self.keep_patrol == False and self.patrol_type == 1:  #use patrol_time
                if running_time >= self.patrol_time:
                    rospy.logwarn(
                        "Now reach patrol_time, back to original position...")
                    self.logger.warn(
                        "Now reach patrol_time, back to original position...")
                    self.send_goal('five')
                    rospy.signal_shutdown('Quit')

    def send_goal(self, locate):
        # Set up the next goal location
        self.goal = MoveBaseGoal()
        self.goal.target_pose.pose = self.locations[locate]
        self.goal.target_pose.header.frame_id = 'map'
        self.goal.target_pose.header.stamp = rospy.Time.now()
        self.move_base.send_goal(self.goal)  #send goal to move_base

    def trunc(self, f, n):
        # Truncates/pads a float f to n decimal places without rounding
        slen = len('%.*f' % (n, f))
        return float(str(f)[:slen])

    def shutdown(self):
        rospy.logwarn("Stopping the patrol...")
        self.logger.warn(
            "+++++++++++++++++++++Stopping the patrol+++++++++++++++++++++")


if __name__ == '__main__':
    try:
        PatrolNav()
        rospy.spin()
    except rospy.ROSInterruptException:
        rospy.logwarn("patrol navigation exception finished.")