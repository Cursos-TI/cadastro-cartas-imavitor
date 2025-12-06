#include <stdio.h>
    int main(){
    //variáveis declaradas juntas, da primeira e da segunda carta (1 e 2 no final das variáveis representam carta 1 e 2, respectivamente)
        char estado1[50], codigo1[50],cidade1[50], estado2[50], codigo2[50], cidade2[50];
        int populacao1, npturisticos1, populacao2, npturisticos2;  
        float area1, PIB1, area2, PIB2; //PIBPC = PIB PER CAPITA  
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

    //Declarando as variáveis da segunda parte do desafio
    float densidade1 = (float) populacao1/area1;
    float densidade2 = (float) populacao2/area2;
    float PIBPC1 = PIB1/populacao1; //PIBPC = PIB Per Capita
    float PIBPC2 = PIB2/populacao2;

    //exibição da tela da primeira carta, variáveis declaradas no mesmo print com quebra para não repetir o comando print
        printf("Carta 1\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População %d\n Área: %.2f km²\n PIB: %.2f reais\n Número de Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, PIB1, npturisticos1);
    //exibindo a segunda parte em outro print apenas para ficar mais fácil de entender que esta é a segunda parte do desafio    
        printf(" Densidade Populacional: %.2f hab/km²\n PIB Per Capita: %.2f reais\n ", densidade1, PIBPC1);
    //exibição da tela da segunda carta, variáveis declaradas no mesmo print com quebra para não repetir o comando print
        printf("Carta 2\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População %d\n Área: %.2f km²\n PIB: %.2f reais\n Número de Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, PIB2, npturisticos2);
        printf(" Densidade Populacional: %.2f hab/km²\n PIB Per Capita: %.2f reais\n ", densidade2, PIBPC2);
       
        return 0;
    }