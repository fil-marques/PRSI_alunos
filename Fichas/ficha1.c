/*
    Ficha 1 - Cálculo de Energia Verde

    1 - O que faz este programa?
    2 - Executa o programa e testa a tua hipótese
    3 - Comenta nas linhas indicadas o que faz cada instrução
    4 - Modifica e melhora o teu programa para que utilize um procedimento calcula_quantidade_paineis()
    5 - Cria um novo programa que calcula_area_paineis() (dica: tenta re-utilizar o que já fizeste)
*/

#include <stdio.h>

main() {
    int consumo_diario;
    int dias_ano;
    float potencia_painel;
    float quantidade_painel;
    float area_necessaria;

    dias_ano = 365;

    printf("Digite o consumo diário de energia da sua casa (em kWh): ");
    scanf("%d", &consumo_diario);
    printf("Digite a potência de cada painel solar (em Watts): ");
    scanf("%f", &potencia_painel);

    quantidade_painel = (consumo_diario * dias_ano) / (potencia_painel * 6); //6 horas de luz plena
    // area_necessaria = quantidade_painel * 1.75; //assumindo cada painel tem uma área de 1.75
    // ^^ Função a criar

    printf("Você precisará de aproximadamente %.2f painéis solares para suprir a sua casa.\n", quantidade_painel);
//    printf("Você precisará de aproximadamente %.2f m² para suprir a sua casa.\n", area_necessaria);
}
