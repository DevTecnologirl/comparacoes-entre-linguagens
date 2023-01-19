package repetição;

public class forJava 
{
 public void main(String[] args) 
 {
  int area, cont = 1;

  for(int base = 1; base <= 5; base++)
  {
    for (int altura = 2; altura <= 10; altura += 2, cont++)
    {
      area = base * altura;
      System.out.println(cont+"° retangulo");
      System.out.println("=====================");
      System.out.println("Base = "+base+" e altura = "+altura);
      System.out.println("Area = "+area+"\n");
    }
  }
 } 
}
