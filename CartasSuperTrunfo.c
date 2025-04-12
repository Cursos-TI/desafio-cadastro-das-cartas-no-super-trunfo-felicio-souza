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
   



  

    return 0;
}
