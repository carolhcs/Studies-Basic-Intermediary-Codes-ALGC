//Código Introdutorio by Carol Salvato (HCS) ALGC 
//http://algamecode.blogspot.com/
//Código 3 Pré-Intermediario
/* Esse é um código simples de aprendizado com varios comandos simples da 
linguagem aconselhado para quem já tem experiencia com programação*/
#include <iostream> // Entrada e saida C++
#include <stdio.h> // Entrada e saida C
#include <stdlib.h> // biblioteca C
#include <string> // Usar string C++
#include <sstream> //converter string em int e double C++
#include <stdlib.h> //Função rand - gera numeros aleatorios

using namespace std;

// Arrays
	int billy [5];
	int billy2 [] = {16, 2, 77, 40, 12071};
	int billyA = billy[2];
	int nn, result = 0;
	
	#define WIDTH 5
	#define HEIGHT 3
	
	int jimmy [HEIGHT][WIDTH];
	int nnn, mmm;

int divide (int a, int b = 2){
	int r;
	r = a/b;
	return (r);
}

//Overloaded function
int operate (int a, int b){
	return (a*b);
}

float operate (float a, float b){
	return (a/b);
}

long factorial (long a){
	if (a > 1) 
		return (a * factorial (a - 1));
	else 
		return (1);
}

//void odd (int a);
//void even (int a);

int main (){
	
	cout << divide (12);
	cout << endl;
	cout << divide (20,4);
	
	//Sobrecarga de funções - funçoes com o mesmo nome mas com nuemro de parametros diferentes
	int x = 5, y = 2;
	float n = 5.0, m = 2.0;
	cout << operate (x,y);
	cout << "\n";
	cout << operate (n,m);
	cout << "\n";
	
	//Recursividade - Propriedade em que as funções têm de chamar a si mesmas ex: calculo fatorial, ordenação
	
	long number;
	cout << "Please type a number: ";
	cin >> number;
	cout << number << "!=" << factorial (number); //ERRO retornando 1
	
	//Declaring functions prototypes
	
	int i;
	do{
		cout << "Type  number (0 to exit): ";
		cin >> i;
		//odd(i); //ERRO
	} while (i!=0);
	
	// Arrays
	for (nn = 0; nn < 5; nn++){
		result += billy2[nn];
	}
	cout << result;
	
	for (nnn = 0; nnn < HEIGHT; nnn++){
		for (mmm = 0; mmm < WIDTH; mmm++){
			jimmy[nnn][mmm] = (nnn + 1) * (mmm + 1);
		}
	}
	
	//Gerar números aleatórios
	int numero00 = rand() % 80; //O numero apos o % é o valor maximo
	int numero01 = rand();
	cout << "\nOnumero gerado foi: " << numero00 << " e " << numero01;
	
	//Exercicio
	//Crie uma matriz quadrada 10x10
	int matrizQuadrada[10][10];
	int somaDiagonal01;
	int somaDiagonal02;
	int resultadoFinal;
	//Insira todos os elementos randomicamente
	//Exiba o resultado da multiplicação dos elementos da diagonal principal e secundaria
	for (int x = 0; x < 10; x++){
		cout << "\n";
		for (int y = 0; y < 10; y++){
			matrizQuadrada[x][y] = rand() % 100;
			cout << matrizQuadrada [x][y] << ", ";
			if (x == y){ //Diagonal 01 linha = coluna
				somaDiagonal01 += matrizQuadrada[x][y];
			} else if ((x+y) == 9){ //Diagonal 02 (linha + coluna) = (dimensao - 1)
				somaDiagonal02 += matrizQuadrada[x][y];
			}			
		}
	}
	//Resultado de uma MENOS a outra
	resultadoFinal = somaDiagonal01 - somaDiagonal02;
	cout << "\nO resultado final é: " << resultadoFinal;
	
	//Classes e Objetos
	//... outro código
		
	return 0;
}
