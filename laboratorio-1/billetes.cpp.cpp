#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int numero;
	int tamanho=7, cantidad;
	int billetes[tamanho] = {100,50,20,10,5,2,1};
	int cantidades[tamanho];
	
	cin >> numero;
	cantidad = numero;
	
	for(int i=0; i<tamanho ;i++)
	{
		cantidades[i] = cantidad / billetes[i];
		cantidad = cantidad % billetes[i];
	}
	cout<<numero<<endl;
	
	for(int i=0; i<tamanho ;i++)
	{
		cout <<cantidades[i]<<" "<<"nota(s) de R$ "<<billetes[i]<<",00"<<endl;
	}

    return 0;

}
