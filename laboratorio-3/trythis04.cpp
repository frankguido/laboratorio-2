#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double raiz;
    double x=0;
    double y=0;
    cout<<"Ingrese datos:"<<endl;
    cout<<"Ingrese a: "<<endl;
    cin>>a;
    cout<<"Ingrese b:"<<endl;
    cin>>b;
    cout<<"Ingrese c:"<<endl;
    cin>>c;
    raiz=(b*b)-(4*(a*c));
    if(raiz<0){
        cout<<"respuesta imaginaria"<<'\n';
    }
    x=(-b+sqrt(raiz))/(2*a);
    y=(-b-sqrt(raiz))/(2*a);
    cout<<"Tus respuestas son: "<<x<<" y "<<y;
    return 0;
}
