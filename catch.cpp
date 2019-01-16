#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "invoice.hpp"
	
	TEST_CASE(" Is communication between classes set in a correct way?"){
		Product computer( "Lenovo X35", 2999.99, 13, 9 );
		Product phone( "LG G15", 949.99, 11, 9);
		Date today;
		Company pablo;
		Client *customer;
		customer = &pablo;
		Invoice first;
		first.Add( computer );
		first.Add( phone );
		first.SetBuyer( customer );
		first.SetDate( today );
		first.SetNumber( 123012 );
		Product p1 = first.GetProduct(0);
		Product p2 = first.GetProduct(1);
		Date d = first.GetDate();
		Client *c = first.GetBuyer();

	SECTION( "Did other classes send proper values to class Invoice"){
		REQUIRE( first.HowMany() == 2 );
		REQUIRE( first.GetNumber() == 123012 );
	}
	SECTION( "Class Product" ){
		
		REQUIRE( p1.GetName() == "Lenovo X35" );
		REQUIRE( p1.GetQuantity() == 13 );
		REQUIRE( p2.GetPrice() == 949.99 );
		REQUIRE( p2.GetTax() == 9 );
	}

	SECTION( "Class Date" ){
		REQUIRE( d.GetYear() == 2017);
		REQUIRE( d.GetMonth() == 8);
		REQUIRE( d.GetDay() == 4);
	}
	
	SECTION( "Class Client" ){
		REQUIRE( c->GetName() == "Polfarma");
		REQUIRE( c->GetNip() == 100);
		REQUIRE( c->GetCity() == "Warsaw");
		REQUIRE( c->GetHouse() == 16);
	}
	SECTION( "Taxes" ){
		int tmp = p1.GetNetto() - 38999.87;
		REQUIRE( tmp <= 0.01 );
		REQUIRE( tmp >= -0.01 );
		tmp = p2.GetTara() - 940.4901;
		REQUIRE( tmp <= 0.01 );
		REQUIRE( tmp >= -0.01 );
	}
}
