#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado;
    char nomecidade [4][8][20];
    int populacao[8][4];
    float area[8][4];
    float pib[8][4];
    int pturisticos[8][4];


    printf("Bem-vindo ao sistema de cadastro do Super Trunfo - Países!\n");
    
    estado ='A';

    printf("\nCadatre cidades para o estado %c\n", estado);

    printf("\nDigite o nome da cidade 1:");
    scanf("%s", &nomecidade[0][0]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][0]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][0]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][0]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][0]);

    
    printf("\nDigite o nome da cidade 2:");
    scanf("%s", &nomecidade[0][1]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][1]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][1]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][1]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][1]);


    printf("\nDigite o nome da cidade 3:");
    scanf("%s", &nomecidade[0][2]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][2]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][2]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][2]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][2]);


    printf("\nDigite o nome da cidade 4:");
    scanf("%s", &nomecidade[0][3]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][3]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][3]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][3]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][3]);


    estado = "B";

    printf("\nCadatre cidades para o estado %c\n", estado);

    printf("\nDigite o nome da cidade 1:");
    scanf("%s", &nomecidade[0][0]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][0]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][0]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][0]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][0]);

    
    printf("\nDigite o nome da cidade 2:");
    scanf("%s", &nomecidade[0][1]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][1]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][1]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][1]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][1]);


    printf("\nDigite o nome da cidade 3:");
    scanf("%s", &nomecidade[0][2]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][2]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][2]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][2]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][2]);


    printf("\nDigite o nome da cidade 4:");
    scanf("%s", &nomecidade[0][3]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][3]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][3]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][3]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][3]);

    estado = 'C';

    printf("\nCadatre cidades para o estado %c\n", estado);

    printf("\nDigite o nome da cidade 1:");
    scanf("%s", &nomecidade[0][0]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][0]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][0]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][0]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][0]);

    
    printf("\nDigite o nome da cidade 2:");
    scanf("%s", &nomecidade[0][1]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][1]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][1]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][1]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][1]);


    printf("\nDigite o nome da cidade 3:");
    scanf("%s", &nomecidade[0][2]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][2]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][2]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][2]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][2]);


    printf("\nDigite o nome da cidade 4:");
    scanf("%s", &nomecidade[0][3]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][3]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][3]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][3]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][3]);
    
    estado = 'D';

    printf("\nCadatre cidades para o estado %c\n", estado);

    printf("\nDigite o nome da cidade 1:");
    scanf("%s", &nomecidade[0][0]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][0]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][0]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][0]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][0]);

    
    printf("\nDigite o nome da cidade 2:");
    scanf("%s", &nomecidade[0][1]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][1]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][1]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][1]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][1]);


    printf("\nDigite o nome da cidade 3:");
    scanf("%s", &nomecidade[0][2]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][2]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][2]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][2]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][2]);


    printf("\nDigite o nome da cidade 4:");
    scanf("%s", &nomecidade[0][3]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][3]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][3]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][3]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][3]);

    estado = 'E';

    printf("\nCadatre cidades para o estado %c\n", estado);

    printf("\nDigite o nome da cidade 1:");
    scanf("%s", &nomecidade[0][0]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][0]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][0]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][0]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][0]);

    
    printf("\nDigite o nome da cidade 2:");
    scanf("%s", &nomecidade[0][1]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][1]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][1]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][1]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][1]);


    printf("\nDigite o nome da cidade 3:");
    scanf("%s", &nomecidade[0][2]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][2]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][2]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][2]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][2]);


    printf("\nDigite o nome da cidade 4:");
    scanf("%s", &nomecidade[0][3]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][3]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][3]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][3]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][3]);

    estado = 'F';

    printf("\nCadatre cidades para o estado %c\n", estado);

    printf("\nDigite o nome da cidade 1:");
    scanf("%s", &nomecidade[0][0]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][0]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][0]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][0]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][0]);

    
    printf("\nDigite o nome da cidade 2:");
    scanf("%s", &nomecidade[0][1]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][1]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][1]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][1]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][1]);


    printf("\nDigite o nome da cidade 3:");
    scanf("%s", &nomecidade[0][2]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][2]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][2]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][2]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][2]);


    printf("\nDigite o nome da cidade 4:");
    scanf("%s", &nomecidade[0][3]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][3]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][3]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][3]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][3]);

    estado = 'G';

    printf("\nCadatre cidades para o estado %c\n", estado);

    printf("\nDigite o nome da cidade 1:");
    scanf("%s", &nomecidade[0][0]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][0]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][0]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][0]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][0]);

    
    printf("\nDigite o nome da cidade 2:");
    scanf("%s", &nomecidade[0][1]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][1]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][1]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][1]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][1]);


    printf("\nDigite o nome da cidade 3:");
    scanf("%s", &nomecidade[0][2]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][2]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][2]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][2]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][2]);


    printf("\nDigite o nome da cidade 4:");
    scanf("%s", &nomecidade[0][3]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][3]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][3]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][3]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][3]);

    estado ='H';

    printf("\nCadatre cidades para o estado %c\n", estado);

    printf("\nDigite o nome da cidade 1:");
    scanf("%s", &nomecidade[0][0]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][0]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][0]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][0]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][0]);

    
    printf("\nDigite o nome da cidade 2:");
    scanf("%s", &nomecidade[0][1]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][1]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][1]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][1]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][1]);


    printf("\nDigite o nome da cidade 3:");
    scanf("%s", &nomecidade[0][2]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][2]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][2]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][2]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][2]);


    printf("\nDigite o nome da cidade 4:");
    scanf("%s", &nomecidade[0][3]);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao[0][3]);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area[0][3]);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pib[0][3]);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticos[0][3]);


    printf("Cartas Cadastradas:\n");

    estado = 'A';

    printf("\nEstado: %c\n", estado);

    printf("Código da Carta: %c01 - Cidade: %s\n", estado, nomecidade[0][0]);  
    printf("População: %d\n", populacao[0][0]);
    printf("Área: %2.f km²\n", area[0][0]);
    printf("PIB: %2.f milhões\n", pib[0][0]);
    printf("Pontos turisticos: %d\n", pturisticos[0][0]);

    printf("\nCódigo da Carta: %c02 - Cidade: %s\n", estado, nomecidade[0][1]);  
    printf("População: %d\n", populacao[0][1]);
    printf("Área: %2.f km²\n", area[0][1]);
    printf("PIB: %2.f milhões\n", pib[0][1]);
    printf("Pontos turisticos: %d\n", pturisticos[0][1]);

    printf("\nCódigo da Carta: %c03 - Cidade: %s\n", estado, nomecidade[0][2]);  
    printf("População: %d\n", populacao[0][2]);
    printf("Área: %2.f km²\n", area[0][2]);
    printf("PIB: %2.f milhões\n", pib[0][2]);
    printf("Pontos turisticos: %d\n", pturisticos[0][2]);

    printf("\nCódigo da Carta: %c04 - Cidade: %s\n", estado, nomecidade[0][3]);  
    printf("População: %d\n", populacao[0][3]);
    printf("Área: %2.f km²\n", area[0][3]);
    printf("PIB: %2.f milhões\n", pib[0][3]);
    printf("Pontos turisticos: %d\n", pturisticos[0][3]);

    estado = 'B';

    printf("\nEstado: %c\n", estado);

    printf("Código da Carta: %c01 - Cidade: %s\n", estado, nomecidade[0][0]);  
    printf("População: %d\n", populacao[0][0]);
    printf("Área: %2.f km²\n", area[0][0]);
    printf("PIB: %2.f milhões\n", pib[0][0]);
    printf("Pontos turisticos: %d\n", pturisticos[0][0]);

    printf("\nCódigo da Carta: %c02 - Cidade: %s\n", estado, nomecidade[0][1]);  
    printf("População: %d\n", populacao[0][1]);
    printf("Área: %2.f km²\n", area[0][1]);
    printf("PIB: %2.f milhões\n", pib[0][1]);
    printf("Pontos turisticos: %d\n", pturisticos[0][1]);

    printf("\nCódigo da Carta: %c03 - Cidade: %s\n", estado, nomecidade[0][2]);  
    printf("População: %d\n", populacao[0][2]);
    printf("Área: %2.f km²\n", area[0][2]);
    printf("PIB: %2.f milhões\n", pib[0][2]);
    printf("Pontos turisticos: %d\n", pturisticos[0][2]);

    printf("\nCódigo da Carta: %c04 - Cidade: %s\n", estado, nomecidade[0][3]);  
    printf("População: %d\n", populacao[0][3]);
    printf("Área: %2.f km²\n", area[0][3]);
    printf("PIB: %2.f milhões\n", pib[0][3]);
    printf("Pontos turisticos: %d\n", pturisticos[0][3]);

    estado = 'C';

    printf("\nEstado: %c\n", estado);

    printf("Código da Carta: %c01 - Cidade: %s\n", estado, nomecidade[0][0]);  
    printf("População: %d\n", populacao[0][0]);
    printf("Área: %2.f km²\n", area[0][0]);
    printf("PIB: %2.f milhões\n", pib[0][0]);
    printf("Pontos turisticos: %d\n", pturisticos[0][0]);

    printf("\nCódigo da Carta: %c02 - Cidade: %s\n", estado, nomecidade[0][1]);  
    printf("População: %d\n", populacao[0][1]);
    printf("Área: %2.f km²\n", area[0][1]);
    printf("PIB: %2.f milhões\n", pib[0][1]);
    printf("Pontos turisticos: %d\n", pturisticos[0][1]);

    printf("\nCódigo da Carta: %c03 - Cidade: %s\n", estado, nomecidade[0][2]);  
    printf("População: %d\n", populacao[0][2]);
    printf("Área: %2.f km²\n", area[0][2]);
    printf("PIB: %2.f milhões\n", pib[0][2]);
    printf("Pontos turisticos: %d\n", pturisticos[0][2]);

    printf("\nCódigo da Carta: %c04 - Cidade: %s\n", estado, nomecidade[0][3]);  
    printf("População: %d\n", populacao[0][3]);
    printf("Área: %2.f km²\n", area[0][3]);
    printf("PIB: %2.f milhões\n", pib[0][3]);
    printf("Pontos turisticos: %d\n", pturisticos[0][3]);

    estado = 'D';

    printf("\nEstado: %c\n", estado);

    printf("Código da Carta: %c01 - Cidade: %s\n", estado, nomecidade[0][0]);  
    printf("População: %d\n", populacao[0][0]);
    printf("Área: %2.f km²\n", area[0][0]);
    printf("PIB: %2.f milhões\n", pib[0][0]);
    printf("Pontos turisticos: %d\n", pturisticos[0][0]);

    printf("\nCódigo da Carta: %c02 - Cidade: %s\n", estado, nomecidade[0][1]);  
    printf("População: %d\n", populacao[0][1]);
    printf("Área: %2.f km²\n", area[0][1]);
    printf("PIB: %2.f milhões\n", pib[0][1]);
    printf("Pontos turisticos: %d\n", pturisticos[0][1]);

    printf("\nCódigo da Carta: %c03 - Cidade: %s\n", estado, nomecidade[0][2]);  
    printf("População: %d\n", populacao[0][2]);
    printf("Área: %2.f km²\n", area[0][2]);
    printf("PIB: %2.f milhões\n", pib[0][2]);
    printf("Pontos turisticos: %d\n", pturisticos[0][2]);

    printf("\nCódigo da Carta: %c04 - Cidade: %s\n", estado, nomecidade[0][3]);  
    printf("População: %d\n", populacao[0][3]);
    printf("Área: %2.f km²\n", area[0][3]);
    printf("PIB: %2.f milhões\n", pib[0][3]);
    printf("Pontos turisticos: %d\n", pturisticos[0][3]);

    estado = 'E';

    printf("\nEstado: %c\n", estado);

    printf("Código da Carta: %c01 - Cidade: %s\n", estado, nomecidade[0][0]);  
    printf("População: %d\n", populacao[0][0]);
    printf("Área: %2.f km²\n", area[0][0]);
    printf("PIB: %2.f milhões\n", pib[0][0]);
    printf("Pontos turisticos: %d\n", pturisticos[0][0]);

    printf("\nCódigo da Carta: %c02 - Cidade: %s\n", estado, nomecidade[0][1]);  
    printf("População: %d\n", populacao[0][1]);
    printf("Área: %2.f km²\n", area[0][1]);
    printf("PIB: %2.f milhões\n", pib[0][1]);
    printf("Pontos turisticos: %d\n", pturisticos[0][1]);

    printf("\nCódigo da Carta: %c03 - Cidade: %s\n", estado, nomecidade[0][2]);  
    printf("População: %d\n", populacao[0][2]);
    printf("Área: %2.f km²\n", area[0][2]);
    printf("PIB: %2.f milhões\n", pib[0][2]);
    printf("Pontos turisticos: %d\n", pturisticos[0][2]);

    printf("\nCódigo da Carta: %c04 - Cidade: %s\n", estado, nomecidade[0][3]);  
    printf("População: %d\n", populacao[0][3]);
    printf("Área: %2.f km²\n", area[0][3]);
    printf("PIB: %2.f milhões\n", pib[0][3]);
    printf("Pontos turisticos: %d\n", pturisticos[0][3]);

    estado = 'F';

    printf("\nEstado: %c\n", estado);

    printf("Código da Carta: %c01 - Cidade: %s\n", estado, nomecidade[0][0]);  
    printf("População: %d\n", populacao[0][0]);
    printf("Área: %2.f km²\n", area[0][0]);
    printf("PIB: %2.f milhões\n", pib[0][0]);
    printf("Pontos turisticos: %d\n", pturisticos[0][0]);

    printf("\nCódigo da Carta: %c02 - Cidade: %s\n", estado, nomecidade[0][1]);  
    printf("População: %d\n", populacao[0][1]);
    printf("Área: %2.f km²\n", area[0][1]);
    printf("PIB: %2.f milhões\n", pib[0][1]);
    printf("Pontos turisticos: %d\n", pturisticos[0][1]);

    printf("\nCódigo da Carta: %c03 - Cidade: %s\n", estado, nomecidade[0][2]);  
    printf("População: %d\n", populacao[0][2]);
    printf("Área: %2.f km²\n", area[0][2]);
    printf("PIB: %2.f milhões\n", pib[0][2]);
    printf("Pontos turisticos: %d\n", pturisticos[0][2]);

    printf("\nCódigo da Carta: %c04 - Cidade: %s\n", estado, nomecidade[0][3]);  
    printf("População: %d\n", populacao[0][3]);
    printf("Área: %2.f km²\n", area[0][3]);
    printf("PIB: %2.f milhões\n", pib[0][3]);
    printf("Pontos turisticos: %d\n", pturisticos[0][3]);
    
    estado = 'G';

    printf("\nEstado: %c\n", estado);

    printf("Código da Carta: %c01 - Cidade: %s\n", estado, nomecidade[0][0]);  
    printf("População: %d\n", populacao[0][0]);
    printf("Área: %2.f km²\n", area[0][0]);
    printf("PIB: %2.f milhões\n", pib[0][0]);
    printf("Pontos turisticos: %d\n", pturisticos[0][0]);

    printf("\nCódigo da Carta: %c02 - Cidade: %s\n", estado, nomecidade[0][1]);  
    printf("População: %d\n", populacao[0][1]);
    printf("Área: %2.f km²\n", area[0][1]);
    printf("PIB: %2.f milhões\n", pib[0][1]);
    printf("Pontos turisticos: %d\n", pturisticos[0][1]);

    printf("\nCódigo da Carta: %c03 - Cidade: %s\n", estado, nomecidade[0][2]);  
    printf("População: %d\n", populacao[0][2]);
    printf("Área: %2.f km²\n", area[0][2]);
    printf("PIB: %2.f milhões\n", pib[0][2]);
    printf("Pontos turisticos: %d\n", pturisticos[0][2]);

    printf("\nCódigo da Carta: %c04 - Cidade: %s\n", estado, nomecidade[0][3]);  
    printf("População: %d\n", populacao[0][3]);
    printf("Área: %2.f km²\n", area[0][3]);
    printf("PIB: %2.f milhões\n", pib[0][3]);
    printf("Pontos turisticos: %d\n", pturisticos[0][3]);

    estado = 'H';

    printf("\nEstado: %c\n", estado);

    printf("Código da Carta: %c01 - Cidade: %s\n", estado, nomecidade[0][0]);  
    printf("População: %d\n", populacao[0][0]);
    printf("Área: %2.f km²\n", area[0][0]);
    printf("PIB: %2.f milhões\n", pib[0][0]);
    printf("Pontos turisticos: %d\n", pturisticos[0][0]);

    printf("\nCódigo da Carta: %c02 - Cidade: %s\n", estado, nomecidade[0][1]);  
    printf("População: %d\n", populacao[0][1]);
    printf("Área: %2.f km²\n", area[0][1]);
    printf("PIB: %2.f milhões\n", pib[0][1]);
    printf("Pontos turisticos: %d\n", pturisticos[0][1]);

    printf("\nCódigo da Carta: %c03 - Cidade: %s\n", estado, nomecidade[0][2]);  
    printf("População: %d\n", populacao[0][2]);
    printf("Área: %2.f km²\n", area[0][2]);
    printf("PIB: %2.f milhões\n", pib[0][2]);
    printf("Pontos turisticos: %d\n", pturisticos[0][2]);

    printf("\nCódigo da Carta: %c04 - Cidade: %s\n", estado, nomecidade[0][3]);  
    printf("População: %d\n", populacao[0][3]);
    printf("Área: %2.f km²\n", area[0][3]);
    printf("PIB: %2.f milhões\n", pib[0][3]);
    printf("Pontos turisticos: %d\n", pturisticos[0][3]);

    return 0;
}
