lab2: Bmi.o lab2.o
	g++ -o lab2 lab2.o Bmi.o

Bmi.o: Bmi.cpp Bmi.h
	g++ -c Bmi.cpp 

lab2.o: lab2.cpp Bmi.h
	g++ -c lab2.cpp

clean:
	rm Bmi *.o
