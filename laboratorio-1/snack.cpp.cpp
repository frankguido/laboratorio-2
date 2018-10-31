#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int v1;
    int v2;
	cout<<"Digite el código del producto"<<endl;
	cin>>v1;
	cout<<"Digite la cantidad que desee"<<endl;
	cin>>v2;
	if(v1==1){
		cout<<"Total:R$ "<<v2*4.00;
	}
	else if(v1==2){
		cout<<"Total:R$ "<<v2*4.50;
	}
	else if(v1==3){
		cout<<"Total:R$ "<<v2*5.00;
	}
	else if(v1==4){
		cout<<"Total:R$ "<<v2*2.00;
	}
	else if(v1==5){
		cout<<"Total:R$ "<<v2*1.00;
	}
	
	return 0;
	
}

