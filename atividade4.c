#include <stdio.h>

int main() {
    int numeros[20], pares[20], impares[20];
    int qtdPares = 0, qtdImpares = 0, n, i, j, aux;

    printf("Quantos numeros deseja inserir (max 20)? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares[qtdPares] = numeros[i];
            qtdPares++;
        } else {
            impares[qtdImpares] = numeros[i];
            qtdImpares++;
        }
    }

    for (i = 0; i < qtdPares - 1; i++) {
        for (j = i + 1; j < qtdPares; j++) {
            if (pares[i] > pares[j]) {
                aux = pares[i];
                pares[i] = pares[j];
                pares[j] = aux;
            }
        }
    }

    for (i = 0; i < qtdImpares - 1; i++) {
        for (j = i + 1; j < qtdImpares; j++) {
            if (impares[i] < impares[j]) {
                aux = impares[i];
                impares[i] = impares[j];
                impares[j] = aux;
            }
        }
    }

    printf("\nPares em ordem crescente:\n");
    for (i = 0; i < qtdPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nImpares em ordem decrescente:\n");
    for (i = 0; i < qtdImpares; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n");

    return 0;
}
