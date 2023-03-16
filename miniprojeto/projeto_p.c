/**
 * Projeto de Programação Estruturada para a disciplina PRSI
 * Curso GPSI - 2022/2023
 * Realizado pelos alunos _ e _
**/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define LARGURA 100 /* Quanto maior, mais fácil ficará o jogo */

int main(){
    float vento = 10.0; /* pode ir de -100 até 100 */
    float angulo = 0.0; /* pode ir de 0 até 90 graus */
    float velocidade = 0.0; /* pode ir de 0 até 100 */
    float ondulacao = fabs(vento/10); /* pode ir de -10 até 10 */

    int jogador1_posicao = 25; /* posição entre 0 e 480 (480 pixels total) */
    int jogador2_posicao = 400;

    printf("\033[2J\033[1;1H");
    printf("         /|\\                                         /|\\ \n");
    printf("       /__| )                                       ( |__\\ \n");
    printf("     /____| ))                                     (( |____\\ \n");
    printf("   /______| )))                                   ((( |______\\ \n");
    printf(" /________|  )))                                 (((  |________\\ \n");
    printf("         _|____))                               ((____|_ \n");
    printf(" \\======| o o /                                   \\ o o |======/ \n");
    printf("0 ~~~~~~~~~~~~~~~~~~~                            ~~~~~~~~~~~~~~~~~~ 480\n");

    printf("Posição Player 1: %i \t\t\t Posição Player 2: %i\n\n", jogador1_posicao, jogador2_posicao);
    printf("Vento: %.1f km/h \t\t\t Ondulação: %.1f m\n\n", vento, ondulacao);

    printf("Ângulo (0-90): ");
    angulo = 45;

    printf("Velocidade (0-100 m/s): ");
    velocidade = 55;

    angulo = angulo * (M_PI/180); //converte de graus para radianos
    float g = 9.8; //constante da gravidade

    float alcance = velocidade * velocidade * sin(2*angulo)/g; //sítio onde caiu

    if(jogador1_posicao + alcance + vento > jogador2_posicao + LARGURA/2 || //se cair mais à direita OU
        jogador1_posicao + alcance + vento < jogador2_posicao - LARGURA/2){ //se cair mais à esquerda
        printf("Resultado: Falhaste! Ao lado: %.2f\n\n", jogador1_posicao + alcance + vento - jogador2_posicao);
    }else{
        
    }

    return 0;
}

