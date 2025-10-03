#include <stdio.h>

int main()
{
    int num[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }
    
    printf("Numeros na ordem inversa: \n");
    for (int i = 9; i >= 0; i--) {
        printf("%d \n", num[i]);
    }

    return 0;
}
