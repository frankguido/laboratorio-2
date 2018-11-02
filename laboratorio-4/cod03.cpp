#include<iostream>
using namespace std;
int f (int); // declaracion de f
int main()
{
	int i=7; //declaracion de i
	cout<<f(i)<<'\n';
}
double my_sqrt(double); // sin cuerpo de funcion
extern int a; // extern sin
// inicializacion no es una definicion
int a; //definicion
// int a ;//error:definicion odoble
int x = 7 ; // definicion
extern int x; // declaracion
extern int x; // otra declaracion
