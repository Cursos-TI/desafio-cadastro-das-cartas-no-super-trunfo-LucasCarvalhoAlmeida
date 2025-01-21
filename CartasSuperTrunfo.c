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

    
    int populacao;
    float area;
    float pib;
    int pturismo;


    printf("Desafio Super Trunfo Países\n");
    printf("Cadastro das Cartas\n");

    printf("Insira o número da população de seu País:\n");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Insira a aréa de seu País:\n");
    scanf("%f", &area);
    printf("Aréa do seu País: %f\n", area);

    printf("Insira o PIB do seu País:\n");
    scanf("%f", &pib);
    printf("PIB do seu País: %f\n", pib);

    printf("Insira o número de pontos turistícos do seu País:\n");
    scanf("%d", &pturismo);
    printf("Pontos turisticos do seu Pais: %d\n", pturismo);


    return 0;
}
