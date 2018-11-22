#include<iostream>
#include<string>
using namespace std;

class Estudiante
{
	private:
		string nombre;
		int edad;
		int codigo;
		string carrera;
	public:
		Estudiante(string _nombre="none",int _edad=0,int _codigo=0,string _carrera="none");
		void matricularse();
		void estudiar();
		int get_edad();
		int get_codigo();
};

