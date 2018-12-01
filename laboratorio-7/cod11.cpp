#include<iostream>
#include<vector>
using namespace std;
vector *f(int s)
{
	vector *p=new vector(s);
	return p;
}
void ff()
{
	vector *q=f(4);
	delete q;
}
int main
{
	vector <vector<double>>*p=new vector<vector<double>>(10);
	delete p;
	vector<vector<vector<double>>>*q=new vector<<vector<vector<double>>>(20);
	delete q;
}
int main()
{
	{
		vector v(4);
		int x= v.size();
		double d=v.get(3);
	}
	{
		vector *p=new vector(4);
		int x=p ->size();
		double d= p->get(3);
	}
}
