#include <stdio.h>

int main() {
    // Dados fixos - Carta 1 (EUA)
    char nome1[] = "Estados Unidos";
    unsigned long populacao1 = 331900000;
    float area1 = 9831510.0;
    float pib1 = 25.5;
    int pontos1 = 63;

    // Dados fixos - Carta 2 (China)
    char nome2[] = "China";
    unsigned long populacao2 = 1412000000;
    float area2 = 9596961.0;
    float pib2 = 17.7;
    int pontos2 = 100;

    int opcao;

    printf("=== SUPER TRUNFO - PAÍSES ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área Territorial\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparação ===\n");

    switch(opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %lu\n", nome1, populacao1);
            printf("%s: %lu\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate na população!\n");
            }
            break;

        case 2:
            printf("Área Territorial (km²):\n");
            printf("%s: %.0f\n", nome1, area1);
            printf("%s: %.0f\n", nome2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate na área!\n");
            }
            break;

        case 3:
            printf("PIB (trilhões USD):\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate no PIB!\n");
            }
            break;

        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate nos pontos turísticos!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
