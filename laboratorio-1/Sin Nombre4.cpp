#include<iostream>
using namespace std;
int main()
{
	int a;
	float b,t;
	cin>>a;
	cin>>b;
	
	if(a==1)
	{
		t=4.00*b;
	}
	else if(a==2)
	{
		t=4.50*b;
	}
	else if(a==3)
	{
		t=5.00*b;
	}
	else if(a==4)
	{
		t=2.00*b;
	}
	else if(a==1)
	{
		t=1.50*b;
	}
	cout<<"Total :R$ "<<t;
	return 0;
}
