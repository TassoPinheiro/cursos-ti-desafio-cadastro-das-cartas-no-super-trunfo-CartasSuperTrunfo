# include <stdio.h>

int main(){

// Desafio Super Trunfo - Países

// Tema 1 - cadastro de cartas

// carta 1
// Estado (char[]): ceará
// Codigo da carta (char[]): A01
// Nome da cidade (char[]): Fortaleza
// População (int): 2.428.678
// Área em km² (float):313,8
// PIB (float): R$ 73 Bilhões
// Números de pontos turísticos (int): 100

// Carta 2
// Estado (char{}): ceará
// Codigo da carta (char[]): A02
// Nome da cidade (char[]): Crato
// População (int): 135.604
// Área em km² (float): 1.009,202
// PIB (float): R$ 1,9 Bilhão
// Números de pontos turísticos (int): 17

int população1, turisticos1, população2, turisticos2;
    float area1, pib1, area2, pib2; 
    char estado1, estado2;
    char carta1[50], cidade1[50], carta2[50], cidade2[50];


    printf("CARTA 1\n");
    printf("Digite o estado: \n");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &população1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos1);

    printf("\nCARTA 2\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &população2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos2);


    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB (R$ Bi): %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB (R$ Bi): %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);

    return 0;
}
