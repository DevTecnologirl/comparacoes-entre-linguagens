package declaração;
import java.util.Scanner;

class Main
{
public static void main(String[] args) 
  {
    String nome;
    int idade;
    float altura;
    Scanner entrada = new Scanner(System.in);

    System.out.print("Digite seu primeiro nome: ");
    nome = entrada.nextLine();
    System.out.print("Digite sua idade: ");
    idade = entrada.nextInt();
    System.out.println("Digite sua altura:");
    altura = entrada.nextFloat();

    System.out.print("\n"+nome+" tem "+idade+" anos de idade e mede "+altura+"m.");
    entrada.close();
  }
}