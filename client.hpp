#ifndef _CLIENT_HPP
#define _CLIENT_HPP
#include <string>
using namespace std;

class Client{
	private:
		string name, surname;
		string city;
		string street;
		int house;
	public:
		Client( string n = "Pablo", string s = "Escobar", string c = "Bogota", string st = "Noakowskiego", int h=16 );
		void SetName( string );
		void SetSurname( string );
		void SetCity( string );
		void SetStreet( string );
		void SetHouse( int );
		string GetName();
		string GetSurname();
		string GetCity();
		string GetStreet();
		int GetHouse();
};
#endif
