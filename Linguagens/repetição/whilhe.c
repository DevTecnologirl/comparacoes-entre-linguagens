#include <stdio.h>

int main(){
  float base, altura, area;
  printf("Informe a base do retangulo:");
  scanf("%f",&base);
  while(base > 0)
  {
    printf("Digite a altura do retangulo");
    scanf("%f",&altura);
    area = base * altura;
    printf("A area do retangulo = %.1f.\n",area);
    printf("Digite a base do retangulo: ");
    scanf("%f",&base);
  }
  return 0;
}