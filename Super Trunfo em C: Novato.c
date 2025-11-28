#include <stdio.h>

int main(){
    char estadoA[10];
    char codigo_carta1[13], codigo_carta2[5];
    char estadoB[10]; 
    char cidade1[10], cidade2[10];
    int população1, população2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos1, pontos2;

    //carta 1:

    printf("Digite o estado da carta 1: \n");
    scanf("%s", estadoA);

    printf("Digite o código da carta 1: \n");
    scanf("%s", codigo_carta1);

    printf("Digite a Cidade da carta 1: \n");
    scanf("%s", cidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &população1);

    printf("Digite a area por km2 da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &PIB1);

    printf("Digite quantos pontos turisticos da carta 1: \n");
    scanf("%d", &pontos1);

    //CARTA 2:

    printf("Digite o estado da carta 2: \n");
    scanf("%s", estadoB);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo_carta2);

    printf("Digite a Cidade da carta 2: \n");
    scanf("%s", cidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &população2);

    printf("Digite a area por km2 da carta 1: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &PIB2);

    printf("Digite quantos pontos turisticos da carta 1: \n");
    scanf("%d", &pontos2);
    
    //AGORA VER SE PRINTA:

    printf("Carta 1: \n Estado é: %s \n Código é: %s \n Cidade é: %s \n População é: %d \n Area é: %f \n PIB é: %f \n Ponto turistico é: %d \n", estadoA, codigo_carta1, cidade1, população1, area1, PIB1, pontos1);
    printf("Carta 2: \n Estado é: %s \n Código é: %s \n Cidade é: %s \n População é: %d \n Area é: %f \n PIB é: %f \n Ponto turistico é: %d \n", estadoB, codigo_carta2, cidade2, população2, area2, PIB2, pontos2);
   
 
return 0;

}
