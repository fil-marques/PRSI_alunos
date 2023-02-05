/*
    Ficha 2 - Jogo Pedra, Papel, Tesoura

    O que faz este programa?
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprime_tesoura(){
    printf(" _  __\n"
        "(_)/ /\n"
        "  / /\n" 
        " / /_\n" 
        "/_/(_)\n");
}

main(){
    srand(time(NULL)); /* Porquê o 'time' ? */

    int res = rand() % 3; /* O que faz esta linha de código? Quais os valores possíveis de 'res' */

    printf("\tResultado: %d\n", res); /* Que resultados poderão ocorrer aqui? */

    /* Modifica a mensagem que é impressa para outra à tua escolha. */

    /* Re-utilizando o código, recria o jogo Pedra, Papel, Tesoura numa função jogo() em
    separado */

    if(res == 2)
        imprime_tesoura();

}