#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
        char estado1;
        char estado2;
        char nomecidade1;
        char nomecidade2;
        char codigocarta1;
        char codigocarta2;
        int populacao1;
        int populacao2;
        float area1;
        float area2;
        float pib1;
        float pib2;
        int pontostur1;
        int pontostur2;

        
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
        printf ("Digite o nome do primeiro estado\n");
        scanf ("%c", estado1);

        printf ("Digite o codigo da carta\n");
        scanf ("%c", codigocarta1);

        printf ("nome da primeira cidade\n");
        scanf ("%c", nomecidade1);

        printf ("nome da primeira cidade\n");
        scanf ("%d", populacao1);

        printf ("Digite a area(km²)\n");
        scanf ("%f", area1);

        printf ("digite o pib\n");
        scanf ("%f", pib1);

        printf ("digite a quantidade de pontos turistico\n");
        scanf ("%d", pontostur2);

        printf ("Digite o nome do segundo estado\n");
        scanf ("%c", estado2);
        
        printf ("Digite o codigo da carta\n");
        scanf ("%c", codigocarta2);

        printf ("nome da primeira cidade\n");
        scanf ("%c", nomecidade2);

        printf ("nome da primeira cidade\n");
        scanf ("%d", populacao2);

        printf ("Digite a area(km²)\n");
        scanf ("%f", area2);

        printf ("digite o pib\n");
        scanf ("%f", pib2);

        printf ("digite a quantidade de pontos turistico\n");
        scanf ("%d", pontostur2);

        printf("Carta1:\n");
        printf("Estado:\n", estado1);
        printf("Codigo da carta:\n", codigocarta1);
        printf("Nome da cidade:\n", nomecidade1);
        printf("Populaçao:\n", populacao1);
        printf("Area(Km²):\n", area1);
        printf("Pib:\n", pib1);
        printf("Pontos turisticos:\n", pontostur1);

    return 0;
}
