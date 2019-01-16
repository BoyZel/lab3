#include "person.hpp"
using namespace std;

void Person :: SetUnique( string s){
	surname=s;
}

string Person :: GetUnique(){
	return surname;
}
