#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main()
try
{
    vector<string>datos;
    string nombre;
    int num;
    while(cin>>nombre>>num){
        if(nombre!="SinNombre" && num!=0){
            if(datos.size()==0){
                datos.push_back(nombre);
            }
            else{
                for(int i=0; i<datos.size();i++){
                    if(nombre==datos[i]){
                        throw runtime_error("nombre repetido");
                    }
                }
                datos.push_back(nombre);
            }
        }
        else{
            return 0;
        }
    }
}
catch(exception & e){
    cerr<<e.what()<<endl;
    return 1;
}
