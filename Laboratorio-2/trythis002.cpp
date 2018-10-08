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
	switch (unidad)
	{
		case 'y':
		cout<<monto<<" yen == "<<yen*monto<<" dolares\n";
		break;
		case 'e':
		cout<<monto<<" euros == "<<euro*monto<<" dolares\n";
		break;
		case 'l':
		cout<<monto<<" libras == "<<libra*monto<<" dolares\n";
		break;
		case 'd':
			cout<<"ingrese a que desea convertir\n";
			cin>>unidad;
			switch (unidad)
			{
			case 'y':
			cout<<monto<<" yen == "<<yen*monto<<" dolares\n";
			break;
			case 'e':
			cout<<monto<<" euros == "<<euro*monto<<" dolares\n";
			break;
			case 'l':
			cout<<monto<<" libras == "<<libra*monto<<" dolares\n";
			break;
			default: 
			cout<<"moneda no conocida";
			break;
			}
		break;
		default: 
		cout<<"moneda no conocida";
		break;
	}
	
		
return 0;

}
