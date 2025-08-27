#include <stdio.h>

int main(){


    //=================================================================Declaração das variaveis==================================================================

    //====Carta=1======Carta=2=====
    char  estado1[2],  estado2[2];
    char  nome1[30],   nome2[30];
    int   codigo1,     codigo2;     //Código da Carta 
    int   PT1,         PT2;         //Pontos=Turisticos
    int   habitantes1, habitantes2;
    float area1,       area2;
    float PIB1,        PIB2;


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

    printf("Esses são os dados da sua primeira carta.\n");
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

    printf("Esses são os dados da sua segunda carta.\n");
    printf("Carta 2:\n");
    printf("Estado:%s\n", estado2);
    printf("Código:%s0%i\n",estado2,codigo2);
    printf("Cidade:%s\n", nome2);
    printf("População:%d\n", habitantes2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:R$%.2f\n", PIB2);
    printf("Pontos Turísticos:%d\n", PT2);


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
    printf("-----------------------------------\n");
    printf("\n");

    return 0;
}
