Makefile有三个非常有用的变量。分别是$@，$^，$<代表的意义分别是： 

$@--目标文件，$^--所有的依赖文件，$<--第一个依赖文件。 


  3 CC=g++
  4 CXXFLAGS=g++  -std=c++11 -c     #-Wall -pedantic #CXXFLAGS 表示用于 C++ 编译器的选项
  5 LDFLAGS=-pthread                #有线程 必须加上
  6 
  7 all:    output
  8 
  9 output:  test_threads.o
 10         $(CC)  $(LDFLAGS)  $^  -o $@
 11 test_threads.o: test_threads.cpp  
 12         $(CXXFLAGS)  $(LDFLAGS)  $^  -o $@
 13 clean:
 14         rm -rf *.o
~                                        
