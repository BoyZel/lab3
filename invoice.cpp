#include "invoice.cpp"

using namespace std;

void Invoice :: Add(Product p){
	products.push_back(p);
}

void Invoice :: SetDate( int y, int m, int d){
	year = y;
	month = m;
	day = d;
}

void Invoice :: SetBuyer( Client c){
	buyer=c;
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

Client Invoice :: GetBuyer(){
	return buyer;
}
