#include<iostream>
int area(int length,int width);
int main()
{
	int x4=area(10,-7);
	int x5=area(10.7,9.3);
	char x6=area(100,9999);
	return area (4,4);
	
}
int area(int length,int width)
{
	return length*width;
}
