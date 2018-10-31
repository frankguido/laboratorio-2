#include<iostream>
#include<string>
using namespace std;
int main()
{
	string der,p1,p2,p3,p4;
	char p5;
	int p6;
	cout<<"Dear: ";
	cin>>der;
	cout<<"How are you?"<<endl;
	cin>>p1;
	cout<<"Would you like go to the party? "<<endl;
	cin>>p2;
	cout<<"Where is it?"<<endl;
	cin>>p3;
	cout<<"what is your name?"<<endl;
	cin>>p4;
	cout<<"Are you men or woman? , choose your answer m or w"<<endl;
	cin>>p5;
	if (p5=='m')
	{
		cout<<"You are men"<<endl;
	}
	else
		cout<<"you are woman"<<endl;
	cout<<"ok "<<p4<<" please call me to go to the party"<<endl;
	cout<<"what is your age?"<<endl;
	cin>>p6;
	if(p6>=0 && p6<=12)
	{
		cout<<"you cant go to the party..."<<endl;
	}
	if (p6>=12 &&p6<=18)
	{
		cout<<"you will be "<<p6+1<<" years old"<<endl;		
	}
	else if(p6>=19 && p6<=70)
	{
		cout<<"you can vote"<<endl;
	}	
	else if(p6>=70)
	{
		cout<<"enjoy you retirements"<<endl;
	}
	cout<<"sincerly"<<endl;
	cout<<der;
	return 0;
	
}
