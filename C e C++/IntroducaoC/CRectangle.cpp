//CODIGO COM ERRO ... VER TAMB�M MAIN04
//C�digo Introdutorio by Carol Salvato (HCS) ALGC 
//http://algamecode.blogspot.com/
//C�digo 4A Intermediario
/* Esse � um c�digo simples de aprendizado com varios comandos simples da 
linguagem aconselhado para quem j� tem experiencia com programa��o*/
#include <iostream> // Entrada e saida C++
#include <stdio.h> // Entrada e saida C
#include <stdlib.h> // biblioteca C
#include <string> // Usar string C++
#include <sstream> //converter string em int e double C++
#include <stdlib.h> //Fun��o rand - gera numeros aleatorios

using namespace std;

//Classes e Objetos
//Private: Acessivel somente por membros da classe
//Publc: Acessivel de qualque lugar onde o objeto � visivel

class CRectangle {
	int x, y;
	public:
		void set_values (int, int);
		int area (){
			return(x*y);
		}
};

void CRectangle::set_values(int a, int b){
	x = a;
	y = b;
}



