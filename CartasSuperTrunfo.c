#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1[]="santacatarina";
    char codigo1[5] = "S1";
    char nomeCidade1[50] ="Florianopolis";
    int populacao1 = 537211;
    float area1 = 675.4;
    float pib1 = 23555034439;
    int pontosTuristicos1 = 18;

    // Declaração das variáveis para a segunda carta
    char estado2[]="Parana";
    char codigo2[5] = "P1";
    char nomeCidade2[50] = "Curitiba";
    int populacao2 = 1773718;
    float area2 = 432;
    float pib2 = 98000000000;
    int pontosTuristicos2 = 14;

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
