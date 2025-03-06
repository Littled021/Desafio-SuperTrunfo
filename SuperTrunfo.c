#include <stdio.h>

int main(){
    char estado;              // Estado: Uma letra de 'A' a 'H'
    char codigo[4];           // Código da Carta: A letra do estado seguida de um número de 01 a 04
    char nomeCidade[100];     // Nome da Cidade
    int populacao;            // População: O número de habitantes da cidade
    float area;               // Área (em km²): A área da cidade em quilômetros quadrados
    float pib;                // PIB: O Produto Interno Bruto da cidade
    int pontosTuristicos;     // Número de Pontos Turísticos

    printf("Insira os dados da Carta: 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", &codigo);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade); 
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

 
    char estado2;              
    char codigo2[4];           
    char nomeCidade2[100];   
    int populacao2;            
    float area2;               
    float pib2;                
    int pontosTuristicos2;     

    printf("\nInsira os dados da Carta: 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", &codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade2); 
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    printf("\n====================================================================================");
    printf("\nDados Carta 1\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    printf("\n====================================================================================");
    printf("\nDados Carta 2\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    
    
    return 0;

}