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
    int pop,pop2,pturistico,pturistico2;
    float area,area2,pib,pib2;

    printf("insira o estado\n");    //sequencia de printf e scanf para obter dados do usuario 1
    scanf(" %c", &estado);
    printf("insira o codigo da carta\n");
    scanf("%s", &codigo1);
    printf("Nome da Cidade\n");
    scanf("%s", &cidade);
    printf("Insira População\n");
    scanf("%d", &pop);
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
    printf("Nome da Cidade\n");
    scanf("%s", &cidade2);
    printf("Insira População\n");
    scanf("%d", &pop2);
    printf("insira a Area\n");
    scanf("%f", &area2);
    printf("insira o PIB\n");
    scanf("%f", &pib2);
    printf("insira o numero de pontos turisticos\n");
    scanf("%d", &pturistico2);


    printf("estado:%c\n", estado);   //Codigo exibindo dados coletados sobre a carta
    printf("Codigo:%s\n", codigo1);
    printf("Nome da Cidade:%s\n", cidade);
    printf("População:%d\n", pop);
    printf("Área:%.2fkm²\n", area);
    printf("PIB:%.2fbilhões de reais\n", pib);
    printf("Pontos Turisticos:%d\n", pturistico);
    printf("estado:%c\n", estado2);   //Codigo exibindo dados coletados sobre a carta 2
    printf("Codigo:%s\n", codigo2);
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%d\n", pop2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:%.2fbilhões de reais\n", pib2);
    printf("Pontos Turisticos:%d\n", pturistico2);
    

    return 0;
}
