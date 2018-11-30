class X{
	public:
		int m ;//dato miembro
		int mf(int v){ int old=m;m=v;return old;}
		//funcion miembro
};

int main()
{
	X var; //var es una variable de tipo X
	var.m=7; 	//asigna valor al dato miembro m de var
	int x=var.mf(9);//llama a la funcion miembro mf()
	return x;
}

