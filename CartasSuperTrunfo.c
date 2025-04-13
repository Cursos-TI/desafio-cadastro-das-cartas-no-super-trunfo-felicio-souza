#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.


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

    //Foi adionado mais duas variaveis ao codigo envolendo calculos
    float densidadePopulacional1;
    float pibPerCapta1;

    //CARTA 2

    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Foi adionado mais duas variaveis ao codigo envolendo calculos
    float densidadePopulacional2;
    float pibPerCapta2;

    //Coletando informações das cartas

    //CARTA 1
    printf("Carta 1 \n");
    printf("Digite a letra representando o estado: ");
    scanf("%s", &estado1);
    printf("Digite o código: ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

        //CARTA 2
    printf("\n");    
    printf("Carta 2 \n");
    printf("Digite a letra representando o estado: ");
    scanf("%s", &estado2);
    printf("Digite o código: ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);


    //Aqui será aplicado os calculos
    densidadePopulacional1 = (float)populacao1/area1;
    pibPerCapta1 = pib1/(float)populacao1;

    densidadePopulacional2 = (float)populacao2/area2;
    pibPerCapta2 = pib2/(float)populacao2;


    // Esta parte do codigo imprimi as informações das cartas coletadas atraves da digitação

    //CARTA 1
    printf("\n");
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Numeros de pontos turisticos: %d \n", pontosturisticos1);
    printf("Dencidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais \n \n", pibPerCapta1);


    //CARTA 2
    printf("Carta 2\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Numeros de pontos turisticos: %d \n", pontosturisticos2);
    printf("Dencidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapta2);


//Exemplos de dados de entrada para testes

// Estado: A
// Código: A01
// Cidade: Fortaleza
// População: 2700000
// Área: 313.8
// PIB: 65300000000
// Número de pontos turísticos: 30

// Estado: B
// Código: B01
// Cidade: Salvador
// População: 2900000
// Área (em km²): 693.0
// PIB: 73000000000
// Número de pontos turísticos: 30


    return 0;
}
