#include<iostream>
	using namespace std;
	int main () {
		int quant, x = 0, y = 1, fib = 0;
		cout << "Entre com a quantidade de termos que deseja na sequencia: ";
		cin >> quant; //Lendo a quantidade de termos que o usuario deseja.
		cout << "Os " << quant << " primeiros numeros da sequencia de Fibonacci sao: " << endl;
		for (int a = 0; a < quant; a++) {
			if(a <= 1) fib = a;
			else {
				fib = x + y;
				x = y;
				y = fib;
			}
			cout << fib << " ";
		}
		return 0;
	}
