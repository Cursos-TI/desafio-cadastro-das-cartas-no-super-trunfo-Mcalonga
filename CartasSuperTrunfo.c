#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado, estado2;            //declaração de variaveis
    char codigo1[10],codigo2[10];
    char cidade[50],cidade2[50];
    unsigned long int pop,pop2;
    int pturistico,pturistico2;
    float area,area2,pib,pib2;
    float densidadep,densidadep2,pibpc,pibpc2,suppod,suppod2;

    printf("insira o estado\n");    //sequencia de printf e scanf para obter dados do usuario 1
    scanf(" %c", &estado);
    printf("insira o codigo da carta\n");
    scanf("%s", &codigo1);
    printf("Nome da Cidade(sem espaços)\n");
    scanf("%s", &cidade);
    printf("Insira População\n");
    scanf("%lu", &pop);
    printf("insira a Area\n");
    scanf("%f", &area);
    printf("insira o PIB\n");
    scanf("%f", &pib);
    printf("insira o numero de pontos turisticos\n");
    scanf("%d", &pturistico);

    printf("insira o estado\n");    //sequencia de printf e scanf para obter dados do usuario
    scanf(" %c", &estado2);
    printf("insira o codigo da carta\n");
    scanf("%s", &codigo2);
    printf("Nome da Cidade(sem espaços)\n");
    scanf("%s", &cidade2);
    printf("Insira População\n");
    scanf("%lu", &pop2);
    printf("insira a Area\n");
    scanf("%f", &area2);
    printf("insira o PIB\n");
    scanf("%f", &pib2);
    printf("insira o numero de pontos turisticos\n");
    scanf("%d", &pturistico2);

    densidadep = pop / area;    //definição de variaveis coletadas 
    densidadep2 = pop2 / area2;
    pibpc = pib / (float) pop;
    pibpc2 = pib2 / (float) pop2;

    printf("Carta1");
    printf("estado:%c\n", estado);   //Codigo exibindo dados coletados sobre a carta
    printf("Codigo:%s\n", codigo1);
    printf("Nome da Cidade:%s\n", cidade);
    printf("População:%lu\n", pop);
    printf("Área:%.2fkm²\n", area);
    printf("PIB:%.2fbilhões de reais\n", pib);
    printf("Pontos Turisticos:%d\n", pturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep);
    printf("PIB per Capita: %.2f reais\n", pibpc);

    printf("Carta2");
    printf("estado:%c\n", estado2);   //Codigo exibindo dados coletados sobre a carta 2
    printf("Codigo:%s\n", codigo2);
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%lu\n", pop2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:%.2fbilhões de reais\n", pib2);
    printf("Pontos Turisticos:%d\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

    suppod = (float) pop + area + pib + (float) pturistico + pibpc + 1/densidadep;  //definição do super poder
    suppod2 = (float) pop2 + area2 + pib2 + (float) pturistico2 + pibpc2 + 1/densidadep2;

    
    printf("resultados");
    printf("População: %s\n", (pop > pop2) ? "Carta 1" : "Carta 2");
    printf("Área: %s\n", (area > area2) ? "Carta 1" : "Carta 2");
    printf("PIB: %s\n", (pib > pib2) ? "Carta 1" : "Carta 2");
    printf("Pontos Turísticos: %s\n", (pturistico > pturistico2) ? "Carta 1" : "Carta 2");
    printf("PIB per capita: %s\n", (pibpc > pibpc2) ? "Carta 1" : "Carta 2");
    printf("Densidade: %s\n", (densidadep < densidadep2) ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s\n", (suppod > suppod2) ? "Carta 1" : "Carta 2");
    return 0;
}
