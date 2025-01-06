#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    const int casabispo = 5, casatorre = 5, casarainha = 8;
    int move, set;
    int i = 1;

    printf("Escolha qual jogada você irá realizar?\n");
    printf("Mover o Bispo em diagonal - aperte 1\n");
    printf("Mover a Torre para à direita - aperte 2\n");
    printf("Mover a Rainha para à esquerda - aperte 3\n");
    printf("Escolha: ");
    scanf("%d", &move);

    switch (move)
    {
    case 1:
        printf("O Bispo pode andar até 5 casas, quantas casas você vai movelo: ");
        scanf("%d", &set);
        while (set <= casabispo && i <= set)
        {
            printf("O Bispo se moveu %i vezes para à diagonal.\n",i);
            i++;
        }
        break;
    case 2:
        printf("A Torre pode andar até 5 casas, quantas casas você vai movela: ");
        scanf("%d", &set);
        while (set <= casatorre && i <= set)
        {
            printf("A torre se moveu %i vezes para à direita.\n",i);
            i++;
        }
        break;
    case 3:
        printf("A Rainha pode andar até 8 casas, quantas casas você vai movela: ");
        scanf("%d", &set);
        while (set <= casarainha && i <= set)
        {
            printf("A rainha se moveu %d vezes para à esquerda.\n",i);
            i++;
        }
        break;
    default:
        printf("ERRO.Tente Novamente.");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
