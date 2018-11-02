#include <iostream>
#include <stdexcept> 
using namespace std;
int area (int length,int width);
int framed_area(int x,int y)
{
	const int frame_width=2;
	if (x-frame_width<=0||y-frame_width<=0)
		throw runtime_error("argumento_negativo");
	return area(x-frame_width,y-frame_width);
	
 } 
 int area (int length,int width )
 {
 	if(length<=0 ||width<=0)
 		throw runtime_error("argumentro negativo");
 	return length*width;
 	
 }
 int main ()
 try 
 {
 	int x=-1;
 	int y=2;
 	int z=4;
 	
 	int area1= area(x,y);
 	int area2=framed_area(1,z);
 	int area3=framed_area(y,z);
 	double ratio =double(area1)/area3;
 	
 }
 catch(exception & e)
 {
 	cerr<<"error: "<<e.what()<<'\n';
 	return 1;
 }
