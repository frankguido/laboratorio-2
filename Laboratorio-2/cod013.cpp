#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{	
	double a,b;
	
	while(cin>>a>>b)
	{
		cout<<a <<" y "<< b<<"\n";	
		if(a>b)
		{
			cout<<"El menor valor es: "<<b<<"\n";
			cout<<"El mayor valor es: "<<a<<"\n";
			if((a-b)<=0.001)
			{
				cout<<a<<" y "<<b<<" son casi iguales"<<"\n";
			}
		}
		else if(b>a)
		{
			cout<<"El menor valor es: "<<a<<"\n";
			cout<<"El mayor valor es: "<<b<<"\n";
			if((b-a)<=0.001)
			{
				cout<<a<<" y "<<b<<" son casi iguales"<<"\n";
			}	
		}
		
	}
	
	
	return 0;
}
