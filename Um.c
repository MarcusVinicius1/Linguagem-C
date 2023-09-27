# include <stdio.h>
# include <stdlib.h>

int main() {
	int idade = 20; // Inteiro
	float peso = 80.2; // Real
	char sexo = 'f'; // Apenas um caracter
	char nome [200] = "Marcus"; // Cadeia de caracters
	
	printf("Idade: $d anos\n", idade);
	printf("Peso: $.2f \n", peso);
	printf("Sexo: $c \n", sexo);
	printf("Nome: $s \n", nome);
		
	return 0;
}

