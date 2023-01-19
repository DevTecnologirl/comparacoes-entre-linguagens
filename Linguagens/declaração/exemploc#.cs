using System;

class MainClass
{
  public static void Main (string[] args)
  {
    string nome;
    int idade;
    float altura;

    Console.Write("Digite seu nome:");
    nome = Console.ReadLine();
    Console.Write("Digite sua idade: ");
    idade = int.Parse(Console.ReadLine());
    Console.Write("Digite o valor da altura:");
    altura = float.Parse(Console.ReadLine());

    Console.WriteLine("\n"+nome+" tem "+idade+" anos de idade e mede "+altura+"m. ");
  }
}