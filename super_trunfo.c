#include <stdio.h>

int main() {

    char estado[20], estado2[20];
    char codigo[20], codigo2[20]; //código da carta.
    char nome[20], nome2[20]; //nome da cidade.
    int populacao, populacao2; 
    float area, area2;
    float PIB, PIB2;
    int pontos, pontos2; //pontos turisticos

    printf("*** Bem-Vindo ao Jogo Super Trunfo\n\n");

    printf("Digite o nome do estado:\n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao);

    printf("Digite a área de seu territótio em quilômetros quadrados:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos);

    printf("\n");

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d \n\n", pontos);


    printf("Digite o nome do segundo estado:\n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome2);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao2);

    printf("Digite a área de seu territótio em quilômetros quadrados:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos2);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d \n\n", pontos2);

    return 0;

}