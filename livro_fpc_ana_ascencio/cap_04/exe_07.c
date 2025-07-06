#include <stdio.h>
#include <string.h>

#define PORC_AUMENTO 0.35
#define MIN_AUMENTO 500

float calcular_salario(float salario) {
    if(salario < MIN_AUMENTO) return salario * (1 + PORC_AUMENTO);
    else return salario;
}

void definir_status(char status[], float salario, float salarioNovo) {
    if(salario == salarioNovo) strcpy(status, "Não possui direito a aumento.");
}

int main() {
    float salario, salarioNovo;
    char status[40];

    printf("Inserir salário: ");
    scanf("%f%*c", &salario);

    salarioNovo = calcular_salario(salario);

    definir_status(status, salario, salarioNovo);

    if(salario != salarioNovo) printf("Salário novo: %5.2f", salarioNovo);
    else printf("%s", status);

    return 0;
}