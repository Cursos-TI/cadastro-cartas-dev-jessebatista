#include <stdio.h>

int main() {

    // --- Variaveis da Carta 1 ---
    char Estado1;
    char Cod1[20];
    char Cidade1[50];
    unsigned long int Populacao1;
    int PontosTuristicos1;
    float Area1, Pib1, DensidadePopulacional1, PibPercapita1;

    // --- Variaveis da Carta 2 ---
    char Estado2;
    char Cod2[20];
    char Cidade2[50];
    unsigned long int Populacao2;
    int PontosTuristicos2;
    float Area2, Pib2, DensidadePopulacional2, PibPercapita2;

    // Variaveis do menu e comparacao
    int opcao1, opcao2;
    double val1_attr1, val2_attr1, val1_attr2, val2_attr2;
    double soma1, soma2;

    /* ===========================
       Cadastro da Carta 1
    =========================== */
    printf("===========================\n");
    printf("=== Cadastro da Carta 1 ===\n");
    printf("===========================\n");
    printf("Estado (A-H): ");
    scanf(" %c", &Estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", Cod1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", Cidade1);
    printf("Populacao: ");
    scanf("%lu", &Populacao1);
    printf("Area (km2): ");
    scanf("%f", &Area1);
    printf("PIB (bi USD): ");
    scanf("%f", &Pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos1);

    DensidadePopulacional1 = (float)Populacao1 / Area1;
    PibPercapita1          = Pib1 / (float)Populacao1;

    printf("  -> Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional1);
    printf("  -> PIB per Capita:         %.2f USD\n",     PibPercapita1);

    /* ===========================
       Cadastro da Carta 2
    =========================== */
    printf("\n===========================\n");
    printf("=== Cadastro da Carta 2 ===\n");
    printf("===========================\n");
    printf("Estado (A-H): ");
    scanf(" %c", &Estado2);
    printf("Codigo (ex: A01): ");
    scanf("%s", Cod2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", Cidade2);
    printf("Populacao: ");
    scanf("%lu", &Populacao2);
    printf("Area (km2): ");
    scanf("%f", &Area2);
    printf("PIB (bi USD): ");
    scanf("%f", &Pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos2);

    DensidadePopulacional2 = (float)Populacao2 / Area2;
    PibPercapita2          = Pib2 / (float)Populacao2;

    printf("  -> Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional2);
    printf("  -> PIB per Capita:         %.2f USD\n",     PibPercapita2);

    /* ===========================
       Menu: Escolha do 1 Atributo
    =========================== */
    printf("\n===========================\n");
    printf("=== Escolha o Atributo 1 ===\n");
    printf("===========================\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // Valida a primeira opcao — se invalida, avisa e encerra
    if (opcao1 < 1 || opcao1 > 6) {
        printf("Opcao invalida! Execute o programa novamente.\n");
        return 1;
    }

    /* ===========================
       Menu: Escolha do 2 Atributo
    =========================== */
    printf("\n===========================\n");
    printf("=== Escolha o Atributo 2 ===\n");
    printf("===========================\n");

    // Exibe apenas os atributos que NAO foram escolhidos no 1o menu
    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demografica\n");
    if (opcao1 != 6) printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao2);

    // Valida a segunda opcao
    if (opcao2 < 1 || opcao2 > 6) {
        printf("Opcao invalida! Execute o programa novamente.\n");
        return 1;
    }

    if (opcao2 == opcao1) {
        printf("Voce escolheu o mesmo atributo! Execute o programa novamente.\n");
        return 1;
    }

    /* ===========================
       Busca os valores do Atributo 1
       para cada carta
    =========================== */
    switch (opcao1) {
        case 1:
            val1_attr1 = (double)Populacao1;
            val2_attr1 = (double)Populacao2;
            break;
        case 2:
            val1_attr1 = (double)Area1;
            val2_attr1 = (double)Area2;
            break;
        case 3:
            val1_attr1 = (double)Pib1;
            val2_attr1 = (double)Pib2;
            break;
        case 4:
            val1_attr1 = (double)PontosTuristicos1;
            val2_attr1 = (double)PontosTuristicos2;
            break;
        case 5:
            val1_attr1 = (double)DensidadePopulacional1;
            val2_attr1 = (double)DensidadePopulacional2;
            break;
        default: // case 6
            val1_attr1 = (double)PibPercapita1;
            val2_attr1 = (double)PibPercapita2;
            break;
    }

    /* ===========================
       Busca os valores do Atributo 2
       para cada carta
    =========================== */
    switch (opcao2) {
        case 1:
            val1_attr2 = (double)Populacao1;
            val2_attr2 = (double)Populacao2;
            break;
        case 2:
            val1_attr2 = (double)Area1;
            val2_attr2 = (double)Area2;
            break;
        case 3:
            val1_attr2 = (double)Pib1;
            val2_attr2 = (double)Pib2;
            break;
        case 4:
            val1_attr2 = (double)PontosTuristicos1;
            val2_attr2 = (double)PontosTuristicos2;
            break;
        case 5:
            val1_attr2 = (double)DensidadePopulacional1;
            val2_attr2 = (double)DensidadePopulacional2;
            break;
        default: // case 6
            val1_attr2 = (double)PibPercapita1;
            val2_attr2 = (double)PibPercapita2;
            break;
    }

    /* ===========================
       Soma dos atributos
       Para Densidade (menor e melhor),
       subtraimos para penalizar quem
       tem maior densidade.
    =========================== */
    soma1 = 0;
    soma2 = 0;

    if (opcao1 == 5) {
        soma1 = soma1 - val1_attr1;
        soma2 = soma2 - val2_attr1;
    } else {
        soma1 = soma1 + val1_attr1;
        soma2 = soma2 + val2_attr1;
    }

    if (opcao2 == 5) {
        soma1 = soma1 - val1_attr2;
        soma2 = soma2 - val2_attr2;
    } else {
        soma1 = soma1 + val1_attr2;
        soma2 = soma2 + val2_attr2;
    }

    /* ===========================
       Exibicao do Resultado
    =========================== */
    printf("\n=====================================\n");
    printf("====== RESULTADO DA COMPARACAO ======\n");
    printf("=====================================\n");
    printf("Paises: %s  vs  %s\n\n", Cidade1, Cidade2);

    // --- Resultado do Atributo 1 ---
    printf("--- Atributo 1: ");
    switch (opcao1) {
        case 1: printf("Populacao\n");            break;
        case 2: printf("Area\n");                 break;
        case 3: printf("PIB\n");                  break;
        case 4: printf("Pontos Turisticos\n");    break;
        case 5: printf("Densidade Demografica\n");break;
        case 6: printf("PIB per Capita\n");       break;
    }
    printf("  %s: %.2f\n", Cidade1, val1_attr1);
    printf("  %s: %.2f\n", Cidade2, val2_attr1);


    if (opcao1 == 5) {
        printf("  Resultado: %s\n",
            val1_attr1 < val2_attr1 ? Cidade1 :
            val2_attr1 < val1_attr1 ? Cidade2 : "Empate");
    } else {
        printf("  Resultado: %s\n",
            val1_attr1 > val2_attr1 ? Cidade1 :
            val2_attr1 > val1_attr1 ? Cidade2 : "Empate");
    }

    printf("\n");

   
    printf("--- Atributo 2: ");
    switch (opcao2) {
        case 1: printf("Populacao\n");            break;
        case 2: printf("Area\n");                 break;
        case 3: printf("PIB\n");                  break;
        case 4: printf("Pontos Turisticos\n");    break;
        case 5: printf("Densidade Demografica\n");break;
        case 6: printf("PIB per Capita\n");       break;
    }
    printf("  %s: %.2f\n", Cidade1, val1_attr2);
    printf("  %s: %.2f\n", Cidade2, val2_attr2);

    if (opcao2 == 5) {
        printf("  Resultado: %s\n",
            val1_attr2 < val2_attr2 ? Cidade1 :
            val2_attr2 < val1_attr2 ? Cidade2 : "Empate");
    } else {
        printf("  Resultado: %s\n",
            val1_attr2 > val2_attr2 ? Cidade1 :
            val2_attr2 > val1_attr2 ? Cidade2 : "Empate");
    }

    printf("\n");


    printf("--- Soma dos Atributos ---\n");
    printf("  %s: %.2f\n", Cidade1, soma1);
    printf("  %s: %.2f\n", Cidade2, soma2);
    printf("\n");

    printf("=====================================\n");
    if (soma1 > soma2)
        printf("  VENCEDOR FINAL: %s!\n", Cidade1);
    else if (soma2 > soma1)
        printf("  VENCEDOR FINAL: %s!\n", Cidade2);
    else
        printf("  RESULTADO: Empate!\n");
    printf("=====================================\n");

    return 0;
}
