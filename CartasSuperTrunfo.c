#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
      struct CartaCidade cidade1;
      printf("--- Cadastro de Carta Super Trunfo ---\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades
    struct CartaCidade {
      char codigo[5];
      long long populacao;
      double area;
      double pib;
      int pontos_turisticos;
}
  // Área para entrada de dados
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
  
  // Área para exibição dos dados da cidade
    printf("\n--- Carta Cadastrada: %s ---\n", cidade1.codigo);
    printf("População: %lld\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area); // %.2f para formatar com 2 casas decimais
    printf("PIB: R$ %.2f\n", cidade1.pib);
    printf("Pontos Turísticos: %d\n", cidade1.pontos_turisticos);

  return 0;
} 
