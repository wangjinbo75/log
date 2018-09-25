import socket
target_ip =      ("168.254.2.2" , 30001)
print("start")
sk = socket.socket()
sk.connect(target_ip)
send_data1 = 'def svt():\n socket_open("127.0.0.1",63352, "1")\n sync()\n socket_set_var("SID", 9, "1")\n sync()\n socket_set_var("GTO", 0, "1")\n sync()\n socket_set_var("POS", 255, "1")\n sync()\n socket_set_var("GTO", 1, "1")\n sync()\nend\n'
sk.send(send_data1.encode('utf8'))
sk.close()
print("Gripper close")