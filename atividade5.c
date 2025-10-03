#include <stdio.h>

int main() {
    int N, i, iguais = 1;
    
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);
    
    int vetor1[N], vetor2[N];
    
    for (i = 0; i < N; i++) {
        printf("Digite o elemento %d do vetor 1: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    
    for (i = 0; i < N; i++) {
        printf("Digite o elemento %d do vetor 2: ", i+1);
        scanf("%d", &vetor2[i]);
    }
    
    for (i = 0; i < N; i++) {
        if (vetor1[i] != vetor2[i]) {
            iguais = 0;
            break;
        }
    }
    
    if (iguais == 1) {
        printf("\nOs vetores possuem conteudo igual.\n");
    } else {
        printf("\nOs vetores sao diferentes.\n");
    }

    return 0;
}
