#include<iostream>
#include<vector>
#include<exception>
using namespace std;
int incr_v(int x)
{
	return x+1;
}
void incr_p(int *p)
{
	*p++;
}
void incr_r(int *r)
{
	r++;
}
incline void (const string& s)
{
	throw runtime_error(s);
}
void incr_p(char *p)
{
	if(p==0)
	error("Puntero nulo")
	*p++;
}
int main()
try
{

	int x=2;
	x=incr_v(x);
	char *p=0;
	incr_p(p);
}
