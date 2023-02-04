#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define LARGURA 50

static void imprimir_campo_jogo();

int main(){
    float wind = 10.0; /* goes from -100 to 100 */
    float angle = 0.0; /* goes from 0 to 90 degrees */
    float force = 0.0; /* goes from 0 to 100 */
    float tide_lenght = fabs(wind/10); /* can go from -10 to 10 */

    int player1_position = 25; /* position go from - 240 to 240 (480 pixels total) */
    int player2_position = 400;

    float player1_damage = 50; 
    float player2_damage = 50; 

    /*
        1. Gerar posições aleatórias para player1 e player2
        1.1 Gerar velocidade de vento aleatória
        3. Gerar ecrã, mostrando posição dos jogadores, e estado do jogo
        4. Esperar pelo input de um dos jogadores - direcção e velocidade
        5. Processar (disparar e gerar explosão) e mostrar resultado (desvio do alvo)
        6. Repetir 3.
    */

    printf("Posição Player 1 (0-100): ");
    scanf("%i", &player1_position);

    printf("Posição Player 2 (0-480): ");
    scanf("%i", &player2_position);

    printf("\033[2J\033[1;1H");
    printf("         /|\\                                         /|\\ \n");
    printf("       /__| )                                       ( |__\\ \n");
    printf("     /____| ))                                     (( |____\\ \n");
    printf("   /______| )))                                   ((( |______\\ \n");
    printf(" /________|  )))                                 (((  |________\\ \n");
    printf("         _|____))                               ((____|_ \n");
    printf(" \\======| o o /                                   \\ o o |======/ \n");
    printf("0 ~~~~~~~~~~~~~~~~~~~                            ~~~~~~~~~~~~~~~~~~ 480\n");

    printf("Posição Player 1: %i \t\t\t Posição Player 2: %i\n\n", player1_position, player2_position);
    // printf("Estado Player 1: %.1f \t\t\t Estado Player 2: %.1f\n", player1_damage, player2_damage);
    // printf("Vento: %.1f km/h \t\t\t Ondulação: %.1f m\n\n", wind,tide_lenght);

    printf("Ângulo (0-90): ");
    scanf("%f", &angle); //inserir ângulo projétil

    printf("Velocidade (m/s): ");
    scanf("%f", &force); //inserir velocidade m/s projétil

    // Calcula onde vai cair o projétil:

    angle = angle * (M_PI/180); //converte de graus para radianos
    float g = 9.8; //gravidade
    float t_flight = 2 * force * sin(angle)/g; //tempo de voo projétil
    // float t = t_flight;
    float x = force * cos(angle) * t_flight; //posição x onde caiu
    // double y = force * sin(angle) * t_flight - 0.5 * g * t_flight * t_flight;

    if(player1_position + x + wind > player2_position + LARGURA || player1_position + x + wind < player2_position - LARGURA){
        // printf("ângulo: %.2f \t força: %.2f\n", angle, force);
        // printf("x-projetil: %.2f \t y-projetil: %.2f\n", x, y);
        printf("Resultado: Falhaste! Ao lado: %.2f\n\n", player1_position + x + wind - player2_position);
    }else{
        // printf("x-projetil: %.2f \t y-projetil: %.2f\n", x, y);
        // printf("Queda X: %.2f\n", x + player1_position + wind);
        printf("Resultado: BOOM! [Tentativas: %i] [Pontuação obtida: %.2f]\n\n", 1, fabs(player1_position + x + wind - player2_position));
    }
}

static void imprimir_barco_player1(){
    printf("\033[2J\033[1;1H");
    printf("         /|\\ \n");
    printf("       /__| )\n");
    printf("     /____| ))\n");
    printf("   /______| )))\n");
    printf(" /________|  )))\n");
    printf("         _|____))\n");
    printf(" \\======| o o /\n");
    printf("~~~~~~~~~~~~~~~~~~~\n");
}

static void imprimir_campo_jogo(){
    printf("\033[2J\033[1;1H");
    printf("         /|\\                                         /|\\ \n");
    printf("       /__| )                                       ( |__\\ \n");
    printf("     /____| ))                                     (( |____\\ \n");
    printf("   /______| )))                                   ((( |______\\ \n");
    printf(" /________|  )))                                 (((  |________\\ \n");
    printf("         _|____))                               ((____|_ \n");
    printf(" \\======| o o /                                   \\ o o |======/ \n");
    printf("0 ~~~~~~~~~~~~~~~~~~~                            ~~~~~~~~~~~~~~~~~~ 480\n");
}