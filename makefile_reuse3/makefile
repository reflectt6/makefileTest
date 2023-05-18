OBJ=$(patsubst %.cpp, %.o, $(wildcard ./*.cpp ./*.c))
OBJ:=$(patsubst %.c, %.o, $(OBJ))

.PHONY:clean

ifndef LDLIBS
LDLIBS:=
endif

$(TARGET):$(OBJ)
	gcc $(LDLIBS) $^ -o $@

# 可以省略，因为存在自动推导机制
#%.o:%.cpp
#	$(CXX) -c $^ -o $@

clean:
	$(RM) $(OBJ) $(TARGET)
