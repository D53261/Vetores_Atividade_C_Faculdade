#include <stdio.h>

int main()
{
    int num1[20], num2[20], num3[20], num4[20], num5[20];
    
    for (int i = 0; i < 20; i++) {
        printf("Digite um numero para o primeiro vetor: ");
        scanf("%d", &num1[i]);
    }
    
    for (int i = 0; i < 20; i++) {
        printf("Digite um numero para o segundo vetor: ");
        scanf("%d", &num2[i]);
    }
    
    printf("Vetor 3: \n");
    
    for (int i = 0; i < 20; i++) {
        if (num1[i] > num2[i]) {
            num3[i] = num1[i] - num2[i];
        } else {
            num3[i] = num2[i] - num1[i];
        }
        
        printf("%d \n", num3[i]);
    }
    
    printf("Vetor 4: \n");
    
    for (int i = 0; i < 20; i++) {
        num4[i] = num1[i] + num2[i];
        printf("%d \n", num4[i]);
    }
    
    printf("Vetor 5: \n");
    
    for (int i = 0; i < 20; i++) {
        num5[i] = num1[i] * num2[i];
        printf("%d \n", num5[i]);
    }

    return 0;
}
