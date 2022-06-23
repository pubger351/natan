#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class vect
{
private:
	int square;
	double longn;
	int x1;
	int y1;
	int x2;
	int y2;
public:
addd()
{
	std::cout<<"Constructor"<<endl;
	x1=0;
	y1=0;
	x2=0;
	y2=0;
}
void adsadd()
{
	std::cout<<"Input x1"<<endl;
	std::cin>>x1;
	std::cout<<"input y1"<<endl;
	std::cin>>y1;
	std::cout<<"Input x2"<<endl;
	std::cin>>x2;
	std::cout<<"Input y2"<<endl;
	std::cin>>y2;
}	
void asdaddd()
{
	std::cout<<"x1 ="<<x1<<endl;
	std::cout<<"y1 ="<<y1<<endl;
	std::cout<<"x2 ="<<x2<<endl;
	std::cout<<"y2 ="<<y2<<endl;
}
void length (int x1, int x2, int y1, int y2)
{
	longn=sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
	std::cout<<"long"<<endl;
}
void sqqquuuuuaareee(int x1, int x2, int y1, int y2)
{
	std::cout<<"..........."<<endl;
}
	
};
 
int main(){
	vect obj;
	obj.length(1,2,1,2);
	obj.asdaddd();
	obj.asdaddd();
}


