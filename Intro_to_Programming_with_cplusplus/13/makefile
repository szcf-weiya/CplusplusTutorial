CPP = g++

.cpp.o:
	$(CPP) -c $<

all:\
	BinaryObjectIO



BinaryObjectIO: student.h student.o BinaryObjectIO.o
	$(CPP) -o $@ $^

student.o: student.cpp student.h
BinaryObjectIO.o: BinaryObjectIO.cpp student.h
