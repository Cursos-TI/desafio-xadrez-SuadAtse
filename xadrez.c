#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void bispo_move(int set, const int casabispo,int a){
    if (set <= casabispo && set > 0) {
        printf("O Bispo se moveu para à diagonal %d vezes.\n",a++);
        bispo_move(set - 1,casabispo,a);
    }

};

void Torre_move(int set, const int casatorre,int a){
    if (set <= casatorre && set > 0) {
        printf("À Torre se moveu para à direita %d vezes.\n",a++);
        Torre_move(set - 1,casatorre,a);
    }

};

void Rainha_move(int set, const int casarainha,int a){
    if (set <= casarainha && set > 0) {
        printf("À Rainha se moveu para à esquerda %d vezes.\n",a++);
        bispo_move(set - 1,casarainha,a);
    }

};

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    const int casabispo = 5, casatorre = 5, casarainha = 8, casacavalo = 3;
    int move, set;
    int i = 1;
    int k = 1;
    int a = 1;

    printf("Escolha qual jogada você irá realizar?\n");
    printf("Mover o Bispo em diagonal - aperte 1\n");
    printf("Mover a Torre para à direita - aperte 2\n");
    printf("Mover a Rainha para à esquerda - aperte 3\n");
    printf("Mover o cavalo em L para à direita - aperte 4\n");
    printf("Escolha: ");
    scanf("%d", &move);

    switch (move)
    {
    case 1:
        while (move == 1){
            printf("O Bispo pode andar até 5 casas, quantas casas você vai movelo: ");
            scanf("%d", &set);
            if (set < 0 || set > 5){
                continue;
            }else{
                bispo_move(set, casabispo, a);
                break;
            }

        }
        

        break;
    case 2:
        printf("A Torre pode andar até 5 casas, quantas casas você vai movela: ");
        scanf("%d", &set);
        Torre_move(set,casatorre,a);
        break;
    case 3:
        printf("A Rainha pode andar até 8 casas, quantas casas você vai movela: ");
        scanf("%d", &set);
        Rainha_move(set,casarainha,a);
        break;
    case 4:
        printf("O cavalo pode andar até 3 casas, quantas casas você vai movelo: ");
        scanf("%d", &set);
        while (set <= casacavalo && i <= set)
        {   
            if (i<3){
            printf("O cavalo se moveu %d vezes para cima.\n",i);
            
            }
            while (i > 2 && k == 1){
                printf("O cavalo se moveu 1 vez para a esquerda");
                k++;
            }
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