#include<iostream>
using namespace std;
void log(char *);
char nombre[]="";
int main()
{
	cout<<" escriba el nombre: ";
	cin>>nombre;
	log(nombre);


}
void log(char *s)
{
	int dif=int('a')-int('A');
	while(*s)
	{
	*(s)=char(int (*s)+32);
		cout<<*s;
		s++;
	}	
}
