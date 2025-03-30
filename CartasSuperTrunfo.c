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
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    char pontostur1[100], pontostur2[100]; // Arrays para pontos turísticos

    // **Coletando dados para a primeira cidade**
    printf("Digite a sigla do estado (ex: SP, RJ, MG):\n");
    scanf(" %c", &estado1);  

    printf("Digite o código da carta:\n");
    scanf(" %c", &codigocarta1);
    getchar(); 

    printf("Nome da primeira cidade:\n");
    scanf("%49[^\n]", nomecidade1);
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

    // **Coletando dados para a segunda cidade**
    printf("\nDigite a sigla do estado da segunda cidade:\n");
    scanf(" %c", &estado2);  

    printf("Digite o código da segunda carta:\n");
    scanf(" %c", &codigocarta2);
    getchar();

    printf("Nome da segunda cidade:\n");
    scanf("%49[^\n]", nomecidade2);
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

    // **Exibir os dados coletados**
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %c\n", codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %s\n", pontostur1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %c\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %s\n", pontostur2);

    return 0;
}
