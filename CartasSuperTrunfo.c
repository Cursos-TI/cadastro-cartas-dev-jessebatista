#include <stdio.h>

    int main (){
        // --- Variaveis da Carta 1 ---
        char Estado1;
        char Cod1[20];
        char Cidade1[20];
        unsigned long int Populacao1;
        int PontosTuristicos1;
        float Area1;
        float Pib1;
        float DensidadePopulacional1;
        float PibPercapita1;
        float SuperPoder1;

        // --- Variaveis da Carta 2 ---
        char Estado2;   
        char Cod2[20];
        char Cidade2[20];
        unsigned long int Populacao2;
        int PontosTuristicos2;
        float Area2;
        float Pib2;
        float DensidadePopulacional2;
        float PibPercapita2;
        float SuperPoder2;

        
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
        scanf("%lu", &Populacao1);

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

        SuperPoder1 = (float)Populacao1+Area1+Pib1+(float)PontosTuristicos1+PibPercapita1+(1.0 / DensidadePopulacional1);

        
        
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
        scanf("%lu", &Populacao2);

        printf("Area (em km²): ");
        scanf(" %f", &Area2);

        printf("Pib: ");
        scanf("%f", &Pib2);

        printf("Numeros de Pontos Turisticos: ");
        scanf("%d", &PontosTuristicos2);

        DensidadePopulacional2 = (float)Populacao2 / Area2;
        PibPercapita2 = Pib2 / (float)Populacao2;
        printf("Densidade Populacional: %.2f \n", DensidadePopulacional2);       
        printf("PIB per Capita: %.2f\n", PibPercapita2);

        SuperPoder2 = (float)Populacao2+Area2+Pib2+(float)PontosTuristicos2+PibPercapita2+(1.0 / DensidadePopulacional2);
        
        printf("===========================\n");
        printf("== Comparações das Cartas==\n");
        printf("===========================\n");
       
        // População
        printf("Populacao: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);

        // Área
        printf("Area: Carta 1 venceu (%d)\n", Area1 > Area2);

        // PIB
        printf("PIB: Carta 1 venceu (%d)\n", Pib1 > Pib2);

        // Pontos Turísticos
        printf("Pontos Turisticos: Carta 1 venceu (%d)\n", PontosTuristicos1 > PontosTuristicos2);

        // Densidade (MENOR vence)
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", DensidadePopulacional1 < DensidadePopulacional2);

        // PIB per capita
        printf("PIB per Capita: Carta 1 venceu (%d)\n", PibPercapita1 > PibPercapita2);

        // Super Poder
        printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);


        return 0;

        
 }