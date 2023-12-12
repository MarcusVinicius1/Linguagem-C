#include <stdio.h>
#include <stdlib.h>

int main() {
    system("nt || cls");

    char alunos[4][200]; // Dois alunos
    float notas[2][4]; // Duas notas para cada um dos quatro alunos
    int i, j;

    for (i = 0; i < 4; i++) {
        printf("Digite o nome do aluno: ");
        gets(alunos[i]);

        for (j = 0; j < 2; j++) {
            printf("Digite a nota do aluno: ");
            scanf("%f", &notas[i][j]);
        }

        fflush(stdin);
    }

    printf("\nExibindo dados dos alunos\n");

    for (i = 0; i < 4; i++) {
        printf("\nNome do aluno: %s\n", alunos[i]);

        for (j = 0; j < 2; j++) {
            printf("Notas: %.1f\n", notas[i][j]);
        }
    }

    return 0;
}