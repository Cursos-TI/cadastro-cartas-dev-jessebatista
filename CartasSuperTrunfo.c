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

        //Variavel para o menu
        int opcao;

        
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
       
        // --- Comparação de População ---
        printf("Comparação de cartas (Atributo: População):\n");
        if (Populacao1 > Populacao2) {
            printf("Carta 1 - %s: %lu\n", Cidade1, Populacao1);
            printf("Carta 2 - %s: %lu\n", Cidade2, Populacao2);
            printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
        } else {
            printf("Carta 1 - %s: %lu\n", Cidade1, Populacao1);
            printf("Carta 2 - %s: %lu\n", Cidade2, Populacao2);
            printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
        }
        printf("---------------------------\n");

        // --- Comparação de Densidade Populacional (MENOR vence) ---
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
        if (DensidadePopulacional1 < DensidadePopulacional2) {
            printf("Carta 1 - %s: %.2f hab/km²\n", Cidade1, DensidadePopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", Cidade2, DensidadePopulacional2);
            printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
        } else {
            printf("Carta 1 - %s: %.2f hab/km²\n", Cidade1, DensidadePopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", Cidade2, DensidadePopulacional2);
            printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
        }
        printf("---------------------------\n");

        // --- Comparação de Super Poder ---
        printf("Comparação de cartas (Atributo: Super Poder):\n");
        if (SuperPoder1 > SuperPoder2) {
            printf("Carta 1 - %s: %.2f\n", Cidade1, SuperPoder1);
            printf("Carta 2 - %s: %.2f\n", Cidade2, SuperPoder2);
            printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
        } else {
            printf("Carta 1 - %s: %.2f\n", Cidade1, SuperPoder1);
            printf("Carta 2 - %s: %.2f\n", Cidade2, SuperPoder2);
            printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
        }

        //Menu interativo
        printf("\n===========================\n");
        printf("== Escolha o Atributo ==\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - Super Poder\n");
        printf("Opção: ");
        scanf("%d", &opcao);

    printf("\n===========================\n");
    printf("== Resultado da Comparação ==\n");
    printf("===========================\n");

    switch(opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %lu\n", Cidade1, Populacao1);
            printf("%s: %lu\n", Cidade2, Populacao2);
            if (Populacao1 > Populacao2) printf("Vencedor: %s\n", Cidade1);
            else if (Populacao2 > Populacao1) printf("Vencedor: %s\n", Cidade2);
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", Cidade1, Area1);
            printf("%s: %.2f km²\n", Cidade2, Area2);
            if (Area1 > Area2) printf("Vencedor: %s\n", Cidade1);
            else if (Area2 > Area1) printf("Vencedor: %s\n", Cidade2);
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", Cidade1, Pib1);
            printf("%s: %.2f\n", Cidade2, Pib2);
            if (Pib1 > Pib2) printf("Vencedor: %s\n", Cidade1);
            else if (Pib2 > Pib1) printf("Vencedor: %s\n", Cidade2);
            else printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", Cidade1, PontosTuristicos1);
            printf("%s: %d\n", Cidade2, PontosTuristicos2);
            if (PontosTuristicos1 > PontosTuristicos2) printf("Vencedor: %s\n", Cidade1);
            else if (PontosTuristicos2 > PontosTuristicos1) printf("Vencedor: %s\n", Cidade2);
            else printf("Empate!\n");
            break;

        case 5: // Densidade (MENOR VENCE)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", Cidade1, DensidadePopulacional1);
            printf("%s: %.2f hab/km²\n", Cidade2, DensidadePopulacional2);
            if (DensidadePopulacional1 < DensidadePopulacional2) printf("Vencedor: %s\n", Cidade1);
            else if (DensidadePopulacional2 < DensidadePopulacional1) printf("Vencedor: %s\n", Cidade2);
            else printf("Empate!\n");
            break;

        case 6: // Super Poder
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", Cidade1, SuperPoder1);
            printf("%s: %.2f\n", Cidade2, SuperPoder2);
            if (SuperPoder1 > SuperPoder2) printf("Vencedor: %s\n", Cidade1);
            else if (SuperPoder2 > SuperPoder1) printf("Vencedor: %s\n", Cidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

        
        
 