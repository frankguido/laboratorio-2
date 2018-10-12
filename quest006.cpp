#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	unsigned long long x;
	int a,b,c;
	for( int i=1;i<=64;i++)
	{
		x= pow(2,i-1);
		cout<<i<<" \t"<< x <<"\n";
		if(x>1000)
		{
			a=i;
		}
		if(x>10000000)
		{
			b=i;
		}
	
		if(x>10000000)
		{
			c=i;
		}
	}

	cout<<a,b,c;
 return 0;	
}

#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	unsigned long long x;

	for( int i=1;i<=64;i++)
	{
		x= pow(2,i-1);
		cout<<i<<" \t"<< x <<"\n";
		if(x<=1000)
		{
			cout<<i;
		}
		if(x<=10000000)
		{
			cout<<i;
		}
	
		if(x<=10000000)
		{
			cout<<i;
		}
	}


 return 0;	
}
