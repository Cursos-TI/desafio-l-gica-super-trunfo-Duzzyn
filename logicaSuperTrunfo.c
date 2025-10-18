#include <stdio.h>

int main()
{
  char estado[8];
  char codigo[4];
  char cidade[24];
  unsigned long int populacao;
  float area, pib, densidadePopulacional, pibPerCapita, superPoder;
  int pontosTuristicos;
  int resultadoPop, resultadoArea, resultadoPib, resultadoPTuristico, resultadoDensidadePop, resultadoPibPerCapita, resultadoSuperPoder;

  printf("**************-------Bem-Vindo Ao SuperTrunfo-------**************\n");
  printf("Insira os dados da sua Primeira Carta!\n");

  printf("\nQual Estado da sua carta?: \n");
  scanf("%s", &estado);

  printf("Qual Codigo da sua carta?: \n");
  scanf("%d", &codigo);

  printf("Qual Cidade da sua carta?: \n");
  scanf("%s", &cidade);

  printf("Qual Populacao da sua carta?: \n");
  scanf("%lu", &populacao);

  printf("Qual Area(km quadrado) da sua carta?: \n");
  scanf("%f", &area);

  printf("Qual Pib da sua carta?: \n");
  scanf("%f", &pib);

  printf("Qual numero de pontos turisticos da sua carta?: \n");
  scanf("%d", &pontosTuristicos);

  densidadePopulacional = populacao / area;
  pibPerCapita = pib / populacao;
  superPoder = populacao + area + pib + pontosTuristicos + pibPerCapita + (area / populacao);

  printf("\nCarta 1:\n");
  printf("\nEstado: %s", estado);
  printf("\nCodigo: %s%s", estado, codigo);
  printf("\nNome da Cidade: %s", cidade);
  printf("\nPopulacao: %d", populacao);
  printf("\nArea: %f km²", area);
  printf("\nPIB: %f Milhoes de Reais", pib);
  printf("\nNumero de Pontos Turisticos: %d", pontosTuristicos);
  printf("\nDensidade Populacional: %f hab/km²", densidadePopulacional);
  printf("\nPib per Capita: %f Reais", pibPerCapita);
  printf("\nSuper Poder: %f", superPoder);

  printf("\n\n**************Primeira Carta Finalizada!**************\n");
  printf("\n\n*Insira os dados da sua Segunda Carta!*\n");

  char estado_2[3];
  char codigo_2[4];
  char cidade_2[10];
  unsigned long int populacao_2;
  float area_2;
  float pib_2;
  int pontosTuristicos_2;
  float densidadePopulacional_2;
  float pibPerCapita_2;
  float superPoder_2;

  printf("\nQual Estado da sua carta?: \n");
  scanf("%s", &estado_2);

  printf("Qual Codigo da sua carta?: \n");
  scanf("%d", &codigo_2);

  printf("Qual Cidade da sua carta?: \n");
  scanf("%s", &cidade_2);

  printf("Qual Populacao da sua carta?: \n");
  scanf("%lu", &populacao_2);

  printf("Qual Area(km quadrado) da sua carta?: \n");
  scanf("%f", &area_2);

  printf("Qual Pib da sua carta?: \n");
  scanf("%f", &pib_2);

  printf("Qual numero de pontos turisticos da sua carta?: \n");
  scanf("%d", &pontosTuristicos_2);

  densidadePopulacional_2 = populacao_2 / area_2;
  pibPerCapita_2 = pib_2 / populacao_2;
  superPoder_2 = populacao_2 + area_2 + pib_2 + pontosTuristicos_2 + pibPerCapita_2 + (area_2 / populacao_2);

  printf("\n\nCarta 2:\n");
  printf("\nEstado: %s", estado_2);
  printf("\nCodigo: %s%s", estado_2, codigo_2);
  printf("\nNome da Cidade: %s", cidade_2);
  printf("\nPopulacao: %d", populacao_2);
  printf("\nArea: %f km", area_2);
  printf("\nPIB: %f Milhoes de Reais", pib_2);
  printf("\nNumero de Pontos Turisticos: %d", pontosTuristicos_2);
  printf("\nDensidade Populacional: %f hab/km²", densidadePopulacional_2);
  printf("\nPib per Capita: %f Reais", pibPerCapita_2);
  printf("\nSuper Poder: %f", superPoder_2);

  printf("\n\n**************Segunda Carta Finalizada!**************\n");

  resultadoPop = populacao > populacao_2;
  resultadoArea = area > area_2;
  resultadoPib = pib > pib_2;
  resultadoPTuristico = pontosTuristicos > pontosTuristicos_2;
  resultadoDensidadePop = densidadePopulacional < densidadePopulacional_2;
  resultadoPibPerCapita = pibPerCapita > pibPerCapita_2;
  resultadoSuperPoder = superPoder > superPoder_2;
  
  printf("\n\n**************Comparações de Cartas!**************\n");
  printf("Comparação de cartas(Atributo: Populacao):\n");

  printf("\nCarta %d - %s (%s): %d", codigo, estado, cidade, populacao);
  printf("\nCarta %d - %s (%s): %d", codigo_2, estado_2, cidade_2, populacao_2);

  if(populacao > populacao_2){
    printf("\nResultado: Carta %d (%s) venceu!", codigo, estado);
  } else {
    printf("\nResultado: Carta %d (%s) venceu!", codigo_2, estado_2);
  }

  return 0;
}
