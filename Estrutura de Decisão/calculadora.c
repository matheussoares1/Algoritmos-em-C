#include <stdio.h>
#include <stdlib.h>

int main() {
    int tipo, num1, num2;
    float divisao;
    char teste;

    do {
        printf("-----CALCULADORA----- \n CALCULOs ENTRE DOIS NUMEROS REALIZAVEIS... \n 1 - SOMA \n 2 - SUBTRAÇÃO  \n 3 - MULTIPLICAÇÃO \n 4 - DIVISAO \n DIGITE O NUMERO REFERENTE A OPERAÇÃO QUE DESEJA REALIZAR: ");
        scanf("%d", &tipo);
        
        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%d", &num1);
        printf("DIGITE O SEGUNDO NUMERO: ");
        scanf("%d", &num2);

        switch(tipo) {
            case 1:
                printf("O VALOR DA SOMA DE %d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("O VALOR DA SUBTRAÇÃO DE %d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("O VALOR DA MULTIPLICAÇÃO DE %d x %d = %d\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    divisao = (float)num1 / num2;
                    printf("O VALOR DA DIVISÃO DE %d / %d = %.2f\n", num1, num2, divisao);
                } else {
                    printf("DIVISÃO POR ZERO NÃO É PERMITIDA!\n");
                }
                break;
            default:
                printf("OPÇÃO INVÁLIDA!\n");
                break;
        }

        printf("VOCÊ DESEJA CONTINUAR NA CALCULADORA? R: S/N ");
        scanf(" %c", &teste); // Note o espaço antes de %c para limpar o buffer

    } while (teste == 'S' || teste == 's');

    return 0;
}
