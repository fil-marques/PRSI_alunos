/*
    Atividade 2 - Pedra, Papel, Tesoura
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ganhou = 0;
int tentativas = 0;

void imprimirTesoura(){
    printf( " _  __ \n"
            "(_)/ / \n"
            "  / /  \n" 
            " / /_  \n" 
            "/_/(_) \n");
}

void imprimirPedra(){
    printf( "  ___  \n"
            " / _ \\ \n"
            "| | | |\n" 
            "| |_| |\n" 
            " \\___/ \n");
}

void imprimirPapel(){
    printf( " _______ \n"
            "| _   _ |\n"
            "| |   | |\n" 
            "| |   | |\n" 
            "| |   | |\n"
            "|_______|\n");
}

void imprimirOpcoes(){
    printf("\nEscolha uma jogada:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("\nEscolha: ");
}

void jogo(){
    ;
}

int main(){
    int jogador;
    int computador;

    imprimirOpcoes();
    scanf("%i", &jogador);

    srand(time(NULL));
    computador = rand() % 3 + 1;

    printf("O computador escolheu ");
    switch(computador) {
        case 1:
            printf("pedra.\n");
            break;
        case 2:
            printf("papel.\n");
            break;
        case 3:
            printf("tesoura.\n");
            break;
    }

    printf("Você escolheu ");
    switch(jogador) {
        case 1:
            printf("pedra.\n");
            break;
        case 2:
            printf("papel.\n");
            break;
        case 3:
            printf("tesoura.\n");
            break;
        default:
            printf("uma jogada inválida.\n");
    }

    if (jogador == computador) {
        printf("Empate!\n");
    } else if (jogador == 1 && computador == 3 ||
               jogador == 2 && computador == 1 ||
               jogador == 3 && computador == 2) {
        printf("Você ganhou!\n");
        ganhou = 1;
    } else {
        printf("Você perdeu!\n");
    }

    tentativas = tentativas + 1;

    return 0;
}