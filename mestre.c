#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[100], codigo1[10], nomeCidade1[100];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2[100], codigo2[10], nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Variáveis de cálculo
    float densidade1, pibPerCapita1, superPoder1;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada de dados - Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados - Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Comparações
    printf("\n=== Comparação de Cartas ===\n");

    printf("População: ");
    if (populacao1 > populacao2)
        printf("Carta 1 venceu\n");
    else if (populacao1 < populacao2)
        printf("Carta 2 venceu\n");
    else    
        printf("Empate\n");

    printf("Área: ");
    if (area1 > area2)
        printf("Carta 1 venceu\n");
    else if (area1 < area2)
        printf("Carta 2 venceu\n");
    else    
        printf("Empate\n");

    printf("PIB: ");
    if (pib1 > pib2)
        printf("Carta 1 venceu\n");
    else if (pib1 > pib2)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

    printf("Pontos Turísticos: ");
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Carta 1 venceu\n");
    else if (pontosTuristicos1 < pontosTuristicos2)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

        printf("Densidade Populacional (menor vence): ");
    if (densidade1 > densidade2)
        printf("Carta 1 venceu\n");
    else if (densidade1 < densidade2)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

        printf("PIB Per Capita: ");
    if (pibPerCapita1 > pibPerCapita2)
        printf("Carta 1 venceu\n");
    else if (pibPerCapita1 < pibPerCapita2)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

    printf("Super Poder: ");
    if (superPoder1 > superPoder2)
        printf("Carta 1 venceu\n");
    else if (superPoder1 < superPoder2)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

    return 0;
}


