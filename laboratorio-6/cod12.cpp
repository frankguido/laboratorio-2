class Date{
public:
	enum Month{
		jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
	};
	Date(int yy, Month mm, int dd):y(yy),m(mm),d(dd){}
	int day() const;
	Month month() const;
	int year() const;
	void add_day(int n);
	void add_month(int n);
	void add_year(int n);
private:
	int y;
	Month m;
	int d;
		
};
int Date::day()const
{
	return d;
}
void Date::add_day(int n){}
void some_function(Date& d, const Date& star_of_term)
{
	int a=d.day():
	int b=start_of_term.day();
	d.add_day(3);
}
int main()
{
	Date d(2000,Date::jan,20);
	const Date cd(2001,Date::feb,21);
	cout<<d.day()<<" "<<cd.day()<<endl;
	d.add_day(1);
	some_function(d,cd);
	return 0;
}
