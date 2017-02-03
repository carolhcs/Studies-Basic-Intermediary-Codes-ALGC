using System;
namespace Exercicio
{
    class Program
    {
        static void Main(string[] args)
        { 
            Console.WriteLine("Eu Programo!!");
            Console.WriteLine("Carol Salvato");
            int x = 48;
            int y = 21;
            Console.WriteLine("Produto dos números: {0}", x * y);
            int z = 3;
            double resultado = 0;
            resultado = (x + y + z) / 3;
            Console.WriteLine("A média de {0}, {1} e {2} é: {3}", x, y, z, resultado);

            int numero = 0;
            Console.Write("Digite um número: ");
            numero = int.Parse(Console.ReadLine());
            Console.WriteLine("Você digitou: {0}", numero);

            int n1, n2 = 0;
            Console.Write("Digite o primeiro número: ");
            n1 = int.Parse(Console.ReadLine());
            Console.Write("Digite o segundo número: ");
            n2 = int.Parse(Console.ReadLine());
            Console.WriteLine("Você digitou: {0} e {1}", n1, n2);

            //Ler um número inteiro e imprimir seu sucessor e seu antecessor
            int sucessor, antecessor = 0;
            Console.Write("Digite um Número: ");
            numero = int.Parse(Console.ReadLine());
            sucessor = numero + 1;
            antecessor = numero - 1;
            Console.WriteLine("O sucessor é: {0}", sucessor);
            Console.WriteLine("O antecessor é: {0}", antecessor);

            //Ler nome, endereço e telefone e imprimi-los
            string nome, endereco, telefone = "";
            Console.Write("Digite seu nome: ");
            nome = Console.ReadLine();
            Console.Write("Digite seu endereço: ");
            endereco = Console.ReadLine();
            Console.Write("Digite seu telefone: ");
            telefone = Console.ReadLine();
            Console.WriteLine("Seu nome é: {0}, e você mora em: {1}, com o telefone: {2}", nome, endereco, telefone);

            //Ler dois números inteiros e imprimir a soma. Antes do resultado, deverá aparecer a mensagem: Soma
            int n11, n22 = 0;
            int resultado2 = 0;
            Console.Write("Digite o primeiro número: ");
            n11 = int.Parse(Console.ReadLine());
            Console.Write("Digite o segundo número: ");
            n22 = int.Parse(Console.ReadLine());
            resultado2 = n11 + n22;
            Console.WriteLine("A soma é {0}", resultado2);

            //Entrar com dois números reais e imprimir a média aritmética com a mensagem “Média” antes do resultado
            double n111, n222 = 0;
            double resultado3 = 0;
            Console.Write("Digite o primeiro número: ");
            n111 = double.Parse(Console.ReadLine());
            Console.Write("Digite o segundo número: ");
            n222 = double.Parse(Console.ReadLine());
            resultado3 = (n111 + n222) / 2;
            Console.WriteLine("A média é {0}", resultado3);
        }
    }
}