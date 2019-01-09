#include "product.hpp"

using namespace std;
	
	Product :: Product(string n, double p, int q, int t){
		name=n;
		price=p;
		quantity=q;
		tax=t;
	}

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

	int Product :: GetTax(){
		return tax;
	}

	double Product :: GetNetto(){
		return price * quantity;
	}

	double Product :: GetTara(){
		return price * tax * quantity/100;
	}

	double Product :: GetTotal(){
		double x = tax /100;
		return price * quantity * (1 + x);
	}
