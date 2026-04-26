#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
char pais1[20];
char pais2[20];
char cidade1[20];
char cidade2[20];
char carta1[20];
char carta2[20];
int populacao1;
int populacao2;
float area1;
float area2;
float pib1;
float pib2;
int Pturistico1;
int Pturistico2;
// acima fiz a declaração de todas as variaveis que serao necesssarias.
// a apartir de agora vamos iniciar a logica 
printf("DIGITE O CODIGO DA PRIMEIRA CARTA :\n");// solicitaçao ao usuario do numero da carta
scanf("%s",carta1);
printf("DIGITE O NOME DO PAIS 1:\n");//solicitacao do nome do pais 1
scanf("%s",pais1);
printf("DIGITE A CIDADE 1:\n");
scanf("%s",cidade1);
printf("DIGITE A POPULAÇÃO Da CIDADE 1:\n");
scanf("%d",&populacao1);
printf("DIGITE A AREA DA CIDADE 1:\n");
scanf("%f",&area1);
printf("DIGITE O PIB DA CIDADE  1:\n");
scanf("%f",&pib1);
printf("DIGITE O NUMERO DE PONTOS TURISICOS DA CIDADE 1: \n ");
scanf("%d",&Pturistico1);
printf("DIGITE O CODIGO DA SEGUNDA CARTA:\n");// solicitaçao ao usuario do numero da carta
scanf(" %s",carta2);
printf("DIGITE O NOME DO PAIS 2:\n");//solicitacao do nome do pais 1
scanf( " %[^\n]", pais2);
printf("DIGITE A CIDADE 2:\n");
scanf( " %[^\n]", cidade2);
printf("DIGITE A POPULAÇÃO DA CIDADE 2:\n");
scanf("%d",&populacao2);
printf("DIGITE A AREA DA CIDADE 2:\n");
scanf("%f",&area2);
printf("DIGITE O PIB DA CIDADE 2:\n");
scanf("%f",&pib2);
printf("DIGITE O NUMERO DE PONTOS TURISICOS DA CIDADE 2 :\n ");
scanf("%d",&Pturistico2);
printf("===== CARTA 1 =====\n");
printf("CODIGO : %s\n",carta1);
printf( "PAIS : %s\n",pais1);
printf("CIDADE : %s\n",cidade1);
printf("POPULAÇÃO : %d MIL habitantes\n",populacao1);
printf("AREA : %.2f MIL m2\n",area1);
printf("PIB : %.2f TRILHOES\n",pib1);
printf("PONTOS TURISTICOS : %d\n",Pturistico1);
printf("=================================================\n");
printf("===== CARTA 2 =====\n");
printf("CODIGO : %s\n",carta2);
printf( "PAIS : %s\n",pais2);
printf("CIDADE : %s\n",cidade2);
printf("POPULAÇÃO : %d MIL HABITANTES\n",populacao2);
printf("AREA : %.2f MIL m2\n",area2);
printf("PIB : %.2f TRILHOES\n",pib2);

return 0;
} 
