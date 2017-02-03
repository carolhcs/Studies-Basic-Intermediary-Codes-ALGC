using System;

namespace MediaEscolar
{
    class MediaEscolar
    {
        static void Main(string[] args)
        {
            //Entrar com as notas da PR1 e PR2 e imprimir a média final
            double PR1, PR2 = 0;
            double media = 0;
            Console.Write("Digite a nota da prova 1: ");
            PR1 = double.Parse(Console.ReadLine());
            Console.Write("Digite a nota da prova 2: ");
            PR2 = double.Parse(Console.ReadLine());
            media = (PR1 + PR2) / 2;
            Console.WriteLine("A Média do Aluno é: {0}", media);

            //Entrar com um nome e imprimir
            string nome = "";
            Console.Write("Digite seu nome: ");
            nome = Console.ReadLine();

            Console.WriteLine("Todo o Nome: {0}", nome);
            Console.WriteLine("Primeiro Caracter: {0}", nome.Substring(0, 1));
            Console.WriteLine("Quantidade de Caracter: {0}", nome.Length);
            Console.WriteLine("Último Caracter: {0}", nome.Substring(nome.Length - 1, 1));
            Console.WriteLine("Do Primeiro ate o Terceiro: {0}", nome.Substring(0, 3));
            Console.WriteLine("O Quarto Caracter: {0}", nome.Substring(3, 1));
            Console.WriteLine("Todos menos o Primeiro: {0}", nome.Substring(1, nome.Length - 1));
            Console.WriteLine("Os dois Último: {0}", nome.Substring(nome.Length - 2, 2));
        }
    }
}