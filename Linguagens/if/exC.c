#include <stdio.h>
 int main()
 {
    int num;
    printf("Informe um numero:");
    scanf("%d",&num);
    if (num < 0)
    {
      printf("O numero %d e negativo", num);
    }
    else
    {
     printf("O numero %d e positivo", num) 
    }
    return 0;
 }