#include<iostream>
using namespace std;
int main( )
{
	const double yen=0.0089;
	const double euro=1.18;
	const double libra=1.31;
	const double dolar=1.00;
	int monto=0;
	char unidad=' ';
	cout<<"ingrese una cantidad seguida de la moneda: \n";
	cin>>monto>>unidad;
	
	if (unidad =='y')
	{
		cout<<monto<<" yen == "<<yen*monto<<" dolares\n";
	}
	else if (unidad =='e')
	{
		cout<<monto<<" euros == "<<euro*monto<<" dolares\n";
	}
	else if (unidad =='l')
	{
		cout<<monto<<" libras == "<<libra*monto<<" dolares\n";
	}
	else if (unidad == 'd')
	{	
		
		cout<<"ingrese a que desea convertir\n";
		cin>>unidad;
			if (unidad =='y')
			{
				cout<<monto<<" dolares == "<<monto/yen<<" yen\n";
			}
			else if (unidad =='e')
			{
				cout<<monto<<" dolares == "<<monto/euro<<" euros\n";
			}
			else if (unidad =='l')
			{
				cout<<monto<<" dolares == "<<monto/libra<<" libras\n";
		
			}
	}
	return 0;
	
}
