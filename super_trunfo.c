#include <stdio.h>

int main(){


    //=================================================================Declaração das variaveis==================================================================
    /*
    Variaveis=========Carta=1=======Carta=2========================================*/
    char              estado1[2],   estado2[2];
    char              nome1[30],    nome2[30];
    int               codigo1,      codigo2;     //Código da Carta 
    int               PT1,          PT2;         //Pontos=Turisticos
    unsigned int      SuperPoder1,  SuperPoder2;
    long unsigned int habitantes1,  habitantes2;
    float             area1,        area2;
    float             PIB1,         PIB2;        //Produto Interno Bruto
    float             DP1,          DP2;         //Densidade Populacional
    float             RDP1,         RDP2;        //Resultado Densidade Populacional
    float             PIBpC1,       PIBpC2;      //PIB per Capita
    
    //===============================================================Aqui comeca a primeira carta================================================================

    
    printf("-------------------------Carta-1--------------------------\n");
    printf("Escolha uma letra de 'A' à 'H' representando os 8 estados(em maiusculo):\n");
    scanf ("%s", estado1);

    printf("Agora escolha um numero de '1' à '4'.\n");
    scanf ("%d", &codigo1);

    printf("Agora escreva o nome de sua cidade, troque (espaço) por ( _ ).\n");
    printf("Ex:Ana_Maria.\n");
    scanf ("%s", nome1);

    printf("Quantos habitantes há nessa cidade?.\n");
    scanf ("%d", &habitantes1);

    printf("Qual é o tamanho(km²).\n");
    scanf ("%f", &area1);

    printf("Quantos pontos turistico há nessa cidade.\n");
    scanf ("%d", &PT1);

    printf("O quanto essa cidade possui de PIB.(Produto Interno Bruto).\n");
    printf("R$");
    scanf ("%f", &PIB1);
    printf("\n");

    printf("Esses são os dados inseridos da sua primeira carta.\n");
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado:%s\n", estado1);
    printf("Código:%s0%d\n",estado1,codigo1);
    printf("Cidade:%s\n", nome1);
    printf("População:%d\n", habitantes1);
    printf("Área:%.2fkm²\n", area1);
    printf("PIB:R$%.2f\n", PIB1);
    printf("Pontos Turísticos:%d\n", PT1);
    printf("\n");


    //================================================================Aqui começa a segunda carta================================================================

   
    printf("-------------------------Carta-2--------------------------\n");
    printf("Escolha uma letra de 'A' à 'H' representando os 8 estados(em maiusculo):\n");
    scanf ("%s", estado2);

    printf("Agora escolha um numero de '1' à '4'.\n");
    scanf ("%i", &codigo2);
    
    printf("Agora escreva o nome de sua cidade, troque (espaço) por (_).\n");
    printf("Ex:Paulo_Roberto.\n");
    scanf ("%s", nome2);

    printf("Quantos habitantes há nessa cidade?.\n");
    scanf ("%d", &habitantes2);

    printf("Qual é o tamanho(km²).\n");
    scanf ("%f", &area2);

    printf("Quantos pontos turistico há nessa cidade.\n");
    scanf ("%d", &PT2);

    printf("O quanto essa cidade possui de PIB.(Produto Interno Bruto).\n");
    printf("R$");
    scanf ("%f", &PIB2);

    printf("Esses são os dados inseridos da sua segunda carta.\n");
    printf("Carta 2:\n");
    printf("Estado:%s\n", estado2);
    printf("Código:%s0%i\n",estado2,codigo2);
    printf("Cidade:%s\n", nome2);
    printf("População:%d\n", habitantes2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:R$%.2f\n", PIB2);
    printf("Pontos Turísticos:%d\n", PT2);


    //=================================================================Calculos das informaçoes Avancado=========================================================


    DP1 = (float)habitantes1 / area1;
    DP2 = (float)habitantes2 / area2;

    PIBpC1 = (float)PIB1 / habitantes1;
    PIBpC2 = (float)PIB2 / habitantes2;
    
    
    //============================================================Exebição das informaçoes das cartas============================================================
    

    printf("\n");
    printf("Agora será mostrado as duas cartas que você criou.\n");
    printf("\n");

    printf("--------------Carta-1--------------\n");

    printf("Estado:%s\n", estado1);
    printf("Código:%s0%d\n",estado1,codigo1);
    printf("Cidade:%s\n", nome1);
    printf("População:%d\n", habitantes1);
    printf("Área:%.2fkm²\n", area1);
    printf("PIB:R$%.2f\n", PIB1);
    printf("Pontos Turísticos:%d\n", PT1);
    printf("Dencidade Populacional:%.2fhab/km²\n", DP1);
    printf("PIB per Capita:R$%.2f\n", PIBpC1);

    printf("-----------------------------------\n");
    printf("\n");
    
      

    printf("--------------Carta-2--------------\n");

    printf("Estado:%s\n", estado2);
    printf("Código:%s0%d\n",estado2,codigo2);
    printf("Cidade:%s\n", nome2);
    printf("População:%d\n", habitantes2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:R$%.2f\n", PIB2);
    printf("Pontos Turísticos:%d\n", PT2);
    printf("Dencidade Populacional:%.2fhab/km²\n", DP2);
    printf("PIB per Capita:R$%.2f\n", PIBpC2);

    printf("-----------------------------------\n");
    printf("\n");


    //==============================================Calculo do Super Poder e da inverção da densidade populacional===============================================


    RDP1 = 1 / DP1;
    RDP2 = 1 / DP2;

    SuperPoder1 =(float)habitantes1 + area1 + PIB1 + PT1 + RDP1 + PIBpC1;
    SuperPoder2 =(float)habitantes2 + area2 + PIB2 + PT2 + RDP2 + PIBpC2;


    //==================================================================Comparação das cartas====================================================================
    
    
    printf("----Comparação das cartas 1 e 2----\n");

    printf("População: da carta %d venceu \n",              ((habitantes2 > habitantes1)+1));
    printf("Área: da carta %d venceu \n",                   ((area2       > area1      )+1));
    printf("PIB: da carta %d venceu \n",                    ((PIB2        > PIB1       )+1));
    printf("Pontos Turísticos: da carta %d venceu \n",      ((PT2         > PT1        )+1));
    printf("Dencidade Populacional: da carta %d venceu \n", ((RDP2        > RDP1       )+1));
    printf("PIB per Capita: da carta %d venceu \n",         ((PIBpC2      > PIBpC1     )+1));
    printf("Super Poder: da carta %d venceu \n",            ((SuperPoder2 > SuperPoder1)+1));

    printf("-----------------------------------\n");


    //===========================================================================================================================================================

    return 0;
}
