#include<stdio.h>

int main (){

    char estado1, estado2, cidade1[50], cidade2[50], cod1[50], cod2[50];
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, mediadp1, mediadp2, mediapib1, mediapib2;
    unsigned long int populacao1, populacao2;

    printf("Digite os Dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%c", &estado1);
    printf("Código: ");
    scanf("%s", cod1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%u", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    mediadp1 = populacao1 / area1;
    mediapib1 = pib1 * 1000000000 / populacao1;

    printf("\nDigite os Dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", cod2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%u", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    mediadp2 = populacao2 / area2;
    mediapib2 = pib2 * 1000000000 / populacao2;

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", mediadp1);
    printf("PIB per Capita: %.2f reais\n", mediapib1);
    
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", mediadp2);
    printf("PIB per Capita: %.2f reais\n", mediapib2);

    float total1 = 0;
    total1 = (float)populacao1 + (area1 * 1000) + (pib1 * 1000000000) + pontosTuristicos1 + mediapib1 - mediadp1;
    
    float total2 = 0;
    total2 = (float)populacao2 + (area2 * 1000) + (pib2 * 1000000000) + pontosTuristicos2 + mediapib2 - mediadp2;

    int populacao = populacao1 > populacao2;
    int area = area1 > area2;
    int pib = pib1 > pib2;
    int pontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    int densidadePopulacional = mediadp1 < mediadp2;
    int pibPerCapita = mediapib1 > mediapib2;
    int superPoder = total1 > total2;

    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", populacao);
    printf("Área %d\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %d\n", densidadePopulacional);
    printf("PIB per Capita: %d\n", pibPerCapita);
    printf("Super Poder: %d\n", superPoder);

    return 0;
}
