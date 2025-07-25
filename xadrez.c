#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre - Movimentação das Peças

void movimentoBispo(int casasV){ //Cria a recursividade para o Bispo
    int casasH = casasV; // Cria uma variável casasH que controlará o movimento horizontal e a iguala a casasV
    while(casasV > 0) //Executa o código enquanto "casasV" for maior que 0
    {
        while(casasH > 0) //Executa o código enquanto "casasH" for maior que 0
        {
            printf("Direita\n"); //Imprime a direção de movimento do Bispo
            casasH--; //Decrementa o valor de casasH
        }
        printf("Cima\n"); //Imprime a direção de movimento do Bispo
        casasV--; //Decrementa o valor de casasV
    }
}

void movimentoTorre(int casas){ //Cria a recursividade para a Torre
    if(casas > 0) //Executa o código enquanto "casas" for maior que 0
    {
        printf("Direita\n"); //Imprime a direção de movimento da Torre
        movimentoTorre(casas - 1); //Decrementa o valor de "casas"
    }
}

void movimentoRainha(int casas){
    if(casas > 0) //Executa o código enquanto "casas" for maior que 0
    {
        printf("Esquerda\n"); //Imprime a direção de movimento da Rainha
        movimentoRainha(casas - 1); //Decrementa o valor de "casas"
    }
}

int main(){
    int cavaloH = 2, cavaloV = 1; //Declara e inicializa as variáveis que armazenarão o número de movimentos do cavalo, sendo cavaloH para o sentido horizontal e cavaloV para o sentido vertical

    // Implementação de Movimentação do Bispo, na diagonal, cinco casas para cima e para a direita
    printf("Movimentando o Bispo\n"); //Informa o movimento que está sendo realizado
    movimentoBispo(5); //Chama a recursividade do Bispo
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    // Implementação de Movimentação da Torre, para a direita, cinco casas
    printf("Movimentando a Torre\n"); //Informa o movimento que está sendo realizado
    movimentoTorre(5); //Chama a recursividade da Torre
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    // Implementação de Movimentação da Rainha, para a esquerda, oito casas
    printf("Movimentando a Rainha\n"); //Informa o movimento que está sendo realizado
    movimentoRainha(8); //Chama a recursividade da Rainha
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    // Implementação de Movimentação do Cavalo, para cima, duas casas, e para a direita, uma casa
    printf("Movimentando o Cavalo\n"); //Informa o movimento que está sendo realizado
        for (cavaloH = 1, cavaloV = 2; cavaloH > 0 && cavaloV > 0; cavaloH--)//Executa o código enquanto cavaloH for maior que 0, e ao mesmo decrementa seu valor
        {
            printf("Cima\n"); //Imprime a direção da primeira parte do movimento do Cavalo
            printf("Cima\n"); //Imprime a direção da primeira parte do movimento do Cavalo
            printf("Direita\n"); //Imprime a direção da segunda parte do movimento do Cavalo
        }
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    return 0; //Finaliza o programa
}