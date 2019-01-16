#ifndef _COMPANY_HPP
#define _COMPANY_HPP
#include "client.hpp"
using namespace std;

class Company : public Client{
	private:
		string nip;
	public:
		virtual void SetUnique( string );
		virtual string GetUnique();
		Company( string n = "Polfarma" , string c = "Warsaw" , string st = "Noakowskiego" , int h = 16, string ni="1661")
			: Client( n,c,st,h ), nip(ni)
		{ }
};
#endif
		
