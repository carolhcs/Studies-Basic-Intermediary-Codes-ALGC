//Código Introdutorio by Carol Salvato (HCS) ALGC 
//http://algamecode.blogspot.com/
//Código 1 Iniciante
/* Esse é um código simples de aprendizado com varios comandos simples da 
linguagem aconselhado para quem já tem experiencia com programação*/
#include <iostream> // Entrada e saida C++
#include <stdio.h> // Entrada e saida C
#include <stdlib.h> // biblioteca C
#include <string> // Usar string C++

using namespace std;

// Variaveis declaradas aqui são GLOBAIS ex:
int Integer; //inteiro
char aCharacter; //caracter
char stringEx [20]; //grupo de letras ou string
short int inteiroCurto; // Nomes auto explicativos
short inteiroCurtoTambem;
long int inteiroLong;
long inteiroLongoTambem;
bool booleanoLogico;
float pontoFlutuante;
double pontoFlutuantePreciso;
long double oMesmoDeCimaSoQueLongo;
wchar_t caracterLargo;
unsigned int NumberOfSons;

//Constantes (expressões de valor fixo) ex:
//Directiva do pre processador
#define PI 3.14159
#define NOVALINHA '\n'
//Directivas da linguagem
const int x = 100;
const char tabulator = '\t';

int main()
{
	// Variaveis declaradas aqui são LOCAIS ex:
	unsigned short Age;
	float ANumber, AnotherOne;
	
	//Instruções de entrada e saida
	cout << "Entre com sua idade: ";
	cin >> Age;
	cout << Age;
	cout << "\n\n";
	
	int c, d, res;
	c = 5; //recebe 5
	d = 8;
	//int d(8); // recebe 8 //NAO FUNCIONOU
	res = c + d; // recebe 5 + 8 = 13
	cout << res;
	int a, b, resultado;
	cout << "\nEntre com um numero inteiro: \n";
    printf("Entre com outro numero inteiro: \n");
    
    //Usando string
    string minhaString;
    minhaString = "Isse é o conteudo inicial da string";
    cout << minhaString << endl;
    
    //Calculando a circunferencia usando contantes
    double r = 5.0; // radianos
    double circulo;
    circulo = 2 * PI * r;
    cout << circulo;
    cout << NOVALINHA;
    
    /*DICA
    * \n = new line
    * \r = carriage return
    * \t = Tab
    * \v = vertical Tab
    * \b = Backspace
    * \f = form feed (page feed)
    * \a = alert (beep)
    * \' = single quote (')
    * \" = double quote (")
    * \? = question mark (?)
    * \\ = backslash (\)
    */
    
    //Operadores aritmetios: + adição, - subtração, * multiplicação, / divisão, % modulo.
    //= Atribuição
    //Operadores compostos +=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=
    //Incremento e decremento ++, --
    //Operadores de igualdade: ==, !=, >, <, >=, <=
    //Operadores logicos: !, &&, ||
    //Operador condicional (?) ex:
    7==5 ? 4 : 3; //retorna 3  pois 7 não é igual a 5
    7==5+2 ? 4 : 3; //retorna 4 pois 7 é igual a 5+2 = 7
    //Ou seja voce comparar a com b e pode retornar c caso verdadeiro e d caso falso a==b ? c : d;
    
    int aa, bb, cc;
    printf("\nTeste condicional, entre com dois inteiros: ");
    scanf("%d", &aa);
    scanf("%d", &bb);
    cc = (aa>bb) ? aa : bb;
    cout << "\n O numero maior e: ";
    cout << cc;
    
    string nomeCompleto;
    cout << "\nDigite seu nome completo: ";
    getline (cin, nomeCompleto); // para pegar palavras depois do espaço // ERRO não está pedindo o nome
    cout << "\nSeu nome e: " << nomeCompleto << ".\n"; //não pega o nome completo, para no espaço.
    
    //i/o exemple
    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you entered is " << i;
    cout << " and its double is " << i*2 << " .\n";
    
    
    
    return 0;
}
