#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

//incluindo estados 1 e 2

char estadoum[3],estadodois[3]; //ex SP MG PR
char codum[15],coddois[15]; //ex PRIMEIRA CARTA, CARTA UM
char cidade[30],cidadedois[30]; //ex Jundiaí, Gameleiras

//incluido inteiros das popuilações

int populacaoum,populacaodois;
float areaum, areadois;
float pibum,pibdois;
int pontoturum,pontoturdois;

// calculo densidade

float densidadeum, densidadedois;
float pibpercapitaum, pibpercaptadois;

//Vencedor

int Vencedor;

//carta um

printf("Digite um estado: \n");
scanf("%s",estadoum);
printf("Digite o codigo da carta desse estado: \n");
scanf("%s",codum);
printf("Digite a cidade: \n");
scanf("%s",cidade);
printf("Digite a população da cidade: (Digite sem pontos) \n");
scanf("%d",&populacaoum);
printf("Digite a área da cidade: (Digite sem pontos) \n");
scanf("%f",&areaum);
printf("Digite o pib: (Digite sem pontos) \n");
scanf("%f",&pibum);
printf("Digite quantos pontos turisticos tem: (Digite sem pontos) \n");
scanf("%d",&pontoturum);

//carta dois

printf("Digite o segundo estado: \n");
scanf("%s",estadodois);
printf("Digite o codigo da segunda carta: \n");
scanf("%s",coddois);
printf("Digite a segunda cidade: \n");
scanf("%s",cidadedois);
printf("Digite a população da segunda cidade: (Digite sem pontos) \n");
scanf("%d",&populacaodois);
printf("Digite a área da segunda cidade: (Digite sem pontos) \n");
scanf("%f",&areadois);
printf("Digite o pib da segunda cidade: (Digite sem pontos) \n");
scanf("%f",&pibdois);
printf("Digite quantos pontos turisticos tem na segunda cidade: \n");
scanf("%d",&pontoturdois);

// calculo de densidade E PIB

densidadeum = populacaoum / areaum;
densidadedois = populacaodois / areadois;

pibpercapitaum = pibum / populacaoum;
pibpercaptadois = pibdois / populacaodois;

// comparando população um com a dois

if (populacaoum > populacaodois)
    Vencedor = 1;
    else if (populacaodois > populacaoum)
    Vencedor = 2;
    else
    Vencedor = 0;

// exibir carta um para o usuário

printf("\n-------Carta 1------\n");
printf("Estado: %s\n", estadoum);
printf("Codigo: %s\n", codum);
printf("Cidade: %s\n", cidade);
printf("Populacao: %d\n", populacaoum);
printf("Area: %.2f\n", areaum);
printf("PIB: %.2f\n", pibum);
printf("Pontos turisticos: %d\n", pontoturum);
printf("Densidade Populacional: %.2f hab/km²\n", densidadeum);
printf("PIB per capita: %.2f\n", pibpercapitaum);

// Exibir a carta dois para o usuario
printf("\n========== CARTA 2 ==========\n");
printf("Estado: %s\n", estadodois);
printf("Codigo: %s\n", coddois);
printf("Cidade: %s\n", cidadedois);
printf("Populacao: %d\n", populacaodois);
printf("Area: %.2f\n", areadois);
printf("PIB: %.2f\n", pibdois);
printf("Pontos turisticos: %d\n", pontoturdois);
printf("Densidade Populacional: %.2f hab/km²\n", densidadedois);
printf("PIB per capita: %.2f\n", pibpercaptadois);

// Comparando cartas usando atributo população.

printf("Carta 01 - %s (%s): %d habitantes\n", cidade, estadoum,populacaoum);
printf("Carta 02 - %s (%s): %d habitantes\n", cidadedois, estadodois,populacaodois);

// DEFININDO VENCEDOR

if (Vencedor == 1)
    printf("\nResultado: Carta 1 (%s) venceu!\n",cidade);
else if (Vencedor == 2)
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidadedois);
else
printf("\nResultado: Empate!\n");

return 0;
    
}