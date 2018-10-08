#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string>palabra;
	palabra.push_back("carajo");
	palabra.push_back("mierda");
	palabra.push_back("shit");
	
	string temp;
	cout<<"escriba un texto \n";
	while(cin>>temp)
	{
		for(int i=0;i<palabra.size();i++)
		{
			if (temp==palabra[i])
			{
				temp="piii";
			}
		}
	cout<<temp<<" ";
	}
}
