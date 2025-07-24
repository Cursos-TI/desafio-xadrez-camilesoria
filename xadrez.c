#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças

int main() {
    int bispo = 5, torre = 5, rainha = 8;//Declara e inicializa as variáveis que armazenarão o número de movimentos das peças, junto com o número de movimentos

    // Implementação de Movimentação do Bispo, na diagonal, cinco casas para cima e para a direita

    printf("Movimentando o Bispo, na diagonal, cinco casas para cima e para a direita.\n"); //Informa o movimento que está sendo realizado
    for (bispo = 5; bispo > 0; bispo--)//"bispo" armazena o valor 5, e, enquanto maior que 0, executará o código e decrementará seu próprio valor
    {
        printf("Cima, Direita\n"); //Imprime a direção de movimento do Bispo
    }
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    // Implementação de Movimentação da Torre, para a direita, cinco casas

    printf("Movimentando a Torre, para a direita, cinco casas.\n"); //Informa o movimento que está sendo realizado
    while(torre > 0)//Executa o código enquanto "torre" for maior que 0
    {
        printf("Direita\n"); //Imprime a direção de movimento da Torre
        torre--; //Decrementa o valor de "torre"
    }
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    // Implementação de Movimentação da Rainha, para a esquerda, oito casas

    printf("Movimentando a Rainha, para a esquerda, oito casas.\n"); //Informa o movimento que está sendo realizado
    do{
        printf("Esquerda\n"); //Imprime a direção de movimento da Rainha
        rainha--; //Decrementa o valor de "rainha"
    }while(rainha > 0); //Executa o código enquanto "rainha" for maior que 0
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    return 0; //Finaliza o programa
}
