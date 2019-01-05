#include "product.hpp"

using namespace std;

	void Product :: SetName( string s ){
		name=s;
	}

	void Product :: SetPrice( double x ){
		price=x;
	}

	void Product :: SetQuantity( int x ){
		quantity=x;
	}

	void Product :: SetTax( int x ){
		tax=x;
	}

	string Product :: GetName(){
		return name;
	}

	double Product :: GetPrice(){
		return price;
	}

	int Product :: GetQuantity(){
		return quantity;
	}

	double Product :: GetTax(){
		return tax;
	}

	double Product :: GetNetto(){
		return price * quantity;
	}

	double Product :: GetTara(){
		return price * tax * quantity/100;
	}

	double Product :: GetTotal(){
		return price * quantity * (1 + tax/100);
	}
