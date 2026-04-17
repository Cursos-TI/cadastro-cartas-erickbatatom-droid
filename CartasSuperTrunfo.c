#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[3], codigo2[3];
  char nome_cidade1[20], nome_cidade2[20];
  int populacao1, populacao2;
  int P_turistico1, P_turistico2; 
  float area1, area2;
  float PIB1, PIB2;
  float densidade_populacional1, densidade_populacional2;
  float PIB_per_capita1, PIB_per_capita2;

  //area de entrada de dados
  //leitura dos dados da primeira carto

  printf("Letra do estado: ");
  scanf("%c", &estado1); //letra do estado
  
  printf("Código do estado: ");
  scanf("%s", codigo1); //codigo do estado
    
  printf("Nome da cidade: ");
  scanf("%s", nome_cidade1); //nome da cidade
    
  printf("População: ");
  scanf("%d", &populacao1); //populacao da cidade
     
  printf("Área: ");
  scanf("%f", &area1); //area da cidade
    
  printf("PIB: ");
  scanf("%f", &PIB1); //PIB da cidade
  
  printf("Pontos turísticos: ");
  scanf("%d", &P_turistico1); //pontos turisticos

  printf("\n"); //linha em branco para separar as cartas

  //leitura dos dados da segunda carta
  printf("segunda carta\n");
  printf("Letra do estado: ");
  scanf(" %c", &estado2); //letra do state
    
  printf("Código do estado: ");
  scanf("%s", codigo2); //codigo do estado
   
  printf("Nome da cidade: ");
  scanf("%s", nome_cidade2); //nome da cidade
    
  printf("População: ");
  scanf("%d", &populacao2); //populacao da cidade
    
  printf("Área: ");
  scanf("%f", &area2); //area da cidade
    
  printf("PIB: ");
  scanf("%f", &PIB2); //PIB da cidade

  printf("Pontos turísticos: ");
  scanf("%d", &P_turistico2); //pontos turisticos
  
//calculos
  //calculos primeira carta
  densidade_populacional1 = (float)populacao1 / area1;
  PIB_per_capita1 = (PIB1 * 1000000000) / (float)populacao1;
  
  //calculos segunda carta
  densidade_populacional2 = (float)populacao2 / area2;
  PIB_per_capita2 = (PIB2 * 1000000000) / (float)populacao2;
  
  // Área para exibição dos dados da cidade
    //carta 1
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);//letra do estado
  printf("Código: %c%s\n", estado1, codigo1);//codigo do estado
  printf("Nome da Cidade: %s\n", nome_cidade1);//nome da cidade
  printf("População: %d\n", populacao1);//populacao da cidade
  printf("Pontos Turísticos: %d\n", P_turistico1);//pontos turisticos
  printf("Área: %.2f km²\n", area1);//area da cidade
  printf("PIB: %.2f bilhões de reais\n", PIB1);//PIB da cidade
  printf("densidade populacional: %.2f hab/km²\n", densidade_populacional1);
  printf("PIB per capita: %.2f reais\n", PIB_per_capita1);

  printf("\n"); //linha em branco para separar as cartas

    //carta 2
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);//letra do estado
  printf("Código: %c%s\n", estado2, codigo2);//codigo do estado
  printf("Nome da Cidade: %s\n", nome_cidade2);//nome da cidade
  printf("População: %d\n", populacao2);//populacao da cidade
  printf("Pontos Turísticos: %d\n", P_turistico2);//pontos turisticos
  printf("Área: %.2f km²\n", area2);//area da cidade
  printf("PIB: %.2f bilhões de reais\n", PIB2);//PIB da cidade
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);  
  printf("PIB per capita: %.2f reais\n", PIB_per_capita2);

return 0;
} 