#coding:utf-8
import socket
import multiprocessing
host_ip = "168.254.2.3"
target_ip =      ("168.254.2.2" , 30001)
def get_actual_tcp_pose():
	sk2 = socket.socket()
	sk2.connect(target_ip)
	send_data1 = 'def read():\n socket_open("'+ host_ip +'",9000,"pc")\n a=get_actual_tcp_pose()\n socket_send_string(a,"pc")\n socket_close("pc")\nend\n'
	sk2.send(send_data1.encode('utf8'))
	sk2.close()
	print("tcp pose request")
def listened():
	print("tcp listened")
	global accept_data1
	sk1 = socket.socket()
	sk1.bind((host_ip,9000))
	sk1.listen(5)
	conn1,addr = sk1.accept()
	accept_data1 = str(conn1.recv(1024),encoding='ascii')
	sk1.close
#连续监听TCP位置
'''
while 1:
	get_actual_tcp_pose()
	listened()
	print(accept_data1)
'''

#监听一次

get_actual_tcp_pose()
listened()
print(accept_data1)

