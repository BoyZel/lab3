#ifndef _INVOICE_HPP
#define _INVOICE_HPP
#include <vector>
#include "product.hpp"
#include "date.hpp"
#include "company.hpp"
#include "person.hpp"

using namespace std;

class Invoice{
private:
	vector < Product > products;
	Date date;
	Client *buyer;
	int number;
public:
	void Add( Product );
	void SetDate( Date );
	void SetBuyer( Client * );
	void SetNumber( int );

	int HowMany();
	Product GetProduct ( int );
	Date GetDate();
	int GetNumber();
	Client * GetBuyer();
};
#endif
