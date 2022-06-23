#include <iostream>
#include <vector>
#include <math.h>
using std::cout;
using std::endl;
class vect{
	private:
		int x1 = 0;
		int x2 = 0;
		int y1 = 0;
		int y2 = 0;
		std::vector<int> vector1;	
	public:
		vect(int x11, int x22, int y11, int y22){
			x1 = x11;
			x2 = x22;
			y1 = y11;
			y2 = y22;
			std::cout<<"x1 = "<<x11<<std::endl;
			std::cout<<"x2 = "<<x22<<std::endl;
			std::cout<<"y1 = "<<y11<<std::endl;
			std::cout<<"y2 = "<<y22<<std::endl;
			vector1.push_back(x11);
			vector1.push_back(x22);
			vector1.push_back(y11);
			vector1.push_back(y22);	
			std::cout<<"___________________"<<std::endl;
		}
		~vect(){
			std::cout<<"deleted"<<std::endl;
		}
		void vectdlina(){
			double a; 
			a = sqrt((x1*x1) + (x2*x2) + (y1*y1) + (y2*y2));
			std::cout<<"dlina vectora = "<<a<<std::endl;
		}
		void vectploshad(){
			double b;
			int delta_x;
			int delta_y;
			if (x1<x2){
				delta_x = x2-x1;
			}
			if (x1>x2){
				delta_x = x1-x2;
			}
			if (y1<y2){
				delta_y = y2-y1;
			}
			if (y1>y2){
				delta_y = y1-y2;
			}
			if (x1 == x2){
				delta_x = x1;
			}
			if (y1 == y2){
				delta_y = y1;
			}
			if (y1 == y2){
				b = delta_x * y1;
				cout<<"PLoshad = "<<b<<endl;
			}
			if (y1 > y2){
				b = (y2 * delta_x) + (delta_y * delta_y/2);
				cout<<"Ploshad = "<<b<<endl;
			}
			else if (y1 < y2){
				b = (y1 * delta_x) + (delta_y * delta_x/2);
				cout<<"Ploshad = "<<b<<endl;
			}
		}	
};
