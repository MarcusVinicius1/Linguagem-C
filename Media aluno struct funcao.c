#include <stdio.h>
#include <string.h>

#define maxNota 3
#define maxAluno 1

typedef struct {
    char nome[200];
    float notas[maxNota];
    float media;
    char msg[50];
} Aluno;

void calcularMedia(Aluno *aluno) {
    aluno->media = (aluno->notas[0] + aluno->notas[1] + aluno->notas[2]) / maxNota;
}

int main() {
    Aluno aluno;

    int i, j;

    for (i = 0; i < maxAluno; i++) {
        printf("Digite seu nome: ");
        gets(aluno.nome);

        for (j = 0; j < maxNota; j++) {
            printf("Digite sua %d nota: ", j + 1);
            scanf("%f", &aluno.notas[j]);
        }

        fflush(stdin);
    }
 
    calcularMedia(&aluno);
    
    if (aluno.media >= 7) strcpy(aluno.msg, "Aprovado");
    else if (aluno.media >= 5 && aluno.media < 7) strcpy(aluno.msg, "Recuperacao");
    else strcpy(aluno.msg, "Reprovado");


    printf("\nResultado\n\n");

    for (i = 0; i < maxAluno; i++) {
        printf("Nome: %s\n", aluno.nome);

        for (j = 0; j < maxNota; j++) {
            printf("%d)- Nota: %.1f\n", j + 1, aluno.notas[j]);
        }
    }

    printf("Media: %.2f\n", aluno.media);
    printf("Aprovacao: %s\n", aluno.msg);

    return 0;
}