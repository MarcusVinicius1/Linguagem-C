#include <stdio.h>
#include <stdlib.h>

#define TAM 3

struct Dados_Aluno {
    char nomeAluno[200];
    int idade;
    float nota[2];
};

typedef struct Dados_Aluno Dados_Aluno[TAM];

int main() {
    Dados_Aluno Aluno;
    int i, j;

    for (i = 0; i < TAM; i++) {
        printf("Digite o nome do aluno: ");
        gets(&Aluno[i].nomeAluno);

        printf("Digite a idade: ");
        scanf("%d", &Aluno[j].idade);

        for (j = 0; j < TAM; j++) {
            printf("Digite a nota: ");
            scanf("%f", &Aluno[i].nota[j]);
        }

        fflush(stdin);
    }

    system("cls || clear");

    printf("\nInformacao\n");

    for (i = 0; i < TAM; i++) {
        printf("\n\tNome: %s\n", Aluno[i].nomeAluno);
        printf("\n\tIdade: %d\n", Aluno[i].idade);

        for (j = 0; j < TAM; j++) {
            printf("\tNota: %.1f\n", Aluno[j].nota);
        }

        printf("\n-------------------------------\n");
    }

    return 0;
}