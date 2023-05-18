TARGET=c
LDLIBS:=-lstdc++
include ../makefile_reuse3/makefile
#OBJ=$(patsubst %.cpp, %.o, $(wildcard ./*.cpp ./*.c))
#OBJ:=$(patsubst %.c, %.o, $(OBJ))

#.PHONY:clean
#
#$(TARGET):$(OBJ)
#	$(CXX) $^ -o $@

# 可以省略，因为存在自动推导机制
#%.o:%.cpp
#	$(CXX) -c $^ -o $@

#clean:
#	$(RM) $(OBJ) $(TARGET)

#show:
#	@echo $(patsubst %.cpp, %.o, $(wildcard ./*.cpp))
#	@echo $(wildcard ./*.cpp)