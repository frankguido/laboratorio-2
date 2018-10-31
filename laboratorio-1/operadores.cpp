#include<iostream>
using namespace std;
int main()
{
	string a;
	float b,c;
	cout<<"ingrese el op y luego los valores: ";
	cin>>a>>b>>c;
	if(a=="+")
	{
		cout<<"la suma es : "<<b+c<<endl;
	}
	else if (a=="-")
	{
		cout<<"la resta es : "<<b-c<<endl;
	}
	else if (a=="*")
	{
			cout<<"la multiplicacion es : "<<b*c<<endl;
	}
	else if (a=="*")
	{
		cout<<"la divicion es : "<<b/c<<endl;	
	}
	
	return 0;
	
	
}
