#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 //variáveis declaradas juntas, da primeira e da segunda carta
        char estado1[50], codigo1[50],cidade1[50], estado2[50], codigo2[50], cidade2[50];
        int populacao1, npturisticos1, populacao2, npturisticos2;
        float area1, PIB1, area2, PIB2;
// Área para entrada de dados
//código da primeira carta
        printf("Digite o estado da primeira carta: \n");
        scanf("%s", &estado1);
        printf("Digite o código da primeira carta: \n");
        scanf("%s", &codigo1);
        printf("Digite o nome da cidade da primeira carta com apenas uma palavra sem espaços: \n");
        scanf("%s", cidade1);
        printf("Digite a população da primeira carta: \n");
        scanf("%d", &populacao1);
        printf("Digite o numero de pontos turisticos da primeira carta: \n");
        scanf("%d", &npturisticos1);
        printf("Digite a área da primeira carta em km²: \n");
        scanf("%f", &area1);
        printf("Digite o PIB da primeira carta: \n");
        scanf("%f", &PIB1);
  //código da segunda carta
        printf("Digite o estado da segunda carta: \n");
        scanf("%s", &estado2);
        printf("Digite o código da segunda carta: \n");
        scanf("%s", &codigo2);
        printf("Digite o nome da cidade da segunda carta com apenas uma palavra sem espaços: \n");
        scanf("%s", cidade2);
        printf("Digite a população da segunda carta: \n");
        scanf("%d", &populacao2);
        printf("Digite o numero de pontos turisticos da segunda carta: \n");
        scanf("%d", &npturisticos2);
        printf("Digite a área da segunda carta em km²: \n");
        scanf("%f", &area2);
        printf("Digite o PIB da segunda carta: \n");
        scanf("%f", &PIB2);

  // Área para exibição dos dados da cidade
  //exibição da tela da primeira carta, variáveis declaradas no mesmo print com quebra para não repetir o comando print
        printf("Carta 1\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População %d\n Área: %.2f\n PIB: %.2f\n Número de Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, PIB1, npturisticos1);

  //exibição da tela da segunda carta, variáveis declaradas no mesmo print com quebra para não repetir o comando print
        printf("Carta 1\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População %d\n Área: %.2f\n PIB: %.2f\n Número de Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, PIB2, npturisticos2);

return 0;
} 
