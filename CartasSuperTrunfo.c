#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados de uma cidade
    struct Cidade {
        char estado[5];
        char codigo[4]; // Codigo da carta (ex: A01)
        int populacao;  // Populacao da cidade
        float area;     // area da cidade
        float pib;      // PIB da cidade
        int pontos_turisticos; // Número de pontos turisticos
        float densidade_populacional; // Densidade populacional
        float pib_per_capita; // PIB per capita
    };

    // Declaração de duas cidades
    struct Cidade cidade1, cidade2;

    // Cadastro da primeira cidade
    printf("Cadastro da Cidade 1:\n");
    printf("Digite o Letra da cidade [entre 'A' a 'H']:");
    scanf("%s", cidade1.estado);
    printf("Digite o código da cidade[Ex: 01-04]: \n");
    scanf("%s", cidade1.codigo);
    printf("Digite a população: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área: ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB: ");
    scanf("%f", &cidade1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade1.pontos_turisticos);

    // Cálculo da Densidade Populacional e PIB per Capita para a primeira cidade
    cidade1.densidade_populacional = cidade1.populacao / cidade1.area;
    cidade1.pib_per_capita = cidade1.pib / cidade1.populacao;

    // Cadastro da segunda cidade
    printf("\nCadastro da Cidade 2:\n");
    printf("Digite o Letra da cidade [entre 'A' a 'H']:");
    scanf("%s", cidade2.estado);
    printf("Digite o código da cidade [Ex: 01-04] :\n");
    scanf("%s", cidade2.codigo);
    printf("Digite a população: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área: ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB: ");
    scanf("%f", &cidade2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade2.pontos_turisticos);

    // Calculo da Densidade Populacional e PIB per Capita para a segunda cidade
    cidade2.densidade_populacional = cidade2.populacao / cidade2.area;
    cidade2.pib_per_capita = cidade2.pib / cidade2.populacao;

    // Exibição dos dados da primeira cidade
    printf("\nDados da Cidade 1:\n");
    printf("Estado %s\n", cidade1.estado);
    printf("Código: %s%s\n", cidade1.estado, cidade2.codigo);
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f\n", cidade1.area);
    printf("PIB: %.2f\n", cidade1.pib);
    printf("Pontos Turísticos: %d\n", cidade1.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", cidade1.densidade_populacional);
    printf("PIB per Capita: %.2f\n", cidade1.pib_per_capita);

    // Exibição dos dados da segunda cidade
    printf("\nDados da Cidade 2:\n");
    printf("Estado %s\n", cidade2.estado);
    printf("Código: %s%s\n", cidade2.estado, cidade2.codigo);
    printf("População: %d\n", cidade2.populacao);
    printf("Área: %.2f\n", cidade2.area);
    printf("PIB: %.2f\n", cidade2.pib);
    printf("Pontos Turísticos: %d\n", cidade2.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", cidade2.densidade_populacional);
    printf("PIB per Capita: %.2f\n", cidade2.pib_per_capita);

    return 0;
}
