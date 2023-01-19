#include <stdio.h>

int main(void)
{
  int a=5, b=3;
  int soma, sub, mult, quoc, resto, inc, dec;
  float divi;

  soma = a+b;
  printf("%d + %d = %d\n",a,b,soma);
   sub = a-b;
  printf("%d - %d = %d\n",a,b,sub);
   mult = a*b;
  printf("%d * %d = %d\n",a,b,mult);
  divi = (float)a/b;
  printf("%f / %d = %f\n",(float)a,b,divi);
   quoc = a/b;
  printf("%d / %d = %d\n",a,b,quoc);
  resto = a%b;
  printf("%d %% %d = %d\n",a,b,resto);

  //incremento
  inc = a;
  printf("Antes do incremento o valor da variavel inc = %d.\n",inc);
  inc++;
  printf("Apos o incremento o valor da variavel inc = %d.\n",inc);
  dec = b;
  printf("Antes do decremento o valor da variavel dec = %d.\n",dec);
  dec --;
  printf("Apos o decremento o valor da variavel dec %d,\n",dec);
  return 0;
}