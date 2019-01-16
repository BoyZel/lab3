list: catch.o invoice.o product.o date.o client.o company.o person.o
	g++ catch.o invoice.o product.o date.o client.o company.o person.o -o exe
	rm *o
client.o: client.cpp
	g++ -c client.cpp
company.o: company.cpp
	g++ -c company.cpp
person.o: person.cpp
	g++ -c person.cpp
catch.o: catch.cpp
	g++ -c catch.cpp
invoice.o: invoice.cpp
	g++ -c invoice.cpp
product.o: product.cpp
	g++ -c product.cpp
date.o: date.cpp
	g++ -c date.cpp

