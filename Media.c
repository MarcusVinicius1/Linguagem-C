#include <stdio.h>
#include <stdlib.h>

int main() {
    float numUm, numDois, media;

    printf("Digite sua primeira nota: ");
    scanf("%f",&numUm);

    printf("Digite sua segunda nota: ");
    scanf("%f",&numDois);

    media = (numUm + numDois) / 2;

    system("cls || clear");

    printf("===== INFORMACOES =====\n");
    printf("Nota 1: %f \n", numUm);
    printf("Nota 2: %f \n", numDois);
    printf("Media: %.2f \n", media);
    media >= 7 ? printf("Aprovado") : printf("Reprovado");

    return 0;
}