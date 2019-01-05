#ifndef _INVOICE_HPP
#define _INVOICE_HPP
#include <vector>
#include "product.hpp"

class Invoice{
private:
	vector < Product > products;
	int year, month, day;
	string name, surname;
	int number;
public:
	void Add( Product );
	void SetDate( int, int, int);
	void SetBuyer( string, string);
	void SetNumber( int );
	int HowMany();
	Product GetProduct ( int );
	int GetYear();
	int GetMonth();
	int GetDay();
	int GetNumber();
};

