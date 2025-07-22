#include <stdio.h>

// Definindo uma estrutura chamada "Carta" para armazenar os dados de cada cidade
struct Carta {
    char codigo[4];             // Código da cidade, ex: "A01"
    int populacao;              // População da cidade
    float area;                 // Área em km²
    float pib;                  // Produto Interno Bruto em bilhões
    int pontosTuristicos;       // Número de pontos turísticos
};

int main() {
// Declarando duas variáveis do tipo Carta
    struct Carta carta1;
    struct Carta carta2;

    // -------------------------------
    // Entrada de dados da Carta 1
    // -------------------------------
    printf("Cadastro da Carta 1\n");
    
    printf("Código da cidade (ex: A01): ");
    scanf("%s", carta1.codigo); // Lê o código da cidade

    printf("População: ");
    scanf("%d", &carta1.populacao); // Lê a população

    printf("Área (em km²): ");
    scanf("%f", &carta1.area); // Lê a área

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib); // Lê o PIB

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos); // Lê o número de pontos turísticos

    // -------------------------------
    // Entrada de dados da Carta 2
    // -------------------------------
    printf("\nCadastro da Carta 2\n");
    
    printf("Código da cidade (ex: B03): ");
    scanf("%s", carta2.codigo); // Lê o código da cidade

    printf("População: ");
    scanf("%d", &carta2.populacao); // Lê a população

    printf("Área (em km²): ");
    scanf("%f", &carta2.area); // Lê a área

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib); // Lê o PIB

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos); // Lê o número de pontos turísticos

    // -------------------------------
    // Exibição dos dados da Carta 1
    // -------------------------------
    printf("\n=== Carta 1 ===\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);

    // -------------------------------
    // Exibição dos dados da Carta 2
    // -------------------------------
    printf("\n=== Carta 2 ===\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);

    return 0; // Finaliza o programa
}
