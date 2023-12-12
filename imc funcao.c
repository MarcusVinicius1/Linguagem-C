#include <stdio.h>
#include <string.h>

float Calcimc(float PESO, float ALTURA) {
    float IMC = PESO / (ALTURA * ALTURA);

    return IMC;
}

char* Classificacao(float imc) {
    char msg[300];

    if(imc < 18.5) {
        strcpy(msg, "Abaixo do pesso");

    }else if (imc < 25) {
        strcpy(msg, "Peso normal");

    }else if (imc < 30) {
        strcpy(msg, "Sobrepeso");

    }else if (imc < 35) {
        strcpy(msg, "Obesidade grau I");

    }else if (imc < 40) {
        strcpy(msg, "Obesidade grau II");

    }else if (imc >= 40) {
        strcpy(msg, "Obesidade grau III");

    }else {
        strcpy(msg, "Error ao mostrar a classificacao");
    }

    return msg;
}

char* Recomendacao(float imc) {
    char msg[300];

    if(imc < 18.5) {
        strcpy(msg, "Consulte um nultricionista para orientacao");

    }else if (imc < 25) {
        strcpy(msg, "Mantenha habitos saudaveis");

    }else if (imc < 30) {
        strcpy(msg, "Considere uma dieta");

    }else if (imc < 35) {
        strcpy(msg, "Procure orientacao de um profissional de saude");

    }else if (imc < 40) {
        strcpy(msg, "Consulte um medico para avaliacao de orientacao");

    }else if (imc >= 40) {
        strcpy(msg, "Busque assistencia medica imediatamente");

    }else {
        strcpy(msg, "Error ao mostrar a recomendacao");
    }

    return msg;
}

int main() {
    float altura, peso, imc;
    char classifica[500], recomendacao[500];

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = Calcimc(peso, altura);

    printf("\nRESULTADO\n");
    
    printf("\nSeu imc \t%.2f\n", imc);
    printf("Classificacao \t%s\n", Classificacao(imc));
    printf("Recomendacao \t%s\n", Recomendacao(imc));

    return 0;
}