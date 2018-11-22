#include"Estudiante.h"
#include <exception>
Estudiante::Estudiante(string _nombre, int _edad, int _codigo,string _carrera)
{
	nombre=_nombre;
	edad=_edad;
	codigo=_codigo;
	carrera=_carrera;
}
void Estudiante::matricularse()
{
	
	cout<<nombre<<" Se matriculo en "<<carrera<<" con el codigo "<<codigo<<endl;
}
void Estudiante::estudiar()
{
	cout<<nombre<<" con "<<edad<<" anios estudiara "<<carrera<<endl;
}
int Estudiante::get_edad(){
	return edad;
}
int Estudiante::get_codigo(){
	return codigo;
}
int main()
try
{
	Estudiante e1("Wuido",19,45826,"software");
	Estudiante e2("felix",-20,5454545,"software");
	while(e1.get_edad()<0){
	e1.matricularse();
	e2.estudiar();
	}
	
	while(e1.get_codigo()<0){
	e1.matricularse();
	e2.estudiar();
	}
	
	return 0;

}
	catch(exception & e)
	{
        cerr<<"Error: "<<e.what()<<endl;
        return 1;
    }

