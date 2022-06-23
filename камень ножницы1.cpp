#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {
	char user, machine;
	char arr[3] = {'r', 's', 'p'};
	
	srand(time(NULL));
	int i = rand() % 3;
	machine = arr[i];
	
	cout << "Enter r(rock), s(scissors) or p(paper): ";
	cin >> user;
	
	cout << machine << endl;
	
	if (machine == user)
        cout << "Draw" << endl;
    else if ((user == 'r' && machine == 's') || \
            (user == 'p' && machine == 'r') || \
            (user == 's' && machine == 'p'))
        cout << "You win" << endl;
    else
    	cout << "You lose" << endl;
        
	
	return 0;
}