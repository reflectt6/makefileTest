# 模拟发布，使用-L定位到a库文件
main:main.cpp
	$(CXX) -laTest -L../aTest -o $@ $^

decompilation:main
	objdump -DC $^ > $^.txt

clean:
	$(RM) -f main