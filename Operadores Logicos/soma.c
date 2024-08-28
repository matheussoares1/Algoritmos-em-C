#include <stdio.h>
int main(){
  int num1, num2, soma;
  
  printf("Digite o priemiro numero: ");
  scanf("%d", &num1);
  printf("Digite o Segundo numero: ");
  scanf("%d", &num2);
  
  soma = num1 + num2;
  printf("O resultado da soma de %d + %d = %d", num1, num2, soma);
  
}
