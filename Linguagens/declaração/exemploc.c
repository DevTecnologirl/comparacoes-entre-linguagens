#include <stdio.h>

int main()
{
  char nome[20];
  int idade;
  float altura;

  printf("DIGITE SEU NOME:");
  scanf("%s", nome);
  printf("DIGITE SUA IDADE");
  scanf("%d",&idade);
  printf("DIGITE SUA ALTURA");
  scanf("%f",&altura);

  printf("%s tem %d anos de idade e mede %.2fm.",nome,idade,altura);
  return 0;
}