#ifndef _PRODUCT_HPP
#define _PRODUCT_HPP
#include <string>
class Product{
	private:
		string name;
		double price;
		int quantity;
		int tax;

	public:
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
