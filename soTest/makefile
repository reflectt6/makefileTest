SO_TARGET=libSoTest.so
SO_SRC=SoTest.cpp

.PHONY:clean

${SO_TARGET}:${SO_SRC}
	$(CXX) -shared -fPIC ${SO_SRC} -o ${SO_TARGET}

test:test.cpp libSoTest.so
	$(CXX) -lSoTest -L./ $< -o test

clean:
	rm -f *.so test clean aa