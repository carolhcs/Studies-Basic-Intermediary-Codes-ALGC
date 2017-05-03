//Gerar Numeros aleatórios
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int min, max, i, range, r, x;
	unsigned first = time(NULL);
	
	cout << "FIRST = " << first << endl;
	srand(first);
	cout << "ENTER THE MINIMUM NUMBER:";
	cin >> min;
	cout << "ENTER THE MAXIMUM NUMBER:";
	cin >> max;
	cout << "ENTER TE NO.OF TERMS YOU WANT:";
	cin >> x;
	
	range = max-min+1;
	
	for(i = 0 ; i < x ; i++) {
		r = rand() / 100 % range + min;
		cout << r << " ";
	}
	
	getch();
	
}
