#ifndef _MOCKDATE_HPP
#define _MOCKDATE_HPP
class Date{
	private:
		int year, month, day;
	public:
		int GetYear();
		int GetMonth();
		int GetDay();
		Date( int y = 2017, int m = 8, int d = 4 );
};

#endif
