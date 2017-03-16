#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int a,b;
    printf("Soma de dois números: ");
    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    printf("A soma de %d com %d é %d\n", a, b, a+b);
    return 0;
}
