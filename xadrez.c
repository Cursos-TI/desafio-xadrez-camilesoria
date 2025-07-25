#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre - Movimentação das Peças

void movimentoBispo(int casas){ // Cria a recursividade para o Bispo
    while(casas > 0) //LOOP EXETRNO - Executa o código enquanto "casas" for maior que 0
    {
        while(casas > 0) //LOOP INTERNO - Executa o código enquanto "casas" for maior que 0
        {
            printf("Direita\n"); //Imprime a direção de movimento do Bispo
            casas--; // Decrementa o valor de "casas"
            break; // Para o código para evitar loop infinito e prossegue para o loop externo
        }
        printf("Cima\n"); //Imprime a direção de movimento do Bispo
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

    printf("Bem-vindo ao Desafio Xadrez - MateCheck!\n"); // Exibe uma mensagem de boas vindas

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
    /*O for abaixo declara e inicializa as variáveis "cavaloH" (para o movimento horizontal) e "cavaloV" (para o movimento vertical),
    e executa o código interno enquanto ambas as variáveis forem maiores que 0, além de decrementar o valor de "cavaloH".*/
    for(int cavaloH = 1, cavaloV = 2; cavaloH > 0 && cavaloV > 0; cavaloH --)
    {
        while (cavaloV > 0) // Executa o código enquanto "cavaloV" for maior que 0
        {
            printf("Cima\n"); // Imprime a direção do momento
            cavaloV--; // Decrementa o valor de "cavaloV"
        }
        printf("Direita\n"); // Imprime a direção do movimento
    }
    printf("\n"); //Adiciona uma quebra de linha para facilitar a visualização no terminal

    return 0; //Finaliza o programa
}