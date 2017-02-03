using System;

namespace Produto
{
    class Produto
    {
        static void Main(string[] args)
        {
            int n1, n2 = 0;
            int resultado = 0;
            Console.Write("Digite o primeiro número: ");
            n1 = int.Parse(Console.ReadLine());
            Console.Write("Digite o segundo número: ");
            n2 = int.Parse(Console.ReadLine());
            resultado = n1 * n2;
            Console.WriteLine("A multiplicação é {0}", resultado);
        }
    }
}
