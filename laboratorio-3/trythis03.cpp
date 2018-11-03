#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string>palabras;
    palabras.push_back("leche");
    palabras.push_back("arroz");
    palabras.push_back("arroz");
    palabras.push_back("pan");
    palabras.push_back("azucar");
    palabras.push_back("leche");
    palabras.push_back("leche");
    palabras.push_back("leche");
    string moda;
    int a=0;
    int b=0;
    for(int i=0; i<palabras.size();i++)
	{
        for(int j=i; j<palabras.size(); j++)
		{
            if(palabras[i]==palabras[j])
			{
                a++;
            }
        }
        if(a>b)
		{
            moda=palabras[i];
            b=a;
        }
        a=0;
    }
    cout<<"La moda es: "<<moda<<endl;
    return 0;
}
