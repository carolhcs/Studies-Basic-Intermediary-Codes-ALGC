//CODIGO COM ERRO ... VER TAMBÉM CRectangle
//Código Introdutorio by Carol Salvato (HCS) ALGC 
//http://algamecode.blogspot.com/
//Código 4B Intermediario
/* Esse é um código simples de aprendizado com varios comandos simples da 
linguagem aconselhado para quem já tem experiencia com programação*/
#include <iostream> // Entrada e saida C++
#include <stdio.h> // Entrada e saida C
#include <stdlib.h> // biblioteca C
#include <string> // Usar string C++
#include <sstream> //converter string em int e double C++
#include <stdlib.h> //Função rand - gera numeros aleatorios

using namespace std;

//Classes e Objetos
//Private: Acessivel somente por membros da classe
//Publc: Acessivel de qualque lugar onde o objeto é visivel

int main () {   
	CRectangle rect;   
	rect.set_values (3,4); 
	cout << "area: " << rect.area();   
	return 0; 
}
