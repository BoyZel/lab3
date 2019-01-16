#include "manager.hpp"

using namespace std;

void Manager :: CreateInvoice( Product p, Date d, Client *c, int i){
	Invoice actual;
	actual.SetDate(d);
	actual.SetBuyer(c);
	actual.SetNumber(i);
	list.push_back(actual);
	sort(list.begin(), list.end() );
}

void Manager :: Add( Product p, int n){
	list[n].Add(p);
}

void Manager :: ChangeDate( Date d, int n){
	list[n].SetDate(d);
}

void Manager :: ChangeBuyer( Client *c, int n){
	list[n].SetBuyer(c);
}

void Manager :: ChangeNumber( int p, int n){
	list[n].SetNumber(p);
	sort(list.begin(), list.end() );
}

int Manager :: HowManyInv(){
	return list.size();
}

Product Manager :: Getproduct( int i, int p){
	return list[i].GetProduct(p);
}

Date Manager :: GetDate ( int i ){
	return list[i].GetDate();
}

int Manager :: GetNumber ( int i ){
	return list[i].GetNumber();
}

Client* Manager :: GetBuyer ( int i ){
	return list[i].GetBuyer();
}

int Manager :: Search ( int sea ){
	for( int i=0; i < HowManyInv(); i++ ){
		if( list[i].GetNumber() == sea )
			return i;
	}
	return -1;
}




