#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "invoice.hpp"
	
	TEST_CASE(" Is communication between classes set in a correct way?"){
		Product computer( "Lenovo X35", 2999.99, 13, 9 );
		Product phone( "LG G15", 949.99, 11, 9);
		Date date();
		Client pablo();
		Invoice first;
		first.Add( computer );
		first.Add( phone );
		first.SetDate( date );
		first.SetNumber( 123012 );
		Product p1 = first.GetProduct(0);
		Product p2 = first.GetProduct(1);
		Date d = first.GetDate();
		Client c = first.GetBuyer();

	SECTION( "Did other classes send proper values to class Invoice"){
		REQUIRE( first.HowMany() == 2 );
		REQUIRE( first.GetNumber() == 123012 );
	}
	SECTION(" Class Product "){
		
		REQUIRE( p1.GetName() == "Lenovo X35" );
		REQUIRE( p1.GetQuantity() == 13 );
		REQUIRE( p2.GetPrice() == 949.99 );
		REQUIRE( p2.GetTax() == 9 );
	}

	SECTION(" Class Date "){
		REQUIRE( d.GetYear() == 2017);
		REQUIRE( d.GetMonth() == 8);
		REQUIRE( d.GetDay() == 4);
	}
	
	SECTION( "Class Client" ){
		REQUIRE( c.GetName() == "Pablo");
		REQUIRE( c.GetSurname() == "Escobar");
		REQUIRE( c.GetCity() == "Bogota");
		REQUIRE( c.GetHouse() == 16);
	}
	SECTION(){
		REQUIRE();
	}
}
