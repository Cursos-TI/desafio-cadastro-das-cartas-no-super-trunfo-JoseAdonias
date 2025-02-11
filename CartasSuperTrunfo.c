#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char nome[50];
    int populacao;
    float pib;
    int turistico;

    // Leitura dos dados
    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome); // Limita o número de caracteres para evitar overflow

    printf("Insira a população atual: \n");
    scanf("%d", &populacao);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &turistico);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib);

    // Exibição dos dados
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Número de pontos turísticos: %d\n", turistico);
    printf("PIB: %f\n", pib);

    return 0;
}