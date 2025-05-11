#include <stdio.h>

// Definição da estrutura Carta
typedef struct {
    char estado[50];
    char codigoDaCarta[20];
    char nomeDaCidade[50];
    int populacao;
    float area;
    float pib;
} Carta;

int main() {
// Definindo variáveis do tipo Carta
// Inicializando as variáveis com valores de exemplo


    Carta carta1 = {"São Paulo", "SP123", "São Paulo", 12300000, 1500.5, 500000}; 
    Carta carta2 = {"Rio de Janeiro", "RJ456", "Rio de Janeiro", 6000000, 1200.3, 300000};

    float DensPop1 = carta1.populacao / carta1.area;
    float DensPop2 = carta2.populacao / carta2.area;
    float PibPerCap1 = carta1.pib / carta1.populacao;
    float PibPerCap2 = carta2.pib / carta2.populacao;

// Comparando a densidade populacional entre São Paulo e Rio de Janeiro
    printf ("Comprando o PIB per capita entre Sao Paulo e Rio de Janeiro:\n");
    printf ("PIB per capita de Sao Paulo: %.2f \n", PibPerCap1);
    printf ("PIB per capita de Rio de Janieiro: %.2f \n", PibPerCap2);

// Estrutura de controle de fluxo condicional.
    if (PibPerCap1 > PibPerCap2){ 
        printf ("Sao Paulo tem um PIB per capita maior que o Rio de Janeiro. \n");
    } else if (PibPerCap1 < PibPerCap2){
        printf ("Rio de Janeiro tem um PIB per capita maior que Sao Paulo. \n");
    } else {
        printf ("Os PIBs per capita de Sao Paulo e Rio de Janeiro sao iguais. \n");
    }
    return 0;
}
