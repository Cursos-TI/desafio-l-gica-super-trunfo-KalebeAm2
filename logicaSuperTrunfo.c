#include <stdio.h>

int main() {
    // Carta 1: Estados Unidos
    char nome1[] = "Estados Unidos";
    char codigo1[] = "A01";
    unsigned long populacao1 = 331900000;
    float area1 = 9831510.0;
    float pib1 = 25.5;
    int pontos1 = 63;

    // Carta 2: China
    char nome2[] = "China";
    char codigo2[] = "B01";
    unsigned long populacao2 = 1412000000;
    float area2 = 9596961.0;
    float pib2 = 17.7;
    int pontos2 = 100;

    // Exibição dos dados
    printf("=== Carta 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.0f km²\n", area1);
    printf("PIB: %.2f trilhões\n", pib1);
    printf("Pontos turísticos: %d\n\n", pontos1);

    printf("=== Carta 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.0f km²\n", area2);
    printf("PIB: %.2f trilhões\n", pib2);
    printf("Pontos turísticos: %d\n\n", pontos2);

    // Comparação de um único atributo (população)
    printf("=== Comparação: População ===\n");
    if (populacao1 > populacao2) {
        printf("Vencedor: %s\n", nome1);
    } else if (populacao1 < populacao2) {
        printf("Vencedor: %s\n", nome2);
    } else {
        printf("Empate: as duas cidades têm a mesma população.\n");
    }

    return 0;
}
