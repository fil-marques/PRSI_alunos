/*
    Atividade 1 - Calcular Energia Verde
*/

#include <stdio.h>

int horas_exposicao_solar;
int consumo_diario;
float potencia_painel;
float quantidade_paineis;

void pedirConsumoDiario() {
    printf("\tDigite o consumo diário de \n"
        "energia da sua casa (entre 0 a 10 kWh): ");
    scanf("%d", &consumo_diario);
}

void pedirPotenciaPainel() {
    printf("\tDigite a potência de cada \n"
        "painel solar (entre 50 a 900 Watts): ");
    scanf("%f", &potencia_painel);
}

int main() {
    horas_exposicao_solar = 5;

    pedirConsumoDiario();
    pedirPotenciaPainel();

    quantidade_paineis = (consumo_diario * 1000) / (potencia_painel * horas_exposicao_solar);

    printf("Precisará de adquirir aproximadamente %.0f painéis \n"
        "solares para suprir a sua casa.\n", quantidade_paineis);

    return 0;
}
