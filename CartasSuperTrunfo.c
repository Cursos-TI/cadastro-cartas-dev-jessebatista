#include <stdio.h>

    int main (){
        // --- Variaveis da Carta 1 ---
        char Estado1;
        char Cod1[20];
        char Cidade1[20];
        int Populacao1;
        int PontosTuristicos1;
        float Area1;
        float Pib1;
        float DensidadePopulacional1;
        float PibPercapita1;

        // --- Variaveis da Carta 2 ---
        char Estado2;   
        char Cod2[20];
        char Cidade2[20];
        int Populacao2;
        int PontosTuristicos2;
        float Area2;
        float Pib2;
        float DensidadePopulacional2;
        float PibPercapita2;

        
        /* Cadastro da Carta 1 */
        printf("===========================\n");
        printf("=== Cadastro da Carta 1 ===\n");
        printf("===========================\n");
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

        DensidadePopulacional1 = (float)Populacao1 / Area1;
        PibPercapita1 = Pib1 / (float)Populacao1;
        printf("Densidade Populacional: %.2f \n", DensidadePopulacional1);       
        printf("PIB per Capita: %.2f \n", PibPercapita1);

        
        
        /* Cadastro da Carta 2 */
        printf("===========================\n");
        printf("=== Cadastro da Carta 2 ===\n");
        printf("===========================\n");
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

        DensidadePopulacional2 = (float)Populacao2 / Area2;
        PibPercapita2 = Pib2 / (float)Populacao2;
        printf("Densidade Populacional: %.2f \n", DensidadePopulacional2);       
        printf("PIB per Capita: %.2f", PibPercapita2);

        return 0;

        
 }