#include <stdio.h>

int main() {
    int qtd = 5, maior = 0, menor = 9999, numero[5], i;
    int somaPar = 0, somaImpar = 0, somaTotal = 0;
    int qtdnumerosLidos = 0, qtdPositivo = 0, qtdNegativo = 0, qtdPar = 0, qtdImpar = 0;
    float mediaTotal, mediaPar, MediaImpar, MediApar, MadiaImpar;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d",&numero[i]);

        // Quantidade de numeros inseridos
        qtdnumerosLidos++;

        // Quantidade de pares impares // Media de numeros pares e impares
        if (numero[i] % 2 == 0) {
            qtdPar++;
            somaPar += numero[i];

        }else {
            qtdImpar++;
            somaImpar += numero[i];
        }

        // Quantidade de numeros positivos e negativos
        numero[i] > 0 ? qtdPositivo++ : qtdNegativo++;

        // Maior e menor numero
        maior = numero[i] > maior ? numero[i] : maior;
        menor = numero[i] < menor ? numero[i] : menor;

        // Media de todos os numeros inseridos
        somaTotal += numero[i];
    }

    mediaPar = somaPar / (float) qtdPar;
    MediaImpar = somaImpar / (float) qtdImpar;
    mediaTotal = somaTotal / (float) qtd;

    printf("\n----- Imformacoes -----\n");

    printf("\nNumeros pares: %d\n", qtdPar);
    printf("Numeros impares: %d\n", qtdImpar);
    printf("Numeros positivos: %d\n", qtdPositivo);
    printf("Numeros negativos: %d\n", qtdNegativo);
    printf("Quantidade de numeros inseridos: %d\n", qtdnumerosLidos);
    printf("O maior numero: %d\n", maior);
    printf("O menor numero: %d\n", menor);
    printf("Media de numeros pares: %.1f\n", mediaPar);
    printf("Media de numeros impares: %.1f\n", MediaImpar);
    printf("Media total: %.1f\n", mediaTotal);

    printf("\n----- Inverso -----\n\n");

    for (i = 5; i >= 0; i--) {
        printf("%d\n", numero[i]);
    }

    return 0;
}