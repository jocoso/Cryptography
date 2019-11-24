test : maintest.o cryptolab.o
	g++ -o test maintest.o cryptolab.o

main.o : maintest.c cryptolab.o
	g++ -c maintest.c
cryptolab.o : cryptolab.c cryptolab.h
	g++ -c cryptolab.c


clean :
	rm test maintest.o cryptolab.o
cleanall :
	rm test maintest.o cryptolab.o test.exe.stackdump
