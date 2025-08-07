#include <stdio.h>



int main() {
    // Declaração das variáveis para a Carta 1
    char estado1, codigo1[5], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Declaração das variáveis para a Carta 2
    char estado2, codigo2[5], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Instruções para o usuário inserir os dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (exemplo: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    return 0;
}
