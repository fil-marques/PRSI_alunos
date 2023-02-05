/*
    Ficha 4 - Noção de Apontador utilizando a função Swap como exemplo
*/

#include <stdio.h>
#include <stdlib.h>
void troca(int* x, int* y){
    int aux;

    aux = *x; //temporariamente guardamos x
    *x = *y; //apagamos o que estava em x com o valor de y
    *y = aux; //apagamos y com o valor que estava em x
}

int main(){
    int a, b;

    printf("Indique dois números: ");
    scanf("%d %d", &a, &b);
    troca(&a,&b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}