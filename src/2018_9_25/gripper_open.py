import socket
target_ip =      ("192.168.0.18" , 30001)
def gripper_open():
	print("waiting angle")
	angle = input("please input angle(0,255):")
	sk = socket.socket()
	sk.connect(target_ip)
	send_data1 = 'def svt():\n socket_open("127.0.0.1",63352, "1")\n sync()\n socket_set_var("SID", 9, "1")\n sync()\n socket_set_var("GTO", 0, "1")\n sync()\n socket_set_var("POS", ' + angle + ', "1")\n sync()\n socket_set_var("GTO", 1, "1")\n sync()\nend\n'
	sk.send(send_data1.encode('utf8'))
	sk.close()
	print("Gripper open")
while 1:
	gripper_open()
