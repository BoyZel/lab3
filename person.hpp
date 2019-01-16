#ifndef _PERSON_HPP
#define _PERSON_HPP
#include "client.hpp"
#include <string>
using namespace std;

class Person :public Client {
	private:
		string surname;
	public:
		void SetUnique( string );
		string GetUnique();
		Person( string n = "Pablo" , string c = "Warsaw" , string st = "Noakowskiego" , int h = 16, string ni="Escobar")
			: Client( n,c,st,h ), surname(ni)
			{}
};

#endif
