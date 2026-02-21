#include <stdio.h>

/*Struct arquiva informações*/
struct Carta{
    /* Dados da carta */
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

struct Carta criar_carta() {
    
    struct Carta c;
    
    printf("Digite a populacao da cidade: ");
    scanf("%d", &c.populacao);
    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &c.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &c.pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &c.pontos_turisticos);
    return c;
}

void calculos_da_cidade(struct Carta c) {
    // Função para realizar cálculos relacionados à cidade, como densidade populacional, PIB per capita, etc.
    float densidade_populacional = c.populacao / c.area;
    float pib_per_capita = c.pib / c.populacao;
    
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade_populacional);
    printf("PIB Per Capita: %.2f\n", pib_per_capita);

}

int main() {
    char cod_estado; 
    int cod_cidade;

    printf("Desafio Super Trunfo - Nivel Aventureiro\n");
    printf("Selecione o estado (A-H) e a cidade (1-4) para criar suas cartas de Super Trunfo.\n");
    printf("Digite o codigo do estado (A-H): ");
    scanf(" %c", &cod_estado);
    printf("Digite o codigo da cidade (1-4): ");
    scanf("%d", &cod_cidade);
    
    struct Carta minhaCarta = criar_carta();
    calculos_da_cidade(minhaCarta);
    return 0;
}