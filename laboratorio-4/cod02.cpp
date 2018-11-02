#include<iostream>
#include<vector>
using namespace std;

int main( )
{
	int a; //no inicializado
	double d=7; //inicializado usando =
	vector <int> vi (10); // inicializado usando( )
	const int x=7; // inicializado usando =
	const int x2 (9); //inicializado usando ( )
// const int y ;// error:no inicializado
}

	namespace innocent
	{
	void f(int z)
	{
	int x; // sin inicializar
	x=7; // da un valor a x
	}
	}
	namespace dangerous
	{
		void f (int z)
	{ 
		int x; // sin inicializar
		if (z>x) 
		{
		}
		x=7 ; // da a 7 un valor
	}
	}

