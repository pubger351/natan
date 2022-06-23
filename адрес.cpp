
#include <iostream>
using namespace std;
int minima(int *arr, int N){
	int min=arr[0];
	int count=0;
	for (int i = 0; i < N; ++i)
	{
		if(arr[i]<min){
			min=arr[i];
			count=i;
		}
	}
	cout<<"Min"<<' '<<min<<endl;
	cout<<"Adres"<<' '<<&arr[count];

}
int main()
{
	int a,b,f;
	int size=100;
	int *mass=new int [size];
	for (int i = 0; i < 20; ++i)
	{
		cin>> mass[i];
		

	}
	cout<<endl;
	cout<<"nam renge: ";
	cin>>a;
	cout<<endl;
	minima(mass,a);
	return 0;
}