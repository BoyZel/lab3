#ifndef _MOCKDATE_HPP
#define _MOCKDATE_HPP
class Date{
	private:
		int year, month, day;
	public:
		int GetYear();
		int GetMonth();
		int GetDay();
		Date( y=2017, m=8, d=4 );
};

#endif
