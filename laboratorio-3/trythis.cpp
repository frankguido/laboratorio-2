#include <iostream>
#include <vector>
using namespace std;
int main()
try
{
	int jugada;
	vector<int>jugadas;
	jugadas.push_back(0);
	jugadas.push_back(1);
	jugadas.push_back(2);
	
	for(int i=0;i<jugadas.size();++i)
	{
		cout<<"Ingrese piedra(0), papel(1) o tijera(2)"<<endl;
		cin>>jugada;
		switch(jugada)
		{
			case 1:
				switch(jugadas[i])
				{
					case 0: cout<<"Empate"<<endl;
					break;
					
					case 1: cout<<"Perdio"<<endl;
					break;
					
					default: cout<<"Gano"<<endl;
					break;
				}
				break;
			
			case 2:
				switch(jugadas[i])
				{
					case 0: cout<<"Gano"<<endl;
					break;
					
					case 1: cout<<"Empate"<<endl;
					break;
					
					default: cout<<"Perdio"<<endl;
					break;		
				}
				break;
			
			case 3:
				switch(jugadas[i])
				{
					case 0: cout<<"Perdio"<<endl;
					break;
					
					case 1: cout<<"Gano"<<endl;
					break;
					
					default: cout<<"Empate"<<endl;
					break;
				}
				break;
			
			default:
				throw runtime_error("opcion no valida");
                break;
		}
	}
	return 0;
}

	catch(exception & e)
	{
		cerr<<"Error: "<<e.what()<<endl;
		return 1;
	}
