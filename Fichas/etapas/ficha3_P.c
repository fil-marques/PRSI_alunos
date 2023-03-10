/*
    Atividade 3 - "Adivinha o número"
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nr_maximo = 100;
int nr_max_tentativas = 10;

void guess(){
    int numero_gerado;
    int guess = 0; 
    int conta_tentativas = 0;

    numero_gerado = rand() % nr_maximo + 1;

    printf("Adivinha o número entre"
           " 1 e %d\n", nr_maximo);

    while (guess != numero_gerado){

        if (conta_tentativas >= nr_max_tentativas){
            printf("\nPerdeste!\n");
            break;
        }

        scanf("%i", &guess);
        if (guess > numero_gerado) 
        {
            printf("Menor "
                   "por favor!\n");
            conta_tentativas++;
        }
        else if (numero_gerado > guess)
        {
            printf("Maior"
                   " por favor!\n");
            conta_tentativas++;
        }
        else
        {
            printf("Adivinhaste o número em %d "
                   "tentativas!\n", conta_tentativas);
        }
    }
}

int main(){
    /* srand() deve ser chamado uma só vez, antes de rand() */
    srand(time(NULL));

    guess();

    return 0;
}
