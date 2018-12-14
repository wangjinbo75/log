1.安装zbar
sudo apt-get install libzbar-dev
安装好之后zbar库文件被安装在了/usr/lib/libzbar.so中
cmakelist.txt中做相应的改变引入zbar库文件
target_link_libraries(QRLocation
  ${catkin_LIBRARIES}
  ${OpenCV_LIBS}
  zbar
  )
