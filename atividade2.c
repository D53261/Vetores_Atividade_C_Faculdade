#include <stdio.h>

int main()
{
    int num1[10], num2[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num1[i]);
        if (num1[i] < 0) {
            printf("O numero precisa ser positivo!\n");
            i--;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            num2[i] = num1[i] / 2;
        } else {
            num2[i] = num1[i] * 3;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("Valor do vetor 1: %d \n", num1[i]);
        printf("Valor do vetor 2: %d \n\n", num2[i]);
    }

    return 0;
}
