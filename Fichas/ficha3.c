/*
    Ficha 3 - Guess a Number

    O que faz este programa?
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// P: Que faz este procedimento? 
// R: Procedimento que gera um número
// no intervalo [1, N] e verifica se o
// número é o mesmo que
// o palpite (guess) do utilizador ou não
void guess(int N)
{
    int numero, guess, numberofguess = 0;
 
    //'Semente' para o gerador do número aleatório
    srand(time(NULL));
 
    // Gera número aleatório
    // P: Em que variável fica guardado? Para que serve o '%'?
    numero = rand() % N;
 
    printf("Adivinha o número entre"
           " 1 e %d\n",
           N);
 
    // Usar um ciclo do-while que funcionará
    // até que o utilizador adivinhe
    // o número certo
    do {
 
        if (numberofguess > 9) {
            printf("\nYou Loose!\n");
            break;
        }
 
        // Input do utilizador
        scanf("%d", &guess);
        // Que faz este ramo da condição?
        // R: Quando o palpite (guess) do utilizador 
        // é menor que o número 
        if (guess > numero) 
        {
            printf("Menor "
                   "por favor!\n");
            numberofguess++;
        }
        // Que faz este ramo da condição?
        // R: Quando o palpite (guess) do utilizador 
        // é maior que o número 
        else if (numero > guess)
        {
            printf("Maior"
                   " por favor!\n");
            numberofguess++;
        }
        // O que faz esta parte do código?
        // R: Imprime o número de vezes que o utilizador previsou
        // até adivinhar o número 
        else
            printf("Adivinhaste o número em %d "
                   "tentativas!\n", numberofguess);
 
    } while (guess != numero);
}
 


// Código que lança o jogo
main()
{
    int N = 100;
 
    // Chamar função
    guess(N);
}

