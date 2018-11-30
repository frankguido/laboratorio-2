int main()
{
	Date today;
	today.y = 2005;
	today.m = 12;
	today.d = 24;
	Date x;
	x.y = -3;
	x.m = 13;
	x.d = 32;
	Date Y;
	y.y = 2000;
	y.m = 2;
	y.d = 29;
	init_day(y,2000,1,1);
	add_day(y,28);
	return 0;
}
	
