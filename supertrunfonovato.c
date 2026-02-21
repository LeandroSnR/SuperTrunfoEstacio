#include <stdio.h>

int main() {
    /*
    Desafio é criar um programa para inserir todas as cartas de supertrunfo
    No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.
    
    Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. 
    A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).
    */

    /*
    Criar cartas representando cidades, contendo as seguintes propriedades:
        População
        Área
        PIB
        Número de pontos turísticos
    */

    /*
    Preciso criar uma forma de o usuário selecionar o estado e a cidade para criar as cartas de supertrunfo, e depois exibir as informações das cartas criadas.
    Existirão 32 cartas no total (8 estados x 4 cidades cada).
    O usuário selecionará o codigo do estado e depois o codigo da cidade, depois ele irá informar as informações da carta (população, área, PIB, número de pontos turísticos) e depois exibir as informações das cartas criadas.
    */
    int cod_estado, cod_cidade;

    printf("Desafio Super Trunfo - Nivel Novato\n");
    printf("Selecione o estado (A-H) e a cidade (1-4) para criar suas cartas de Super Trunfo.\n");
    printf("Digite o codigo do estado (A-H): ");
    scanf(" %c", &cod_estado);
    printf("Digite o codigo da cidade (1-4): ");
    scanf("%d", &cod_cidade);
    criar_carta(cod_estado, cod_cidade);
    return 0;


}

void criar_carta(int cod_estado, int cod_cidade) {
    // Função para criar uma carta com base no código do estado e cidade
    // Aqui você pode definir as propriedades da carta (população, área, PIB, pontos turísticos) com base no código
    // Exemplo de criação de carta (você pode personalizar os valores conforme necessário)
    int populacao, pontos_turisticos;
    float area, pib;
    scanf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);
    // Definir as propriedades da carta com base no código do estado e cidade
    // Exibir as informações da carta criada
    printf("Carta criada: Estado %c, Cidade %d\n", cod_estado, cod_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos);

}