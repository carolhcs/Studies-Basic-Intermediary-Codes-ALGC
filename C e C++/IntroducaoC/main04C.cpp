//Código Introdutorio by Carol Salvato (HCS) ALGC 
//http://algamecode.blogspot.com/
//Código 4H Intermediario
//Herança - permite criar classes derivadas de outras classes, incluindo todas as caracteristicas pai + suas proprias
//Para indicar herança basta usar (:) dois pontos

//Derived Classes
#include <iostream>
using namespace std;

int main (){
	int a, b, c, d;
	cout << "Informe a base do retangulo: ";
	cin >> a;
	cout << "Informe a altura do retangulo: ";
	cin >> b;
	cout << "Informe a base do triangulo: ";
	cin >> c;
	cout << "Informe a altura do triangulo: ";
	cin >> d;
	
	CRectangle03 rect;
	CTriangle trgl;
	
	rect.set_values(a,b);
	trgl.set_values(c,d);
	cout << "Area do retangulo: " << rect.area() << endl;
	cout << "Area do triangulo: " << trgl.area() << endl;
	
	return 0;
}
