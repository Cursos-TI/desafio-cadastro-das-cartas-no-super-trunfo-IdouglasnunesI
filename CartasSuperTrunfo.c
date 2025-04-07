#include <stdio.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
int main() {
    char estado1, estado2; 
    char codigocarta1, codigocarta2;
    char nomecidade1[50], nomecidade2[50]; // Arrays para armazenar strings
    int populacao1, populacao2, escolha1, escolha2;
    float area1, area2, pib1, pib2, dens1, dens2, pibpc1, pibpc2;
    char pontostur1[100], pontostur2[100];
    

    // **Coletando dados para a primeira cidade**
    printf("Digite a sigla do estado (ex: SP, RJ, MG):\n");
    scanf(" %c", &estado1);  

    printf("Digite o código da carta:\n");
    scanf(" %c", &codigocarta1);
    getchar(); 

    printf("Nome da primeira cidade:\n");
    scanf("%49[^\n]", &nomecidade1);
    getchar(); 

    printf("População da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área (km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    getchar(); 

    printf("Pontos turísticos:\n");
    scanf("%99[^\n]", pontostur1);
    getchar(); 
    

    dens1 = populacao1 / area1;
    printf("Densidade populacional: %f\n", dens1);

    pibpc1 = pib1 / populacao1;
    printf("PIB per capita: %f\n", pibpc1);

   

    // **Coletando dados para a segunda cidade**
    printf("\nDigite a sigla do estado da segunda cidade:\n");
    scanf(" %c", &estado2);  

    printf("Digite o código da segunda carta:\n");
    scanf(" %c", &codigocarta2);
    getchar();

    printf("Nome da segunda cidade:\n");
    scanf("%49[^\n]", &nomecidade2);
    getchar();

    printf("População da segunda cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade (km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade:\n");
    scanf("%f", &pib2);
    getchar();

    printf("Pontos turísticos da segunda cidade:\n");
    scanf("%99[^\n]", pontostur2);
    getchar();
    

    dens2 = populacao2 / area2;
    printf("Densidade populacional: %f\n", dens1);

    pibpc2 = pib2 / populacao2;
    printf("PIB per capita: %f\n", pibpc1);

    // **Exibir os dados coletados**
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %c\n", codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %s\n", pontostur1);
    printf("Densidade populacional: %f\n", dens1);
    printf("PIB per capita: %f\n", pibpc1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %c\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %s\n", pontostur2);
    printf("Densidade populacional: %f\n", dens2);
    printf("PIB per capita: %f\n", pibpc2);


   
    printf("=== Escolha o primeiro atributo para a disputa: 1:populaçao 2:Area 3:PIB 4:Pontos turisticos 5:Densidade populacional 6: PIB per capita ===");
    scanf("%d", &escolha1);

    printf("=== Escolha o segundo atributo para a disputa: 1:populaçao 2:Area 3:PIB 4:Pontos turisticos 5:Densidade populacional 6: PIB per capita ===");
    scanf("%d", &escolha2);

    
    switch (escolha1) {
        case 1:
             printf("%s\n", 
            (populacao1 > populacao2) ? "Jogador 1 VENCEU pela população!" :
            (populacao2 > populacao1) ? "Jogador 2 VENCEU pela população!" :
            "Empate em população!");

            break;

        case 2:
             printf("%s\n",
            (area1 > area2) ? "Jogador 1 VENCEU pela área!" :
            (area2 > area1) ? "Jogador 2 VENCEU pela área!" :
            "Empate em área!");
            break;

        case 3:
            printf("%s\n",
                (pib1 > pib2) ? "Jogador 1 VENCEU pelo PIB!" :
                (pib2 > pib1) ? "Jogador 2 VENCEU pelo PIB!" :
                "Empate em PIB!");
            break;

            case 4:
            printf("%d\n",
                (pontostur1 > pontostur2) ? "Jogador 1 VENCEU pelos pontos turísticos!" :
                (pontostur2 > pontostur1) ? "Jogador 2 VENCEU pelos pontos turísticos!" :
                "Empate em pontos turísticos!");
            break;
    
        case 5:
            printf("%s\n",
                (dens1 < dens2) ? "Jogador 1 VENCEU pela densidade populacional!" :
                (dens2 < dens1) ? "Jogador 2 VENCEU pela densidade populacional!" :
                "Empate em densidade populacional!");
            break;
    
        case 6:
            printf("%s\n",
                (pibpc1 > pibpc2) ? "Jogador 1 VENCEU pelo PIB per capita!" :
                (pibpc2 > pibpc1) ? "Jogador 2 VENCEU pelo PIB per capita!" :
                "Empate em PIB per capita!");
            break;
    
        default:
            printf("Escolha incorreta\n");
            break;
    }

    switch (escolha2) {
        case 1:
             printf("%s\n", 
            (populacao1 > populacao2) ? "Jogador 1 VENCEU pela população!" :
            (populacao2 > populacao1) ? "Jogador 2 VENCEU pela população!" :
            "Empate em população!");

            break;

        case 2:
             printf("%s\n",
            (area1 > area2) ? "Jogador 1 VENCEU pela área!" :
            (area2 > area1) ? "Jogador 2 VENCEU pela área!" :
            "Empate em área!");
            break;

        case 3:
            printf("%s\n",
                (pib1 > pib2) ? "Jogador 1 VENCEU pelo PIB!" :
                (pib2 > pib1) ? "Jogador 2 VENCEU pelo PIB!" :
                "Empate em PIB!");
            break;

        case 4:
            printf("%s\n",
                (strcmp(pontostur1, pontostur2) > 0) ? "Jogador 1 VENCEU pelos pontos turísticos!" :
                (strcmp(pontostur2, pontostur1) > 0) ? "Jogador 2 VENCEU pelos pontos turísticos!" :
                "Empate em pontos turísticos!");
            break;
    
        case 5:
            printf("%s\n",
                (dens1 < dens2) ? "Jogador 1 VENCEU pela densidade populacional!" :
                (dens2 < dens1) ? "Jogador 2 VENCEU pela densidade populacional!" :
                "Empate em densidade populacional!");
            break;
    
        case 6:
            printf("%s\n",
                (pibpc1 > pibpc2) ? "Jogador 1 VENCEU pelo PIB per capita!" :
                (pibpc2 > pibpc1) ? "Jogador 2 VENCEU pelo PIB per capita!" :
                "Empate em PIB per capita!");
            break;
    
        default:
            printf("Escolha incorreta\n");
            break;
    }

    return 0;
}
