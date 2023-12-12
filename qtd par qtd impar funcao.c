#include <stdio.h>

#define TAM 6

void qtdParImpar(int num[]) {
    int i, qtdPar = 0, qtdImpar = 0;

    for (i = 0; i < TAM; i++) {
        num[i] % 2 == 0 ? qtdPar++ : qtdImpar++;
    }

    printf("\nPar: %d\n", qtdPar);
    printf("Impar: %d\n", qtdImpar);
}

int main() {
    int i, j, num[TAM];

    for (i = 0; i < TAM; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }

    system("clear || cls");

    printf("\nQuantidades de pares e impares\n");
    qtdParImpar(num);

    printf("\nValores digitados\n\n");
    for (j = 0; j < TAM; j++) {
        num[j] % 2 == 0 ? printf("%d - [PAR]\n", num[j]) : printf("%d - [IMPAR]\n", num[j]);
    }

    return 0;
}