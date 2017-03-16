//Código Introdutorio by Carol Salvato (HCS) ALGC 
//http://algamecode.blogspot.com/
//Código 2 Basico
/* Esse é um código simples de aprendizado com varios comandos simples da 
linguagem aconselhado para quem já tem experiencia com programação*/
#include <iostream> // Entrada e saida C++
#include <stdio.h> // Entrada e saida C
#include <stdlib.h> // biblioteca C
#include <string> // Usar string C++
#include <sstream> //converter string em int e double C++

using namespace std;

//Ver funções
int addition (int a, int b){
	int c;
	c = a+b;
	return (c);
}

int subtraction (int a, int b){
	int c;
	c = a-b;
	return (c);
}

void printmessage(){
	cout << "I'm a function! All ok!!";
}

void duplicateRef (int& a, int& b, int& c){
	a *= 2;
	b *= 2;
	c *= 2; 
}

void prevnext (int x, int& prev, int& next){
	prev = x-1;
	next = x+1;
}

// -------------------------------------------------------------------------------------
int main ()
{
	string mystr;
	float price = 0;
	int quantity = 0;
	
	//Exemplo de uso de string com int e float
	cout << "Enter price: ";
	getline (cin,mystr);
	stringstream(mystr) >> price;
	cout << "Enter quantity: ";
	getline (cin,mystr);
	stringstream(mystr) >> quantity;
	cout << "Total price: " << price*quantity << endl;
	
	//Estruturas de controle condicionais
	if (price*quantity >= 300) cout << "\nTotal price is bigger than 300!";
	else if (price*quantity >= 100) cout << "\nTotal price is bigger than 100!";
	else cout << "\nTatal price it's smaller than 100!";
	
	//Estrutura de controle Loops
	int n;
	cout << "\nEnter the starting number > ";
	cin >> n;
	while (n > 0) { // While
		cout << n;
		--n;
	}
	cout << "\nFIRE!\n";
	
	// do while
	unsigned long m;
	do {
		cout << "\nEnter number (0 to end): ";
		cin >> m;
		cout << "\nYou entered: " << m << "\n";
	} while (m != 0);
	
	// for
	for (int o = 10; o > 0; o--){
		cout << o << ", ";
	}
	cout << "\nFIRE!\n";
	
	//break loop, força a saida de um loop
	for (int o = 10; o > 0; o--){
		cout << o << ", ";
		if (o==3){
			cout << "\nCountdown aborted!";
			break;
		}
	}
	
	//contiue - faz o programa ignorar o restante do loop atual e ir para a proxima iteração
	for (int o = 10; o > 0; o--){
		if (o == 5) continue;
		cout << o << ", ";
	}
	cout << "\nFIRE!\n";
	
	// Goto - faz um salto para um ponto do programa definido por um identificador que será seguido por dois pontos ex:
	int p = 20;
	loop: //Identificador
	cout << p << ", ";
	p--;
	if (p > 0) goto loop;
	cout << "\nFIRE!\n";
	// no exemplo a cima de goto foi criado um loop usando o mesmo
	
	//Switch estrutura de decisão para ser usada no lugar do if else
	int z = 2;
	switch (z){
		case 1:
			cout << "z is 1";
			break;
		case 2:
			cout << "z is 2";
			break;
		case 3:
			cout << "z is 3";
			break;
		default:
			cout << "value of z unknown";
			
	}
	
	//Funções - são formadas por tipo, nome, parametros e instruções
	//A função esta definida no inicio do programa
	int w, y, h = 5, j = 3;
	w = addition(5,3);
	y = subtraction(7,2);
	cout << "\nThe result of addition is " << w << " and the result of the subtraction is " << y << '\n';
	cout << "The second result is " << subtraction (10,5) << '\n';
	cout << "The third result is " << subtraction (h,j) << '\n';
	y = 4 + subtraction (h,j);
	cout << "The fourth result is " << y << '\n';
	
	// Funções void, usadas para imprimir mensagens na tela
	printmessage();
	
	//Argumentos passados por valor e por refêrencia - até esse ponto foram passados por valor
	//Passando dados por referencia
	int xx = 1, yy = 3, zz = 7;
	duplicateRef(xx, yy, zz);
	cout << "\nxx = " << xx << ", yy = " << yy << ", zz = " << zz << '\n';
	
	int xxx = 100, yyy, zzz;
	prevnext (xxx, yyy, zzz);
	cout << "\nPrevious = " << yyy << ", Next = " << zzz << '\n';
	
	
	return 0;
}
