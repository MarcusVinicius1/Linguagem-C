#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int valor;

    setlocale(LC_ALL, "portuguese");

    printf("Digite um valor de 0 a 10: ");
    scanf("%d",&valor);

    valor == 10 ? printf("� igual a 10") : valor > 10 ? printf("� maior que 10") : printf("� menor que 10");

    getchar();
    // return 0;
}