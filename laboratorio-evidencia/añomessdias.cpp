#include<iostream>
using namespace std;
int main()
{
	int dias,a,m,d;
	cin>>dias;
	a=dias/365;
	m=(dias%365)/30;
	d=dias-(a+m);
	cout<<a<<"ano(s)"<<endl;
	cout<<m<<"meses(s)"<<endl;
	cout<<d<<"dias(s)"<<endl;
	return 0;
}
