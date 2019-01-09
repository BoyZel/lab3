#include "client.hpp"
using namespace std;

Client :: Client( string n, string s, string c, string st, int h){
	name=n;
	surname=s;
	city=c;
	street=st;
	house=h;
}

void Client :: SetName( string s){
	name=s;
}

void Client :: SetSurname( string s){
	surname=s;
}

void Client :: SetCity( string s){
	city=s;
}

void Client :: SetStreet( string s){
	street=s;
}

void Client :: SetHouse( int s){
	house=s;
}

string Client :: GetName(){
	return name;
}

string Client :: GetSurname(){
	return surname;
}

string Client :: GetCity(){
	return city;
}

string Client :: GetStreet(){
	return street;
}

int Client :: GetHouse(){
	return house;
}
