enum Month{
	jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
	
};
Month operator++(Month&m)
{
	m=(m==dec)? jan: Month(m+1);
	return m;
}
ostream& operator<<(ostream& os, Month m)
{
	static const char* month_tbl[12]={
		"january",""
	}
}
///faltaaa
//faktaa
//diapo 11
