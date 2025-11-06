#include <stdio.h>

struct CartaCidade {
    char codigo[5];
    long long populacao;
    double area;
    double pib;
    int pontos_turisticos;

    double densidade_populacional;
    double pib_per_capita;
};

int main() {
    struct CartaCidade cidade1;

    printf("Cadastro de Carta Super Trunfo\n");

    // 1. Entrada de Dados
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", cidade1.codigo);

    printf("Digite a população: ");
    scanf("%lld", &cidade1.populacao);

    printf("Digite a área (em km²): ");
    scanf("%lf", &cidade1.area);

    printf("Digite o PIB (em R$): ");
    scanf("%lf", &cidade1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade1.pontos_turisticos);

    // 2. Cálculos (Nível Aventureiro)
        if (cidade1.area > 0) {
        cidade1.densidade_populacional = (double)cidade1.populacao / cidade1.area;
    } else {
        cidade1.densidade_populacional = 0;
    }

    if (cidade1.populacao > 0) {
        cidade1.pib_per_capita = cidade1.pib / (double)cidade1.populacao;
    } else {
        cidade1.pib_per_capita = 0;
    }

    // 3. Saída de Dados
    printf("\nCarta Cadastrada: %s \n", cidade1.codigo);
    printf("População: %lld\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: R$ %.2f\n", cidade1.pib);
    printf("Pontos Turísticos: %d\n", cidade1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", cidade1.densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n", cidade1.pib_per_capita);

    return 0;
}
