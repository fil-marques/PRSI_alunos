/*
    Ficha 2 - Jogo Pedra, Papel, Tesoura

    O que faz este programa?
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); /* Porquê o 'time' ? */

    int res = rand() % 2; /* O que faz esta linha de código? */

    printf("\tResultado: %d\n", res); /* Que resultados poderão ocorrer aqui? */

    /* Modifica a mensagem que é impressa para outra à tua escolha. */

    /* Re-utilizando o código, recria o jogo Pedra, Papel, Tesoura numa função jogo() em
    separado */

    return 0;
}