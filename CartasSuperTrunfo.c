#include <stdio.h>
#include <ctype.h>

int main() {
    //Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4]; //Exemplo: A01
    char num_codigo1[3]; //quando o código for digitado, não vai precisar digitar de novo a letra do estado
    char nome_cidade1[50];
    unsigned long int populacao1; //unsigned long é implemento do nível mestre
    float area1;
    float densidade_populacional1; //implemento do nível intermediário
    float pib1;
    float pib_per_capita1; //implemento do nível intermediário
    int pontos_turisticos1;
    float super_poder1; //implemento do nível mestre

    /*-------------------------------------------------------------------------------------------------------*/

    //Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char num_codigo2[3]; //quando o código for digitado, não vai precisar digitar de novo a letra do estado
    char nome_cidade2[50];
    unsigned long int populacao2; //unsigned long é implemento do nível mestre
    float area2;
    float densidade_populacional2; //implemento do nível intermediário
    float pib2;
    float pib_per_capita2; //implemento do nível intermediário
    int pontos_turisticos2;
    float super_poder2; //implemento do nível mestre

    /*-------------------------------------------------------------------------------------------------------*/

    //Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1); //espaço antes de %c ignora enter pendente
    estado1 = toupper(estado1); //passa para mauísculo

    printf("Informe o Código da Carta (ex: 01): ");
    scanf("%s", num_codigo1);
    codigo1[0] = estado1;
    codigo1[1] = num_codigo1[0];
    codigo1[2] = num_codigo1[1];
    codigo1[3] = '\0'; // Finaliza a string

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1); //lê até a quebra de linha, incluindo espaços

    printf("Informe a População: ");
    scanf("%lu", &populacao1);

    printf("Informe a Área em km² (use ponto para decimais): ");
    scanf("%f", &area1);

    printf("Informe o PIB em bilhões de reais (use ponto para decimais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    /*-------------------------------------------------------------------------------------------------------*/

    //Entrada dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2); //espaço antes de %c ignora enter pendente
    estado2 = toupper(estado2); //passa para mauísculo

    printf("Informe o Código da Carta (ex: 01): ");
    scanf("%s", num_codigo1);
    codigo1[0] = estado1;
    codigo1[1] = num_codigo1[0];
    codigo1[2] = num_codigo1[1];
    codigo1[3] = '\0'; // Finaliza a string

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2); //lê até a quebra de linha, incluindo espaços

    printf("Informe a População: ");
    scanf("%lu", &populacao2);

    printf("Informe a Área em km² (use ponto para decimais): ");
    scanf("%f", &area2);

    printf("Informe o PIB em bilhões de reais (use ponto para decimais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

    /*-------------------------------------------------------------------------------------------------------*/

    //Cálculos necessários do nível intermediário
    densidade_populacional1 = populacao1/area1; //para encontrar a densidade populacional 1
    pib_per_capita1 = pib1/populacao1; //para encontrar o pib per capita 1

    densidade_populacional2 = populacao2/area2; //para encontrar a densidade populacional 2
    pib_per_capita2 = pib2/populacao2; //para encontrar o pib per capita 2

    /*-------------------------------------------------------------------------------------------------------*/

    //Cálculos necessários do nível mestre
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1/densidade_populacional1); //cálculo do super poder da carta 1
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1/densidade_populacional2); //cálculo do super poder da carta 2

    /*-------------------------------------------------------------------------------------------------------*/

    //Exibição dos dados das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Densidade populacional: %.2f km²\n", densidade_populacional1); //implementação do nível intermediário
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("PIB per capita: R$ %.2f bilhões\n", pib_per_capita1); //implementação do nível intermediário
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Super poder: %.2f\n", super_poder1); //implementação do nível mestre

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Densidade populacional: %.2f km²\n", densidade_populacional2); //implementação do nível intermediário
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("PIB per capita: R$ %.2f bilhões\n", pib_per_capita2); //implementação do nível intermediário
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Super poder: %.2f\n", super_poder2); //implementação do nível mestre

    printf("\n");

    /*-------------------------------------------------------------------------------------------------------*/

    //Comparação das cartas (implementação do nível mestre)

    printf("Comparação das cartas:\n");
    if (populacao1 > populacao2) printf("População: carta 1 venceu\n");
    else printf ("População: carta 2 venceu\n");

    if (area1 > area2) printf("Área: carta 1 venceu\n");
    else printf("Área: carta 2 venceu\n");

    //no caso da densidade vence a menor, não a maior
    if (densidade_populacional1 < densidade_populacional2) printf("Densidade populacional: carta 1 venceu\n");
    else printf("Densidade populacional: carta 2 venceu\n");

    if (pib1 > pib2) printf("PIB: carta 1 venceu\n");
    else printf("PIB: carta 2 venceu\n");

    if (pib_per_capita1 > pib_per_capita2) printf("PIB per capita: carta 1 venceu\n");
    else printf("PIB per capita: carta 2 venceu\n");

    if (pontos_turisticos1 > pontos_turisticos2) printf("Pontos turísticos: carta 1 venceu\n");
    else printf("Pontos turísticos: carta 2 venceu\n");

    if(super_poder1 > super_poder2) printf("Super poder: carta 1 venceu\n");
    else printf("Super poder: carta 2 venceu\n");

    /*-------------------------------------------------------------------------------------------------------*/

    return 0;
}
