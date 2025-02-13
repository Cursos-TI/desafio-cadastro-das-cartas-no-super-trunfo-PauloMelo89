#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    float PIB, area;
    int ptsTuristicos, populacao;
    char estado[50], codigo[50], nome[50];
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o estado da Cidade: \n");
    scanf("%s", estado);

    printf("Digite a código da Cidade: \n");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome);

    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da Cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB);

    printf("Digite número de pontos turísticos da Cidade: \n");
    scanf("%d", &ptsTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Nome do Estado: %s \n", estado);
    printf("Código da Cidade: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População da Cidade: %d \n", populacao);
    printf("Área da Cidade: %f \n", area);
    printf("PIB da Cidade: %f \n", PIB);
    printf("Número de pontos turísticos  da Cidade: %d \n", ptsTuristicos);

    return 0;
}
