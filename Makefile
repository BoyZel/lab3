list: catch.o invoice.o product.o date.o client.o
	g++ catch.o invoice.o product.o date.o client.o -o exe
	rm *o
catch.o: catch.cpp
	g++ -c catch.cpp
invoice.o: invoice.cpp
	g++ -c invoice.cpp
product.o: product.cpp
	g++ -c product.cpp
date.o: date.cpp
	g++ -c date.cpp
client.o: client.cpp
	g++ -c client.cpp

