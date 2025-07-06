#include <stdio.h>

float calc_novo_salario(float salario) {
    if(salario < 300) {
        return salario * 1.5;
    }
    else if(salario <= 500) {
        return salario * 1.4;
    }
    else if(salario <= 700) {
        return salario * 1.3;
    }
    else if(salario <= 800) {
        return salario * 1.2;
    }
    else if(salario <= 1000) {
        return salario * 1.1;
    }
    else {
        return salario * 1.05;
    }
}

int main() {
    float salario, salario_novo;

    printf("Insira o valor do salário: ");
    scanf("%f%*c", &salario);

    salario_novo = calc_novo_salario(salario);

    printf("Salário novo: %5.2f", salario_novo);

    return 0;
}