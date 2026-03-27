#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
        char Estado1;
        char Cod1[20];
        char Cidade1[20];
        int Populacao1;
        int PontosTuristicos1;
        float Area1;
        float Pib1;

        // --- Variaveis da Carta 2 ---
        char Estado2;   
        char Cod2[20];
        char Cidade2[20];
        int Populacao2;
        int PontosTuristicos2;
        float Area2;
        float Pib2;

  // Área para entrada de dados
        /* Cadastro da Carta 1 */
        printf("=== Cadastro da Carta 1 ===\n");
        printf("Digite o estado (A-H): ");
        scanf(" %c", &Estado1);

        printf(" Codigo (ex: A01): ");
        scanf("%s", Cod1);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", Cidade1);

        printf("Populacao: ");
        scanf("%d", &Populacao1);

        printf("Area (em km²): ");
        scanf(" %f", &Area1);

        printf("Pib: ");
        scanf("%f", &Pib1);

        printf("Numeros de Pontos Turisticos: ");
        scanf("%d", &PontosTuristicos1);
        
        /* Cadastro da Carta 2 */
        printf("=== Cadastro da Carta 2 ===\n");
        printf("Digite o estado (A-H): ");
        scanf(" %c", &Estado2);

        printf(" Codigo (ex: A01): ");
        scanf("%s", Cod2);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", Cidade2);

        printf("Populacao: ");
        scanf("%d", &Populacao2);

        printf("Area (em km²): ");
        scanf(" %f", &Area2);

        printf("Pib: ");
        scanf("%f", &Pib2);

        printf("Numeros de Pontos Turisticos: ");
        scanf("%d", &PontosTuristicos2);

  // Área para exibição dos dados da cidade

return 0;
} 
