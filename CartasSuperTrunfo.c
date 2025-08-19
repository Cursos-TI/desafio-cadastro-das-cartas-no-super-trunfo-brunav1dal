#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char estado;
    int popul;
    char codigo[10];
    char cidade[50];
    int area;
    int p_turis;
    float PIB;

    printf("\nInforme os dados da CARTA A \n");

    printf("Estado: ");
    scanf(" %c",&estado);

    printf("Código da carta:");
    scanf("%s",codigo);

    printf("Nome da cidade: ");
    scanf("%s",cidade);

    printf("População: ");
    scanf("%d",&popul);

    printf("Área: ");
    scanf("%d",&area);

    printf("PIB: ");
    scanf("%f",&PIB);

    printf("Pontos Turísticos: ");
    scanf("%d",&p_turis);


    printf("\nDados da Carta A\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", popul);
    printf("Área: %d km²\n", area);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turísticos: %d\n", p_turis);


    printf("\nInforme os dados da CARTA 2 \n");

    printf("Estado: ");
    scanf(" %c",&estado);

    printf("Código da carta:");
    scanf("%s",codigo);

    printf("Nome da cidade: ");
    scanf("%s",cidade);

    printf("População: ");
    scanf("%d",&popul);

    printf("Área: ");
    scanf("%d",&area);

    printf("PIB: ");
    scanf("%f",&PIB);

    printf("Pontos Turísticos: ");
    scanf("%d",&p_turis);

    printf("\nDados da Carta BA\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", popul);
    printf("Área: %d km²\n", area);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turísticos: %d\n", p_turis);


    return 0;

}