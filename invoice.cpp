#include "invoice.cpp"

void Invoice :: Add(Product p){
	products.push_back(p);
}

void Invoice :: SetDate( int y, int m, int d){
	year = y;
	month = m;
	day = d;
}

void Invoice :: SetBuyer( string n, string s){
	name = n;
	surname = s;
}

void Invoice :: SetNumber( int n){
	number=n;
}

int Invoice :: HowMany(){
	return products.size();
}

Product Invoice :: GetProduct( int n ){
	return products[n];
}

int Invoice :: GetYear(){
	return year;
}

int Invoice :: GetMonth(){
	return month;
}

int Invoice :: GetDay(){
	return day;
}

int Invoice :: GetNumber(){
	return number;
}
