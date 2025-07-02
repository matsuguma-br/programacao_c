#include <stdio.h>

// Calcula o valor da hora normal com base no salário mínimo
float calcular_valor_hora(float salario_minimo) {
    return salario_minimo / 8;
}

// Calcula o valor da hora extra com base no salário mínimo
float calcular_valor_hora_extra(float salario_minimo) {
    return salario_minimo / 4;
}

// Calcula o salário bruto (horas normais * valor da hora)
float calcular_salario_bruto(int horas_trabalhadas, float valor_hora) {
    return horas_trabalhadas * valor_hora;
}

// Calcula o valor referente às horas extras
float calcular_salario_hora_extra(int horas_extras, float valor_hora_extra) {
    return horas_extras * valor_hora_extra;
}

// Calcula o salário total a receber
float calcular_salario_total(float salario_bruto, float salario_hora_extra) {
    return salario_bruto + salario_hora_extra;
}

// Exibe uma mensagem com valor formatado
void mostrar_mensagem(const char *msg, float valor) {
    printf("%s %5.2f\n", msg, valor);
}

int main() {
    int horas_trabalhadas, horas_extras;
    float salario_minimo;
    float valor_hora, valor_hora_extra, salario_bruto, salario_hora_extra, salario_total;

    printf("Insira o valor do salário mínimo: ");
    scanf("%f%*c", &salario_minimo);

    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%d%*c", &horas_trabalhadas);

    printf("Insira a quantidade de horas extras: ");
    scanf("%d%*c", &horas_extras);

    valor_hora = calcular_valor_hora(salario_minimo);
    valor_hora_extra = calcular_valor_hora_extra(salario_minimo);
    salario_bruto = calcular_salario_bruto(horas_trabalhadas, valor_hora);
    salario_hora_extra = calcular_salario_hora_extra(horas_extras, valor_hora_extra);
    salario_total = calcular_salario_total(salario_bruto, salario_hora_extra);

    mostrar_mensagem("O salário a receber é", salario_total);

    return 0;
}