#include<iostream>
#include<string>
using namespace std;
int main()
{
	string m;
	cout<<"escriba un numero conocido: ";
	cin>>m;
	if(m=="cero")
	{
		cout<<"0"<<endl;
	}
	else if(m=="uno")
	{
		cout<<"1"<<endl;	
	}
	else if(m=="dos")
	{
		cout<<"2"<<endl;	
	}
	else if(m=="tres")
	{
		cout<<"3"<<endl;	
	}
	else if(m=="cuatro")
	{
		cout<<"4"<<endl;	
	}
	else 
	{
		cout<<"no conozco el numero"<<endl;	
	}

	return 0;
}
