aTest.o:aTest.cpp aTest.h
	$(CXX) -c $< -o $@

libaTest.a:aTest.o
	ar -r $@ $^

clean:
	$(RM) -f aTest.o