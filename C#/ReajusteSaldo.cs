using System;

namespace ReajusteSaldo
{
    class ReajusteSaldo
    {
        static void Main(string[] args)
        {
            //Fazer um algoritmo que possa entrar com o saldo de uma aplicação e imprima o novo saldo, considerando o reajuste de 1%
            double saldo = 0;
            double reajuste = 0;
            double juro = 0;
            Console.Write("Digite o saldo da aplicação: ");
            saldo = double.Parse(Console.ReadLine());
            Console.Write("Digite o juro: ");
            juro = double.Parse(Console.ReadLine());
            reajuste = saldo * (juro / 100);
            saldo = saldo + reajuste;
            Console.WriteLine("Seu novo saldo é {0:#.00}", saldo);
        }
    }
}