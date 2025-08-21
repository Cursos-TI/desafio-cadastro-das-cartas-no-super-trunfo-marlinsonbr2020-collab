#include <stdio.h>

int main(){

    char letraA = 'A';
    char letraB = 'B';
    int codigo = 01;
    char nome[50];
    float populacao = 100000;
    float area = 10000;
    float PIB = 100000;
    int numero_de_pontos_turisticos;
    int soma, subtração, multiplicação, divisão;
    double densidade = populacao / area;
    double capita = PIB / populacao;
    

     printf("carta n1 \n");

     printf("escolha um dos 8 estados de A a H, digite a letra; \n");
     scanf("%c", &letraA);

     printf("escolha o codigo da carta, de 01 a 04; \n");
     scanf("%d", &codigo);

     printf("digite o nome da cidade; \n");
     scanf("%s", nome);

     printf("digite o numero de habitantes;\n");
     scanf(" %f", &populacao);

     printf("digite a area;\n");
     scanf("%f", &area);

     printf("digite a quantidade do produto interno bruto da cidade, PIB;\n");
     scanf("%f", &PIB);

     printf("digite a quantidade de pontos turisticos na cidade;\n");
     scanf("%d", &numero_de_pontos_turisticos);


      printf("carta n1 \n");
      printf("estado;%c\n", letraA);
      printf("codigo;%c%.2d\n", letraA, codigo);
      printf("nome da cidade;%s\n", nome);
      printf("população;%.f\n", populacao);
      printf("area;%.f\n", area);
      printf("PIB;%.f bilhões de reais\n", PIB);
      printf("numero de pontos turisticos;%d\n", numero_de_pontos_turisticos);
      densidade = populacao / area;
      printf("densidade populacional; %.3f\n", densidade);
      capita = PIB / populacao;
      printf("PIB per capita;%.3f\n", capita);






     printf("carta n2 \n");

     printf("escolha um dos 8 estados de B a H, digite a letra;\n");
     scanf(" %c", &letraB);

     printf("escolha o codigo da carta, de 02 a 04; \n");
     scanf("%d", &codigo);

     printf("digite o nome da cidade; \n");
     scanf("%s", nome);

     printf("digite o numero de habitantes;\n");
     scanf("%.f", &populacao);

     printf("digite a area;\n");
     scanf("%f", &area);

     printf("digite a quantidade do produto interno bruto da cidade, PIB;\n");
     scanf("%f", &PIB);

     printf("digite a quantidade de pontos turisticos na cidade;\n");
     scanf("%d", &numero_de_pontos_turisticos);

      printf("carta n2 \n");
      printf("estado;%c\n", letraB);
      printf("codigo;%c%.2d\n", letraB, codigo);
      printf("nome da cidade;%s\n", nome);
      printf("população; %.f\n", populacao);
      printf("area;%.f\n", area);
      printf("PIB;%.f bilhões de reais\n", PIB);
      printf("numero de pontos turisticos;%d\n", numero_de_pontos_turisticos);
      densidade = populacao / area;
      printf("densidade populacional; %.f\n", densidade);
      capita = PIB / populacao;
      printf("PIB per capita;%.f\n", capita);


    












}