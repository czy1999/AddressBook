main: main.o AddressBook.o Person.o
	g++ main.o AddressBook.o Person.o -o main
main.o:main.cpp
	g++ -c main.cpp
computer.o:AddressBook.cpp
	g++ -c AddressBook.cpp
Person.o:Person.cpp
	g++ -c Person.cpp


