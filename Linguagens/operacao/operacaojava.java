public class operacaojava 
{
  public static void main() 
  {
    int a =5, b =3;
    int soma, sub, mult, quoc, inc, dec, resto;
    float divi;
    
    soma = a+b;
    System.out.println(a+" + "+b+" = "+soma);
    sub = a -b;
    System.out.println(a+" - "+b+" = "+sub);
    mult = a*b;
    System.out.println(a+" * "+b+" = "+mult);
    divi = (float)a/b;
    System.out.println((float)a+" / "+b+" = "+divi);
    quoc = a/b;
    System.out.println(a+" / "+b+" = "+quoc);
    resto = a%b;
    System.out.println(a+" % "+b+" = "+resto);

    // incremento
    inc = a;
    System.out.println("Antes do incremento o valor da variavel inc foi de: "+inc);
    inc++;
    System.out.println("Apos o incremento o valor da variavel inc = "+inc);
    dec = b;
    System.out.println("Antes de decremento o valor da variavel dec foi de: "+dec);
    dec--;
    System.out.println("O valor da variavel apos o decremento foi de: "+dec);
  }
}
