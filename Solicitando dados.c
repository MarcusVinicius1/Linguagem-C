#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	// Declarando variaveis
	int idade;
	float peso;
	char sexo;
	char nome[200];
	
	// Solicitando dados para o usuario
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	
	fflush(stdin); // Limpa o cache de input
	
	printf("Digite seu sexo: ");
	scanf("%c",&sexo);

	printf("Digite seu nome: ");
	gets(nome);
	// fgets(nome, 200, stdin);
	// nome[strcspn(nome, "\n")] = 0;

	system("cls || clear"); // Limpa o terminal
	
	// Exibindo dados do usuario
	printf("Idade: %d anos \n", idade);
	printf("Peso: %.2f Kg \n", peso);
	printf("Sexo: %c \n", sexo);
	printf("Nome: %s \n", nome);
		
	return 0;
}
