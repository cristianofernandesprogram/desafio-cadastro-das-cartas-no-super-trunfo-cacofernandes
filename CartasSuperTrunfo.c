#include <stdio.h>

int main() {
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2; 
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Carta 1 

    printf("*** Carta 1 ***\n");
    printf("Digite o Estado: ");
    scanf("%2s", estado1);

    printf("Digite o Código da Carta: ");
    scanf("%3s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome1); 

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2 


    printf("\n*** Carta 2 ***\n");
    printf("Digite o Estado: ");
    scanf("%2s", estado2);

    printf("Digite o Código da Carta: ");
    scanf("%3s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // Comparações 


    // População

    printf("\n*** Comparação das Cartas (População) ***\n");
    printf("Carta 1 - %s: %d habitantes\n", nome1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", nome2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // Área

    printf("\n*** Comparação de Cartas (Área) ***\n");
    printf("Carta 1 - %s: %.2f km²\n", nome1, area1);
    printf("Carta 2 - %s: %.2f km²\n", nome2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // PIB

    printf("\n*** Comparação de Cartas (PIB) ***\n");
    printf("Carta 1 - %s: %.2f bilhões de reais\n", nome1, pib1);
    printf("Carta 2 - %s: %.2f bilhões de reais\n", nome2, pib2);
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2  venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // Pontos Turísticos

    printf("\n*** Comparação de Cartas (Pontos Turísticos) ***\n");
    printf("Carta 1 - %s: %d pontos turísticos\n", nome1, pontosTuristicos1);
    printf("Carta 2 - %s: %d pontos turísticos\n", nome2, pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Resultado: Carta 1  venceu!\n");
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Resultado: Carta 2  venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    
    return 0;
}


