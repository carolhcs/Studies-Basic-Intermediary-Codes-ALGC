using System;

namespace TercaParte
{
    class TercaParte
    {
        static void Main(string[] args)
        {
            //Ler um número real(numero com vírgula) e imprimir a terça parte deste número
            double n = 0;
            double resultado = 0;
            Console.Write("Digite um número: ");
            n = double.Parse(Console.ReadLine());
            resultado = n / 3;
            Console.WriteLine("A terça parte deste número é: {0:#.00}", resultado);
        }
    }
}