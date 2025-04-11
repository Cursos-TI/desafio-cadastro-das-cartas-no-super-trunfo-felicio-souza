#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {

   
    //Definição das variaveis a ser usada

    //CARTA 1

    char estado1[20];
    char codigo1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //CARTA 2

    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Coletando informações das cartas

    //CARTA 1
    printf("Carta 1 \n");
    printf("Digite a letra representando o estado: \n");
    scanf("%s", &estado1);
    printf("Digite o código: \n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a area: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

        //CARTA 2

    printf("Carta 2 \n");
    printf("Digite a letra representando o estado: \n");
    scanf("%s", &estado2);
    printf("Digite o código: \n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a area: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);



    // Esta parte do codigo imprimi as informações das cartas coletadas atraves da digitação

    //CARTA 1
    printf("\n");
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f Km\n", area1);
    printf("PIB: %f \n", pib1);
    printf("Numeros de pontos turisticos: %d \n \n", pontosturisticos1);


    //CARTA 2
    printf("Carta 2\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f Km\n", area2);
    printf("PIB: %f \n", pib2);
    printf("Numeros de pontos turisticos: %d \n", pontosturisticos2);
   



  

// Estado: A

// Código: A01

// Nome da Cidade: São Paulo

// População: 12325000

// Área: 1521.11 km²

// PIB: 699.28 bilhões de reais

// Número de Pontos Turísticos: 50
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
