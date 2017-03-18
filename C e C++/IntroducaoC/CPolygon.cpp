//Código Introdutorio by Carol Salvato (HCS) ALGC 
//http://algamecode.blogspot.com/
//Código 4E Intermediario
//Herança - permite criar classes derivadas de outras classes, incluindo todas as caracteristicas pai + suas proprias
//Para indicar herança basta usar (:) dois pontos

//Derived Classes
#include <iostream>
using namespace std;

class CPolygon {
	protected:
		int width, height;
	public:
		void set_values (int a, int b);
};

void CPolygon::set_values(int a, int b){
	width = a; height = b;
}
