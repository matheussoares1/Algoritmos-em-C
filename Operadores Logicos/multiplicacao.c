#include <stdio.h>
int main(){
  int num1, num2, mult;
  
  printf("Digite o priemiro numero: ");
  scanf("%d", &num1);
  printf("Digite o Segundo numero: ");
  scanf("%d", &num2);
  
  mult = num1 * num2;
  printf("O resultado da multiplicação de %d x %d = %d", num1, num2, mult);
  
}
