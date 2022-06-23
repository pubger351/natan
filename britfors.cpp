#include <iostream>
#include <cstdlib>
using namespace std;

int m3(){
	char a1;
	char a2;
	char a3;
	char b1=0;
	char b2=0;
	char b3=0;
	cin>>a1>>a2>>a3;
	int searches =0;
	char all[]{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!#$%&()*+,-./:;<>?@[]^_{}|~"};//89 символов
	for(int i=0 ;i<89;i++){
		for(int j=0;j<89;j++){
			for (int k=0;k<89;k++){
				
				b1=all[i];
				b2=all[j];
				b3=all[k];
				searches++;
				if (a1==b1 and a2==b2 and a3==b3){
					cout<<b1<<b2<<b3<<endl;
					cout<<searches<<endl;;
					
				
				}
			}
		}
	}

	
}

int rand_3(){
char all[] {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!#$%&()*+,-./:;<>?@[]^_{}|~"};//89 символов
char a1, a2, a3;
char b1=0, b2=0, b3=0;
cin >> a1 >> a2 >> a3;
int searches = 0;

while (a1 != b1 || a2 != b2 || a3 != b3){
b1 = all[rand() % 89];
b2 = all[rand() % 89];
b3 = all[rand() % 89];
searches++;
}
cout<<b1 << b2 << b3 << endl;
cout <<searches<<endl;
}

int main(){
	m3();
	rand_3();
	}
