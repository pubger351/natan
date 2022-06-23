#include <iostream>
#include <cmath>	
#include <fstream>
#include "factorial.h"
#include <fstream>
using namespace std;




int main()
{	
	ofstream fout;
	ofstream x;
	ofstream y;
	ofstream x_1;
	ofstream y_1;
	fout.open("matrix_summ.txt ");
	x.open("x.txt ");
	y.open("y.txt ");
	x_1.open("x1.txt ");
	y_1.open("y1.txt ");
	bool flag=true;
	int g=360,accuracy=4,ggg=3;
	double Pi = 3.1415926535,sin_meaning=0;
	double sin_num[361],sin_znach[361];
for (int i = 0; i <181 ; ++i)
	{
		sin_num[i]= (i) * (Pi/180);
		
	}
for (int i = 0; i <181; ++i)
	{
		sin_num[g]= -sin_num[i];
		g--;
		
	}

	for (int i = 0; i < 361; ++i)
	{
		sin_znach[i]=(sin_num[i]-(pow(sin_num[i],3)/Factorial(3))+(pow(sin_num[i],5)/Factorial(5))-(pow(sin_num[i],7)/Factorial(7))+(pow(sin_num[i],9)/Factorial(9)));	

	}
 	for (int i = 0; i < 361; ++i)
	{
		fout<<"sin "<<i<<' '<<sin_num[i]<<"       "<<sin_znach[i]<<endl;
		y<<sin_znach[i]<<endl;
		x<<i<<endl;
	}
	

	for (int i = 0; i < 361; ++i)
	{
		x_1<<i<<endl;
		y_1<<sin((i) * (Pi/180))<<endl;
	}
	return 0;
}
