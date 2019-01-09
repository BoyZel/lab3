#include "date.hpp"

Date :: Date( int y, int m, int d ){
	year=y;
	month=m;
	day=d;
}

int Date :: GetYear(){
	return year;
}

int Date :: GetMonth(){
	return month;
}

int Date :: GetDay(){
	return day;
}
