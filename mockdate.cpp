#include "mockdate.hpp"

Date :: Date( y, m, d ){
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
