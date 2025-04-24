#include <stdio.h>
#include <ctype.h>

int main() {
    //Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4]; // Exemplo: A01
    char num_codigo1[3]; //quando o código for digitado, não vai precisar digitar de novo a letra do estado
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    /*-------------------------------------------------------------------------------------------------------*/

    //Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char num_codigo2[3]; //quando o código for digitado, não vai precisar digitar de novo a letra do estado
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

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
    scanf("%d", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
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
    scanf("%d", &populacao2);

    printf("Informe a Área em km² (use ponto para decimais): ");
    scanf("%f", &area2);

    printf("Informe o PIB em bilhões de reais (use ponto para decimais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

    /*-------------------------------------------------------------------------------------------------------*/

    // Exibição dos dados das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    /*-------------------------------------------------------------------------------------------------------*/

    return 0;
}
