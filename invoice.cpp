#include "invoice.hpp"

using namespace std;

void Invoice :: Add(Product p){
	products.push_back(p);
}

void Invoice :: SetDate( Date d){
	date=d;
}

void Invoice :: SetBuyer( Client *c){
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

Date Invoice :: GetDate(){
	return date;
}

int Invoice :: GetNumber(){
	return number;
}

Client* Invoice :: GetBuyer(){
	return buyer;
}
