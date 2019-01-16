#ifndef _COMPANY_HPP
#define _COMPANY_HPP
#include "client.hpp"
using namespace std;

class Company : public Client{
	private:
		int nip;
		int regon;
	public:
		void SetNip( int );
		void SetRegon( int );
		virtual int GetNip();
		virtual int GetRegon();
		Company( string n = "Polfarma" , string c = "Warsaw" , string st = "Noakowskiego" , int h = 16, int ni=100, int r=200)
			: Client( n,c,st,h ), nip(ni), regon(r)
		{ }
};
#endif
		
