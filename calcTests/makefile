
# 这样好吗，这样不好
#compile:
#	gcc add.cpp multi.cpp sub.cpp calc.cpp -o calc
#	./calc

# 第一次编译2小时，第二次编译五分钟
# 这样好吗，这样好。因为分不同的阶段编译，产生并保存了的中间结果。
# 当你的代码变动后，再次编译时，只需要编译变动的中间结果即可，其他的中间结果可以复用。
calc:add.o sub.o multi.o
	g++ calc.cpp add.o sub.o multi.o -o calc

a:add.cpp
	g++ -c add.cpp -o add.o

s:sub.cpp
	g++ -c sub.cpp -o sub.o

m:multi.cpp
	g++ -c multi.cpp -o multi.o

gcc_help:
	gcc --help > help

系统常量:
	make -pn > p.sh # -p打印系统变量， -n表示只打印不执行make命令

clean:
	rm -f calc add.o sub.o multi.o p.sh help