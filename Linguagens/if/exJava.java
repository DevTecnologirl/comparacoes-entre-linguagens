import java.util.Scanner;

public class exJava 
{
  public void main(String[] args)
  {
   int num;
   Scanner entrada = new Scanner(System.in);
   System.out.println("Informe um numero: ");
    num = entrada.nextInt();

    if(num < 0)
    System.out.println("O numero"+num+"e negativo");
    else
    if(num == 0)
    System.out.println("O numero"+num+"e nulo/neutro");
    else
    System.out.println("O numero "+num+"e positivo");
    entrada.close();
  }
}
