//Código Introdutorio by Carol Salvato (HCS) ALGC 
//http://algamecode.blogspot.com/
//Código 4G Intermediario
//Herança - permite criar classes derivadas de outras classes, incluindo todas as caracteristicas pai + suas proprias
//Para indicar herança basta usar (:) dois pontos

//Derived Classes
#include <iostream>
using namespace std;

class CTriangle: public CPolgon {
	public:
		int area();
};

int CTriangle::area(){
	return (width * height / 2);
}
