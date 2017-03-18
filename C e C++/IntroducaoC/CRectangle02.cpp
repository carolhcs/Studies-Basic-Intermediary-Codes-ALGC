//Código Introdutorio by Carol Salvato (HCS) ALGC 
//http://algamecode.blogspot.com/
//Código 4C Intermediario
//Overloading class constructors

#include <iostream>
using namespace std;

class CRectangle02 {
	int width, height;
	public:
		CRectangle02 ();
		CRectangle02 (int, int);
		int area (void) {
			return (width * height);
		}
};

CRectangle02::CRectangle02(){
	width = 5;
	height = 5;
}

CRectangle02::CRectangle02(int a, int b){
	width = a;
	height = b;
}
