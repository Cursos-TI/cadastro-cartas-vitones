#include <stdio.h>

struct CartaCidade {
    char codigo[5];
    long long populacao;
    double area;
    double pib;
    int pontos_turisticos;

    double densidade_populacional;
    double pib_per_capita;
    double super_poder;
};

//Função 1: Cadastrar Carta
 void cadastrar_carta(struct CartaCidade *c) {
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", c->codigo); //

    printf("Digite a população: ");
    scanf("%lld", &c->populacao);

    printf("Digite a área (em km²): ");
    scanf("%lf", &c->area);

    printf("Digite o PIB (em R$): ");
    scanf("%lf", &c->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontos_turisticos);

    // Cálculos
    c->densidade_populacional = (c->area > 0) ? (double)c->populacao / c->area : 0;
    c->pib_per_capita = (c->populacao > 0) ? c->pib / (double)c->populacao : 0;

    c->super_poder = (double)c->populacao +
                       c->area +
                       c->pib +
                       (double)c->pontos_turisticos +
                       c->densidade_populacional +
                       c->pib_per_capita;
    
    printf("Carta %s cadastrada com sucesso!\n", c->codigo);
}

//Função 2: Exibir Carta
 void exibir_carta(struct CartaCidade c) {
    printf("--- Ficha Técnica: %s ---\n", c.codigo);
    printf("População: %lld\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: R$ %.2f\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade: %.2f hab/km²\n", c.densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n", c.pib_per_capita);
    printf("Super Poder: %.2f\n", c.super_poder);
}

/*
 * Função 3: Comparar Cartas
 * Recebe as duas cartas e imprime o vencedor de cada atributo.
 */
void comparar_cartas(struct CartaCidade c1, struct CartaCidade c2) {
    printf("\n--- COMPARAÇÃO: %s vs %s ---\n\n", c1.codigo, c2.codigo);

    // População (Maior vence)
    printf("População: (%lld vs %lld) -> ", c1.populacao, c2.populacao);
    if (c1.populacao > c2.populacao) printf("Vencedor: %s\n", c1.codigo);
    else if (c2.populacao > c1.populacao) printf("Vencedor: %s\n", c2.codigo);
    else printf("Empate\n");

    // Área (Maior vence)
    printf("Área: (%.2f vs %.2f) -> ", c1.area, c2.area);
    if (c1.area > c2.area) printf("Vencedor: %s\n", c1.codigo);
    else if (c2.area > c1.area) printf("Vencedor: %s\n", c2.codigo);
    else printf("Empate\n");

    // PIB (Maior vence)
    printf("PIB: (%.2f vs %.2f) -> ", c1.pib, c2.pib);
    if (c1.pib > c2.pib) printf("Vencedor: %s\n", c1.codigo);
    else if (c2.pib > c1.pib) printf("Vencedor: %s\n", c2.codigo);
    else printf("Empate\n");

    // Pontos Turísticos (Maior vence)
    printf("Pontos Turísticos: (%d vs %d) -> ", c1.pontos_turisticos, c2.pontos_turisticos);
    if (c1.pontos_turisticos > c2.pontos_turisticos) printf("Vencedor: %s\n", c1.codigo);
    else if (c2.pontos_turisticos > c1.pontos_turisticos) printf("Vencedor: %s\n", c2.codigo);
    else printf("Empate\n");

    // Densidade Populacional (MENOR vence)
    printf("Densidade: (%.2f vs %.2f) -> ", c1.densidade_populacional, c2.densidade_populacional);
    if (c1.densidade_populacional < c2.densidade_populacional) printf("Vencedor: %s (Menor vence)\n", c1.codigo);
    else if (c2.densidade_populacional < c1.densidade_populacional) printf("Vencedor: %s (Menor vence)\n", c2.codigo);
    else printf("Empate\n");

    // PIB per Capita (Maior vence)
    printf("PIB per Capita: (%.2f vs %.2f) -> ", c1.pib_per_capita, c2.pib_per_capita);
    if (c1.pib_per_capita > c2.pib_per_capita) printf("Vencedor: %s\n", c1.codigo);
    else if (c2.pib_per_capita > c1.pib_per_capita) printf("Vencedor: %s\n", c2.codigo);
    else printf("Empate\n");

    // Super Poder (Maior vence)
    printf("Super Poder: (%.2f vs %.2f) -> ", c1.super_poder, c2.super_poder);
    if (c1.super_poder > c2.super_poder) printf("Vencedor: %s\n", c1.codigo);
    else if (c2.super_poder > c1.super_poder) printf("Vencedor: %s\n", c2.codigo);
    else printf("Empate\n");
}


// Função principal
int main() {
    struct CartaCidade carta1, carta2;

    printf("--- Super Trunfo (Mestre) ---\n");
    
    // 1. Cadastrar as duas cartas
    printf("\n--- Cadastro da Carta 1 ---\n");
    cadastrar_carta(&carta1);
    
    printf("\n--- Cadastro da Carta 2 ---\n");
    cadastrar_carta(&carta2);

    // 2. Exibir as fichas técnicas
    printf("\n--- Fichas Técnicas ---\n");
    exibir_carta(carta1);
    printf("\n");
    exibir_carta(carta2);

    // 3. Comparar as cartas
    comparar_cartas(carta1, carta2);

    return 0;
}
