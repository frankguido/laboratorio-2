#include<iostream>
using namespace std;
int main(){
	int code=0;	double total=0; int cant=0;

	cin>>code; cin>>cant;
	if(code==1){
		total=cant*4.00;
	}
	else if(code==2){
		total=cant*4.50;
	}
	else if(code==3){
		total=cant*5.00;
	}
	else if(code==4){
		total=cant*2.00;
	}
	else if(code==5){
		total=cant*1.50;
	}
	cout<<"Total :R$ "<<total;
		
}
