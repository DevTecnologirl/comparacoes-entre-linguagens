using System;

class MainClass{
  public static void Main(string[] args)
  {
    int num;
    console.write("DIGITE UM NUMERO:");
    num = int.Parse(Console.ReadLine());
    if (num < 0)
    Console.write("NUMERO "+num+"E NEGATIVO");
    else (num > 0)
    Console.write("NUMERO "+num+"E POSITIVO");
  }
}