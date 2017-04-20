#include <stdio.h> 
 
class Ponto  { 
	public:    
		int x, y;    
		Ponto(void) //m�todo construtor    
		{       
			x = y = 0;    
		}    
		~Ponto(void) //Destrutor. Chamado quando o objeto � liberado    
		{       
			//n�o faz nada neste caso    
		} 
	}; 
 
int main (void) {    
	Ponto p1;     //chama o construtor default imediatamente    
	Ponto p2();   //chama o construtor imediatamente    
	Ponto *pp;    //n�o chama o construtor pois pp � ponteiro    
	pp = new Ponto(); //chama o construtor para pp    
	printf("%d %d ", p1.x, pp->x);    
	return 0; 
}
