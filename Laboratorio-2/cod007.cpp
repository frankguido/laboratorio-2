#include<iostream>
using namespace std;
int main()
{
	char x;
	cout<<"Por favor ingrese un numero del 0 al 9 \n";
	cin>>x;
	switch(x)	
	{
		case'0': case'2':case'4':case'6':case'8':
			cout<<"Es par \n";break;
		case'3': case'5':case'7':case'9':case'1':
			cout<<"Es impar \n";break;
		default:
			cout<<"Numero no valido. \n";break;
	}
	return 0;

}
