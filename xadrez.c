#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças

int main() {
    int i = 5, j = 5, k = 8, l = 2, movimentoCavalo = 1; //Declara e inicializa as variáveis que armazenarão o número de movimentos das peças, junto com o número de movimentos

    // Implementação de Movimentação do Bispo, na diagonal, cinco casas para cima e para a direita

    printf("Movimentando o Bispo, na diagonal, cinco casas para cima e para a direita.\n"); //Informa o movimento que está sendo realizado
    for (i = 5; i > 0; i--) //"i" armazena o valor 5, e, enquanto maior que 0, executará o código e decrementará seu próprio valor
    {
        printf("Cima, Direita\n"); //Imprime a direção de movimento do Bispo
    }
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    // Implementação de Movimentação da Torre, para a direita, cinco casas

    printf("Movimentando a Torre, para a direita, cinco casas.\n"); //Informa o movimento que está sendo realizado
    while(j > 0)//Executa o código enquanto "j" for maior que 0
    {
        printf("Direita\n"); //Imprime a direção de movimento da Torre
        j--; //Decrementa o valor de "j"
    }
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    // Implementação de Movimentação da Rainha, para a esquerda, oito casas

    printf("Movimentando a Rainha, para a esquerda, oito casas.\n"); //Informa o movimento que está sendo realizado
    do{
        printf("Esquerda\n"); //Imprime a direção de movimento da Rainha
        k--; //Decrementa o valor de "k"
    }while(k > 0); //Executa o código enquanto "k" for maior que 0
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    printf("Movimentando o Cavalo, para cima, duas casas, e depois para a direita, uma casa.\n"); //Informa o movimento que está sendo realizado
    while(movimentoCavalo > 0){
        for (l = 2; l > 0; l--)//"l" armazena o valor 2, e, enquanto maior que 0, executará o código e decrementará seu próprio valor
        {
            printf("Cima\n"); //Imprime a direção da primeira parte do movimento do Cavalo
        }
        printf("Direita\n"); //Imprime a direção da segunda parte do movimento do Cavalo
        movimentoCavalo--; //Decrementa o valor de "movimentoCavalo"
    }
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    return 0; //Finaliza o programa
}
