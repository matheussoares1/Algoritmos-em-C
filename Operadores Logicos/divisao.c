#include <stdio.h>
int main(){
  int num1, num2, divisao;
  
  printf("Digite o priemiro numero: ");
  scanf("%d", &num1);
  printf("Digite o Segundo numero: ");
  scanf("%d", &num2);
  
  divisao = num1 / num2;
  printf("O resultado da divisão de %d + %d = %d", num1, num2, divisao);
  
}
