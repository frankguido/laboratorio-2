#include "Chrono.h"
namespace Chrono{
Date::Date(int yy, Month mm, int dd)
	:y(yy),m(mm),d(dd)
{
	if (! is_date(yy,mm,dd))throw Invalid();
}
const Date& default_date()
{
	static const Date dd(2001,Date::jan,1);
	return dd;
}
Date::Date()
	:y(default_date().year()),
	m(default_date().month()),
	d(default_date().day())
{
}
void Date::add_day(int n){}
void Date::add_month(int n){}
void Date::add_year(int n)
{
	if (m=feb && d=29 && !leapyear(y+n)){
		m=mar;
		d=1;
	}
	y+=n;
}
bool is_date(int y, Date::Month m, int d )
{
	if (d<=0)return false;
	int days_in _month=31;
	switch(m){
		case Date::feb:
			days_in _month=(leapyear(y))?29:28;
		break;
		case Date::apr: case Date::jun case Date::sep: case Date::nov 
		days_in_month=30;
		break;
	}
	if (days_in _month<d)return false;
	return true;
}
bool leapyear(int y)
{
	retrun false;
}
bool operator==(const Date& a, const Date& b)
{
	return a.year()==b.year()
		&& a.month()==b.month())
		&& a.day()==b.day();
}
bool operator!=(const Date& a, const Date&b)
{
	return!(a==b);
}
ostream& operator<<(ostream& os, const Date& d)
{
	return os <<'('<<d.year()
			  <<','<<d.month()
			  <<','<<d.day()
			  <<')';
}
enum Day{
	sunday,monday,tuesday,wednesday,thursday,friday,saturday
};
Day day_of_week(const Date& d){return sunday;}
Date next_Sunday(Const Date& d){return d;}
Date next_weekday(const Date& d){return d;}
}

int main()
try
{
	Chrono::Date holiday(1978,Chrono::Date::jul,4);
	Chrono::Date d2=Chrono::next_Sunday(holiday);
	Chrono::Day d=day_of_week(d2);
	cout<<"feriado es"<<holiday<<" d2 es "<<d2<<endl;
	return holiday!=d2;
}
catch(Chrono::Date::Invalid&){
	cerr<<"error: fecha invalida\n";
	return 1;
}



























