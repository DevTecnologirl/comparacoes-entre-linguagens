using System;

class MainClass 
{
  public static void Main (string[] args)
  {
    double baseRet = 0, altura = 0, area = 0;

    for (int cont = 1; baseRet >= 0; cont++)
    {
      Console.Write("Digite a base do {0}° retangulo: ",cont);
    baseRet = double.Parse(Console.ReadLine());
    if (baseRet >= 0)
      {
Console.Write("Digite a altura do "+cont+"° retangulo");
  altura = double.Parse(Console.ReadLine());
  area = baseRet * altura;
  Console.WriteLine("A area {0} retangulo = {1}.\n",cont,area)
      }
    }
  }
}