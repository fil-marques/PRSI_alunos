/*
    Atividade 1 - Calcular Energia Verde
*/

#include <stdio.h>

int horas_exposicao_solar;
int consumo_diario;
float potencia_painel;
float quantidade_paineis;
float area_necessaria;
float custo;

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

void calcularOrcamento() {
    custo = quantidade_paineis * potencia_painel * 1; //custo 1 eur/watt
}

void imprimirResultado() {
    printf("\t*Precisará de adquirir aproximadamente %.0f painéis \n"
        "solares para suprir a sua casa.\n", quantidade_paineis);
    
    printf("\t*Precisará de aproximadamente %.2f m² \n"
        "de área para instalar esses painéis.\n", area_necessaria);

    printf("\t*A sua instalação terá um custo de\n"
        "aproximadamente %.2f euros.\n", custo);
}

int main() {
    horas_exposicao_solar = 5;

    pedirConsumoDiario();
    pedirPotenciaPainel();

    calcularQuantidadePaineis();
    calcularArea();
    calcularOrcamento();

    imprimirResultado();

    return 0;
}
