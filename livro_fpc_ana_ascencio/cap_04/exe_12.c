#include <stdio.h>
#include <string.h>

#define IMPOSTO 7

float calc_gratificacao(float salario_bruto) {
    if(salario_bruto <= 350) {
        return 100;
    }
    else if(salario_bruto < 600) {
        return 75;
    }
    else if(salario_bruto <= 900) {
        return 50;
    }
    else {
        return 35;
    }
}

float calc_valor_receber(float salario_bruto, float valor_gratificacao) {
    float valor_receber, porc_imposto;

    valor_receber = salario_bruto + valor_gratificacao;
    porc_imposto = 1.0 - IMPOSTO / 100.0;

    return valor_receber * porc_imposto;
}

int main() {
    float salario_bruto, valor_gratificacao, valor_receber;

    printf("Insira o valor do salário: ");
    scanf("%f%*c", &salario_bruto);

    valor_gratificacao = calc_gratificacao(salario_bruto);
    valor_receber = calc_valor_receber(salario_bruto, valor_gratificacao);

    printf("Valor a receber: %5.2f", valor_receber);

    return 0;
}