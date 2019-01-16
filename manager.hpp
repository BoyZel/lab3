#ifndef _INVOICE_CREATOR_HPP
#define _INVOICE_CREATOR_HPP

#include "invoice.hpp"
#include <algorithm>

using namespace std;

class Manager  {
	private:
		vector <Invoice> list;
	public:
		void CreateInvoice( Product, Date, Client*, int);
		void Add (Product, int);
		void ChangeDate (Date, int);
		void ChangeBuyer (Client *, int);
		void ChangeNumber (int, int);

		int HowManyInv ();
		Product Getproduct ( int, int );
		Date GetDate ( int );
		int GetNumber ( int);
		Client *GetBuyer( int );
		int Search ( int );
};
#endif
