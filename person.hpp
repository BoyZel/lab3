#ifndef _PERSON_HPP
#define _PERSON_HPP
#include "client.hpp"
#include <string>
using namespace std;

class Person :public Client {
	private:
		string surname;
	public:
		void SetSurname( string );
		string GetSurname();
};

#endif
