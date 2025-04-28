// Desafio Super Trunfo - cadastro de cartas de cidades
// Nome: Ademar
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>
int main(){
  // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Pergunta ao usuário quantas cartas serão usadas na rodada
     // Dados da carta C01 (podem ser substituídos futuramente pelo usuário)
    int populacao1;           // População da cidade        
    int pontosTuristicos1;    // Número de pontos turísticos
    char carta1[4];        // Código da carta (string de até 3 caracteres + '\0')        
    char estado1[2];        // Uma letra de 'A' a 'H' (representando um dos oito estados) (até 1 caracteres + '\0')
    char cidade1[20];       // Nome da cidade
    float area1;            // Área da cidade em km²
    float pib1;             // Produto Interno Bruto da cidade

    printf("Entrada de dados da carta 1 \n");
     // Entrada dos dados da primeira carta (C01)
     printf("Código da carta, de 01 a 04 com a letra do estado: "); //imprime mensagem para o usuario
     scanf("%s", carta1);  // lê o código da carta 
     printf("Digite os atributos da %s\n", carta1);  //imprime meansagem para o usuario
 
     //carta C01
     printf("Digite o Estado, letra de 'A' a 'H': "); //imprime mensagem para o usuario
     scanf("%s", estado1);  // Lê o estado (uma letra de 'A' a 'H')
 
     printf("Nome da Cidade: "); //imprime mensagem para o usuario
     scanf("%s", cidade1); // Lê o nome da cidade
 
     printf("População: "); //imprime mensagem para o usuario
     scanf("%d", &populacao1); // Lê a população da cidade
 
     printf("Área: "); //imprime mensagem para o usuario
     scanf("%f", &area1); // Lê a área da cidade em km²
 
     printf("PIB bruto: "); //imprime mensagem para o usuario 
     scanf("%f", &pib1); // Lê o PIB da cidade
     
     printf("Quantos pontos turistico: "); //imprime mensagem para o usuario
     scanf("%d", &pontosTuristicos1); // Lê o número de pontos turísticos

    //calculo para a carta 1
    float densidadePopulacional1; // Densidade populacional (hab/km²)
    float pibperCapita1; // PIB per capita (reais)
    densidadePopulacional1 = populacao1 / area1; // Cálculo da densidade populacional
    pibperCapita1 = pib1 / populacao1; // Cálculo do PIB per capita
    
    // Exibe os dados da primeira carta
    printf("Carta 1\n"); //imprime mensagem para o usuario
    printf("Estado de: %s\nCódigo: %s\nNome da Cidade: %s\n", estado1, carta1, cidade1); //imprime mensagem para o usuario
    printf("População: %d\n", populacao1); //imprime mensagem para o usuario
    printf("Área: %.3f km^2\n", area1); //imprime mensagem para o usuario
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); //imprime mensagem para o usuario
    printf("PIB: %.6f\n", pib1);  //imprime mensagem para o usuario
    printf("Pib per Capita: %.6f reais\n", pibperCapita1);  //imprime mensagem para o usuario
    printf("População: %.2f hab/km^2\n", densidadePopulacional1);   //imprime mensagem para o usuario
    

      // Dados da carta 2
      int populacao2;          // População da cidade
      int pontosTuristicos2;    // Número de pontos turísticos
      char carta2[4];     // Código da carta (string de até 3 caracteres + '\0')
      char estado2[2];    // Uma letra de 'A' a 'H' (representando um dos oito estados) (até 1 caracteres + '\0')
      char cidade2[20];   // Nome da cidade
      float area2;       // Área da cidade em km²
      float pib2;           // Produto Interno Bruto da cidade
  

    printf("Insira os dados da proxima carta!\n");  //imprime mensagem para o usuario
   
    printf("Entrada de dados da carta 2---\n");   // imprime mensagem para o usuario
    // Entrada dos dados da segunda carta 2
    printf("Código da carta, de 01 a 04 com a letra do estado: ");  //imprime mensagem para o usuario
    scanf("%s", carta2);  // lê o código da carta (string de até 3 caracteres + '\0')

    printf("Digite os atributos da %s\n", carta2); //imprime mensagem para o usuario
    //carta 2
    printf("Digite o Estado, letra de 'A' a 'H': "); //imprime mensagem para o usuario
    scanf("%s", estado2); // Lê o estado (uma letra de 'A' a 'H')

    printf("Nome da Cidade: ");   //imprime mensagem para o usuario
    scanf("%s", cidade2); // Lê o nome da cidade

    printf("População: ");  //imprime mensagem para o usuario
    scanf("%d", &populacao2);   // Lê a população da cidade

    printf("Área: "); //imprime mensagem para o usuario
    scanf("%f", &area2); // Lê a área da cidade em km²

    printf("PIB bruto: ");  //imprime mensagem para o usuario
    scanf("%f", &pib2);   // Lê o PIB da cidade
    
    printf("Quantos pontos turistico: ");   //imprime mensagem para o usuario
    scanf("%d", &pontosTuristicos2);  // Lê o número de pontos turísticos

    //calculo para a carta 2
    float densidadePopulacional2 = populacao2 / area2; // Densidade populacional (hab/km²)
    float pibperCapita2 = pib2 / populacao2; // PIB per capita (reais)

    // Exibe os dados da segunda carta
    printf("Carta 2\n"); //imprime mensagem para o usuario
    printf("Estado de: %s\nCodigo: %s\nNome da Cidade: %s\n", estado2, carta2, cidade2);  //imprime mensagem para o usuario
    printf("População: %d\n", populacao2); //imprime mensagem para o usuario
    printf("Área: %.3f km^2\n", area2); //imprime mensagem para o usuario
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);   //imprime mensagem para o usuario
    printf("PIB: %.6f\n", pib2);  //imprime mensagem para o usuario
    printf("Pib per Capita: %.6f reais\n", pibperCapita2);  //imprime mensagem para o usuario
    printf("População: %.2f hab/km^2\n", densidadePopulacional2);   //imprime mensagem para o usuario
    
    return 0;   // Retorna 0 para indicar que o programa foi executado com sucesso
}