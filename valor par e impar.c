#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, par, impar;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d",&num);

        num % 2 == 0 ? par++ : impar++;

        if (i == 5) printf("Par: %d\nImpar: %d\n", par, impar);
    }

    return 0;
}