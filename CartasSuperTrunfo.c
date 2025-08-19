#include <stdlib.h>   // biblioteca padrão
#include <stdio.h>    // entrada e saída (printf, scanf)
#include <locale.h>   // permite usar acentuação

int main()
{
    setlocale(LC_ALL,"Portuguese"); // define idiomaa

    // variáveis para armazenar dados da carta(declarações de variáveis)
    char estado;        // guarda 1 caractere 
    int popul;         // população (número inteiro)
    char codigo[10];    // código da carta (texto)
    char cidade[50];   // nome da cidade (texto)
    int area;          // área em km²
    int p_turis;       // pontos turísticos
    float PIB;         // produto interno bruto (número decimal)

    //CARTA A 
    printf("\nInforme os dados da CARTA A \n");

    printf("Estado: ");
    scanf(" %c",&estado);   // lê 1 caractere 

    printf("Código da carta:");
    scanf("%s",codigo);     // lê array 

    printf("Nome da cidade: ");
    scanf("%s",cidade);     // lê array

    printf("População: ");
    scanf("%d",&popul);     // lê número inteiro

    printf("Área: ");
    scanf("%d",&area);      // lê número inteiro

    printf("PIB: ");
    scanf("%f",&PIB);       // lê número decimal

    printf("Pontos Turísticos: ");
    scanf("%d",&p_turis);   // lê número inteiro

    // mostra os dados lidos da carta A
    printf("\nDados da Carta A\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", popul);
    printf("Área: %d km²\n", area);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turísticos: %d\n", p_turis);

    // CARTA B
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

    
// mostra os dados lidos da carta B
    printf("\nDados da Carta BA\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", popul);
    printf("Área: %d km²\n", area);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turísticos: %d\n", p_turis);

    return 0; // finaliza o programa
}
