#include <stdio.h> 
 
class Ponto  { 
	public:    
		int x, y;    
		Ponto(void) //método construtor    
		{       
			x = y = 0;    
		}    
		~Ponto(void) //Destrutor. Chamado quando o objeto é liberado    
		{       
			//não faz nada neste caso    
		} 
	}; 
 
int main (void) {    
	Ponto p1;     //chama o construtor default imediatamente    
	Ponto p2();   //chama o construtor imediatamente    
	Ponto *pp;    //não chama o construtor pois pp é ponteiro    
	pp = new Ponto(); //chama o construtor para pp    
	printf("%d %d ", p1.x, pp->x);    
	return 0; 
}
