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

    int escolha1, escolha2;
    int vitoria1 = 0;
    int vitoria2 = 0;

    // Menu interativo
    printf("=== SUPER TRUNFO - PAÍSES (Nível Mestre) ===\n");
    printf("Atributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área Territorial\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");

    printf("\nEscolha o 1º atributo para comparar: ");
    scanf("%d", &escolha1);

    printf("Escolha o 2º atributo para comparar: ");
    scanf("%d", &escolha2);

    // Comparação do primeiro atributo
    switch(escolha1) {
        case 1:
            vitoria1 += (populacao1 > populacao2) ? 1 : 0;
            vitoria2 += (populacao2 > populacao1) ? 1 : 0;
            break;
        case 2:
            vitoria1 += (area1 > area2) ? 1 : 0;
            vitoria2 += (area2 > area1) ? 1 : 0;
            break;
        case 3:
            vitoria1 += (pib1 > pib2) ? 1 : 0;
            vitoria2 += (pib2 > pib1) ? 1 : 0;
            break;
        case 4:
            vitoria1 += (pontos1 > pontos2) ? 1 : 0;
            vitoria2 += (pontos2 > pontos1) ? 1 : 0;
            break;
        default:
            printf("Atributo 1 inválido!\n");
            return 1;
    }

    // Comparação do segundo atributo
    switch(escolha2) {
        case 1:
            vitoria1 += (populacao1 > populacao2) ? 1 : 0;
            vitoria2 += (populacao2 > populacao1) ? 1 : 0;
            break;
        case 2:
            vitoria1 += (area1 > area2) ? 1 : 0;
            vitoria2 += (area2 > area1) ? 1 : 0;
            break;
        case 3:
            vitoria1 += (pib1 > pib2) ? 1 : 0;
            vitoria2 += (pib2 > pib1) ? 1 : 0;
            break;
        case 4:
            vitoria1 += (pontos1 > pontos2) ? 1 : 0;
            vitoria2 += (pontos2 > pontos1) ? 1 : 0;
            break;
        default:
            printf("Atributo 2 inválido!\n");
            return 1;
    }

    // Exibição do resultado final
    printf("\n=== Resultado ===\n");
    printf("%s venceu %d atributo(s).\n", nome1, vitoria1);
    printf("%s venceu %d atributo(s).\n", nome2, vitoria2);

    if (vitoria1 > vitoria2) {
        printf("🏆 Vencedora: %s\n", nome1);
    } else if (vitoria2 > vitoria1) {
        printf("🏆 Vencedora: %s\n", nome2);
    } else {
        printf("⚖️ Empate geral! Cada país venceu 1 atributo.\n");
    }

    return 0;
}
