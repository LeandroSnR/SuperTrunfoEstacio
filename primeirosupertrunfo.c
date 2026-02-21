#include <stdio.h>

int main() {
    /*
    Desafio é criar um programa para inserir duas cartas de supertrunfo
    Cada carta contem:
    Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    População: O número de habitantes da cidade. Tipo: int
    Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    PIB: O Produto Interno Bruto da cidade. Tipo: float
    Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    */

    int Estado1, Populacao1,PontosTuristicos1;
    char CodigoCarta1[4], NomeCidade1[50];
    float Area1, PIB1;

    int Estado2, Populacao2,PontosTuristicos2;
    char CodigoCarta2[4], NomeCidade2[50];
    float Area2, PIB2;

    // Inserir as informações da primeira carta
    printf("Primeira carta\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &Estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", &CodigoCarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &NomeCidade1);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &Populacao1);
    printf("Digite a area da cidade (em km^2): ");
    scanf("%f", &Area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &PontosTuristicos1);

    // Inserir as informações da segunda carta
    printf("\nSegunda carta\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &Estado2);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", &CodigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &NomeCidade2);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &Populacao2);
    printf("Digite a area da cidade (em km^2): ");
    scanf("%f", &Area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &PontosTuristicos2);

    // Exibir as informações das cartas 

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo da Carta: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km^2\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo da Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km^2\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos2);
    return 0;
}