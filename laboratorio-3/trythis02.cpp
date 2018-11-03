#include <iostream>

using namespace std;

int main()
{
    int x=0;
    for(int i=1;i<=100;i++){
        for(int j=1; j<=i; j++){
            if(i%j==0){
                x=x+1;
            }
        }
        if(contador<=2){
            cout<<i<<endl;
        }
        x=0;
    }
    return 0;
}
