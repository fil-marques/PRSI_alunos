/*
    Ficha 1 - Cálculo de energia verde

    O que faz este programa?
*/

#include <stdio.h>

int main() {
    int consumo_diario;
    int dias_ano;
    float potencia_painel;
    float quantidade_painel;
    float area_necessaria;

    printf("Digite o consumo diário de energia da sua casa (em kWh): ");
    scanf("%d", &consumo_diario);
    printf("Digite o número de dias por ano que deseja suprir com a energia solar: ");
    scanf("%d", &dias_ano);
    printf("Digite a potência de cada painel solar (em Watts): ");
    scanf("%f", &potencia_painel);

    quantidade_painel = (consumo_diario * dias_ano * 1000) / (potencia_painel * 6);
    area_necessaria = quantidade_painel * 1.75;

    printf("Você precisará de aproximadamente %.2f painéis solares (%.2f m²) para suprir a sua casa.\n", quantidade_painel, area_necessaria);

    return 0;
}
