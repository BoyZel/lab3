#ifndef _PRODUCT_HPP
#define _PRODUCT_HPP
#include <string>

using namespace std;

class Product{
	private:
		string name;
		double price;
		int quantity;
		int tax;

	public:
		Product (string n = "def", double p = 111.1, int q = 0, int t=23); 
		void SetName( string );
		void SetPrice( double );
		void SetQuantity( int );
		void SetTax( int );
		string GetName();
		double GetPrice()
		int GetQuantity();
		int GetTax();
		double GetNetto();
		double GetTara();
		double GetTotal();
};
#endif
