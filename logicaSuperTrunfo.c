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
  printf("Comparação de cartas:\n");

  int atributo1, atributo2;
  int resultado1, resultado2;

  printf("País: Brasil\n");
    printf("Carta 1: %s VS Carta 2: %s\n", cidade, cidade_2);
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("Primeiro Atributo: ");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
    case 1:
        printf("Você escolheu População:!\n ");
        printf("Carta 1 = %d e Carta 2 = %d", populacao, populacao_2);
        resultado1 = populacao > populacao_2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu área!\n");
        printf("Carta 1 = %.2f e Carta 2 = %.2f", area, area_2);
        resultado1 = area > area_2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu PIB!\n");
        printf("Carta 1 = %.2f e Carta 2 = %.2f", pib, pib_2);
        resultado1 = pib > pib_2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu Pontos Turisticos!\n");
        printf("Carta 1 = %d e Carta 2 = %d", pontosTuristicos, pontosTuristicos_2);
        resultado1 = pontosTuristicos > pontosTuristicos_2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu Densidade Populacional!\n");
        printf("Carta 1 = %.2f e Carta 2 = %.2f", densidadePopulacional, densidadePopulacional_2);
        resultado1 = densidadePopulacional > densidadePopulacional_2 ? 1 : 0;
    default:
        printf("Opção inválida!");
        break;
    }
    printf("\nEscolha o segundo atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("Segundo Atributo: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Você escolheu o mesmo atributo!");
    }
    else
    {
        switch (atributo2)
        {
        case 1:
            printf("Você escolheu População:!\n ");
            printf("Carta 1 = %d e Carta 2 = %d", populacao, populacao_2);
            resultado2 = populacao > populacao_2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu área!\n");
            printf("Carta 1 = %.2f e Carta 2 = %.2f", area, area_2);
            resultado2 = area > area_2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu PIB!\n");
            printf("Carta 1 = %.2f e Carta 2 = %.2f", pib, pib_2);
            resultado2 = pib > pib_2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu Pontos Turisticos!\n");
            printf("Carta 1 = %d e Carta 2 = %d", pontosTuristicos, pontosTuristicos_2);
            resultado2 = pontosTuristicos > pontosTuristicos_2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu Densidade Populacional!\n");
            printf("Carta 1 = %.2f e Carta 2 = %.2f", densidadePopulacional, densidadePopulacional_2);
            resultado2 = densidadePopulacional < densidadePopulacional_2 ? 1 : 0;
        default:
            printf("Opção inválida!");
            break;
        }
    }
    if (resultado1 == 1 && resultado2 == 1)
    {
        printf("\nA carta número 1 venceu!");
    }
    else if (resultado1 != resultado2)
    {
        printf("\nEmpatou!");
    }
    else
    {
        printf("\nA carta número 2 venceu!");
    }

  return 0;
}
