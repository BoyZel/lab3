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
		Client( string n = "Pablo", string c = "Bogota", string st = "Noakowskiego", int h=16 );
		void SetName( string );
		void SetCity( string );
		void SetStreet( string );
		void SetHouse( int );
		string GetName();
		string GetCity();
		string GetStreet();
		int GetHouse();
		virtual void SetNip(int) = 0;
		virtual void SetRegon(int) = 0;
		virtual int GetNip() = 0;
		virtual int GetRegon() = 0;
		virtual void SetSurname(string) = 0;
		virtual string GetSurname() = 0;
};
#endif
