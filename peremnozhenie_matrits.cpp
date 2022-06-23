#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	setlocale(0,"");
	int line1, column1, line2, column2;
	int ind1 = 0;
	int ind2 = 0;
	
	cout << " "<< endl;
	cin >> line1;
	cout << " "<<endl;
	cin >> column1;
	cout << " "<<endl;
	cin >> line2;
	cout << ""<<endl;
	cin >> column2;
	if (column1==line2) {
	cout<<""<<endl;
	int mas1[line1][column1];
	int mas2[line2][column2];
	
	cout <<" "<<endl;  
	for (int i=0; i<line1; i++) {
		for (int j=0; j<column1; j++) {
			cin >> mas1[i][j];
		}
	}
	
	cout <<" "<<endl;
	for (int i=0; i<line2; i++) {
		for (int j=0; j<column2; j++) {
			cin >> mas2[i][j];
		}
	}
	int mas[line1][column2];
		for (int i=0; i<line1; i++) {  
		 for (int j=0; j<column2; j++) {
			mas[i][j]=0;
		}
	}
	for (int i=0; i<line1; i++) { 
		for (int j=0; j<column2; j++) {
			for (int k=0; k<column2; k++) {
				mas[i][j]+=mas1[i][k]*mas2[k][j];
			} 
	 } 
		
	}
	for (int i=0; i<line1; i++) { 
		for (int j=0; j<column2; j++) {
			cout<<mas[i][j]<<" ";
		} 
		cout<<endl;
	} 
	
	}
	
	else {
	cout<<" "<<endl;
}
	

	return 0;
}
