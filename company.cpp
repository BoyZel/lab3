#include "company.hpp"

void Company :: SetNip( int n ){
	nip=n;
}

void Company :: SetRegon( int n ){
	regon=n;
}

int Company :: GetNip(){
	return nip;
}

int Company :: GetRegon(){
	return regon;
}
