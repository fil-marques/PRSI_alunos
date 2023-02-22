/*
    Atividade 1 - Calcular Energia Verde
*/

#include <stdio.h>

int horas_exposicao_solar;
int consumo_diario;
float potencia_painel;
float quantidade_paineis;
float area_necessaria;

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

void calcularQuantidadePaineis() {
    quantidade_paineis = (consumo_diario * 1000) / (potencia_painel * horas_exposicao_solar);
}

void calcularArea() {
    area_necessaria = quantidade_paineis * 2;
}

void imprimirResultado() {
    printf("\t*Precisará de adquirir aproximadamente %.0f painéis \n"
        "solares para suprir a sua casa.\n", quantidade_paineis);
    
    printf("\t*Precisará de aproximadamente %.2f m² \n"
        "de área para instalar esses painéis.\n", area_necessaria);
}

int main() {
    horas_exposicao_solar = 5;

    pedirConsumoDiario();
    pedirPotenciaPainel();

    calcularQuantidadePaineis();
    calcularArea();

    imprimirResultado();

    return 0;
}