#include <stdio.h>
#include <stdlib.h>

#define TAM 3

struct Dados_Livro {
    char nomeLivro[200], autor[200], categoria[200];
    float preco;
};

typedef struct Dados_Livro Dados_Livro[TAM];

int main() {
    Dados_Livro Livro;
    int i, j;

    for (i = 0; i < TAM; i++) {
        printf("\n%d- livro\n\n", i + 1);
        printf("Digite o nome do livro: ");
        gets(&Livro[i].nomeLivro);

        fflush(stdin);

        for (j = 0; j < 1; j++) {
            printf("Digite o nome autor: ");
            gets(&Livro[j].autor);

            printf("Digite a categoria: ");
            gets(&Livro[j].categoria);

            printf("Digite o preco: ");
            scanf("%f", &Livro[j].preco);
        }

        fflush(stdin);
    }

    system("cls || clear");

    printf("\nBiblioteca\n");

    for (i = 0; i < TAM; i++) {
        printf("\n%d- livro\n", i + 1);
        printf("\n\tNome: %s\n", Livro[i].nomeLivro);

        for (j = 0; j < 1; j++) {
            printf("\n\tAutor: %s\n", Livro[j].autor);
            printf("\tCategoria: %s\n", Livro[j].categoria);
            printf("\tPreco: $ %.2f\n", Livro[j].preco);
        }

        printf("\n-------------------------------\n");
    }

    return 0;
}