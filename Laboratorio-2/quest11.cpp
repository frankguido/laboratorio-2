#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<double>medidas;
    double x;
    string y;
    double min;
    double max;
    string u_max;
    string u_min;
    int c=1;
    double v=0;
    double vmax=0;
    double vmin=0;
    double suma=0;
    double metros=0;
    while(cin>>x>>y)
	{
        if(y=="m" || y=="ft" || y=="in" || y=="cm")
		{
        	if(x!='#')
			{
                if(y=="m")
				{
                    v=x*100.00;
                }
                else if(y=="ft")
				{
                    v=x*30.48;
                }
                else if(y=="in")
				{
                    v=x*2.54;
                }
                else if(y=="cm")
				{
                    v=x;
                }
                if(c==1)
				{
                    min=x;
                    max=x;
                    vmin=v;
                    vmax=v;
                    u_min=y;
                    u_max=y;
                    cout<<"El mayor valor hasta ahora es: "<<max<<" "<<u_max<<endl;
                    cout<<"El menor valor hasta ahora es: "<<min<<" "<<u_min<<endl;
                    c++;
                }
                else
				{
                    if(v<vmin)
					{
                        min=x;
                        vmin=v;
                        u_min=y;
                      	cout<<"El mayor valor hasta ahora es: "<<max<<" "<<u_max<<endl;
                    	cout<<"El menor valor hasta ahora es: "<<min<<" "<<u_min<<endl;
                    }
                    if(v>max)
					{
                        max=x;
                        vmax=v;
                        u_max=y;
                        cout<<"El mayor valor hasta ahora es: "<<max<<" "<<u_max<<endl;
                    	cout<<"El menor valor hasta ahora es: "<<min<<" "<<u_min<<endl;
                        
                    }
                }
                if(y=="m")
				{
                    metros=x;
                }
                else if(y=="in")
				{
                    metros=x*0.0254;
                }
                else if(y=="ft")
				{
                    metros=x*0.3048;
                }
                else if(y=="cm")
				{
                    metros=x*0.01;
                }
            	medidas.push_back(metros);
            	sort(medidas.begin(),medidas.end());
            	for(int i=0;i<medidas.size(); ++i)
            	{
                	cout<<medidas[i]<<'\t';
            	}
            	cout<<"\n";
            	suma=suma+metros;
            	cout<<"La suma en metros es "<<suma<<"\n";
            }
           
        }
        else
		{
        	cout<<"Unidad desconocida"<<endl;
        }
    }
    return 0;
}
