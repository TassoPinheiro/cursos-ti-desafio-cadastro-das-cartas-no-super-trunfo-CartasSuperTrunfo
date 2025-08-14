# include <stdio.h>

int main(){

// Desafio Super Trunfo - Países

// Tema 1 - cadastro de cartas (2 cartas)

// carta 1
// Estado (char[]): ceará
// Codigo da carta (char[]): A01
// Nome da cidade (char[]): Fortaleza
// População (int): 2.428.678
// Área em km² (float):313,8
// PIB (float): R$ 730.000.000
// Números de pontos turísticos (int): 100

// Carta 2
// Estado (char{}): ceará
// Codigo da carta (char[]): A02
// Nome da cidade (char[]): Crato
// População (int): 135.604
// Área em km² (float): 1.009.000
// PIB (float): R$ 190.000.000
// Números de pontos turísticos (int): 17

    int populacao1, turisticos1, populacao2, turisticos2;
    float area1, pib1, area2, pib2, densidadepop1, densidadepop2, pibper1, pibper2, superpoder1, superpoder2; 
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
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

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
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.0f\n", area1);
    printf("PIB (R$): %.0f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    
    densidadepop1 = (float) populacao1 / area1;
    printf("Densidade populacional: %.2f\n", densidadepop1);
    pibper1 = (float) pib1 / populacao1;
    printf("PIB per capita: %.2f\n", pibper1);

    //Super poder é a soma dos atributos ( população, área, PIB, pontos turísticos, (inverso da densidade pop.) e PIB per capita).
    superpoder1 = populacao1 + area1 + pib1 + turisticos1 + (1 / densidadepop1) + pibper1;
    printf("Super Poder: %.2f\n", superpoder1); 

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.0f\n", area2);
    printf("PIB (R$): %.0f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);

    densidadepop2 = (float) populacao2 / area2;
    printf("Densidade populacional: %.2f\n", densidadepop2);
    pibper2 = (float) pib2 / populacao2;
    printf("PIB per capita: %.2f\n", pibper2);

    //Super poder é a soma dos atributos ( população, área, PIB, pontos turísticos, (inverso da densidade pop.) e PIB per capita).
    superpoder2 = populacao2 + area2 + pib2 + turisticos2 + (1 / densidadepop2) + pibper2;
    printf("Super Poder: %.2f\n", superpoder2); 

    //acrescentando as variáveis de comparação das cartas
    int vencedor_populacao, vencedor_area, vencedor_PIB, vencedor_turistico, vencedor_densidade, vencedor_PIBper, vencedor_super;

    printf("\nCOMPARAÇÃO DE CARTAS: \n");
    printf("1 = CARTA 1 VENCE\n");
    printf("0 = CARTA 2 VENCE\n");

    vencedor_populacao = populacao1 > populacao2;
    printf("\nPopulação: %d\n", vencedor_populacao);
    vencedor_area = area1 > area2;
    printf("Área: %d\n", vencedor_area);
    vencedor_PIB = pib1 > pib2;
    printf("PIB: %d\n", vencedor_PIB);
    vencedor_turistico = turisticos1 > turisticos2;
    printf("Pontos turísticos: %d\n", vencedor_turistico);
    vencedor_densidade = densidadepop1 < densidadepop2;
    printf("Densidade: %d\n", vencedor_densidade);
    vencedor_PIBper = pibper1 > pibper2;
    printf("PIB per capita: %d\n", vencedor_PIBper);
    vencedor_super = superpoder1 > superpoder2;
    printf("Super poder: %d\n", vencedor_super);
    
    return 0;
}
