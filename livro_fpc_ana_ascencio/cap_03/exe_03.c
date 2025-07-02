#include <stdio.h>

int calcularDivisao(int a, int b) {
    return a / b;
}

void mostrarMensagem(char *msg, int vlr) {
    printf("%s %d", msg, vlr);
}

int main() {
    int a, b, divisao;

    printf("Insira o valor de A: ");
    scanf("%d%*c", &a);
    printf("Insira o valor de B: ");
    scanf("%d%*c", &b);

    divisao = calcularDivisao(a, b);

    mostrarMensagem("O resultado da divisão é ", divisao);

    return 0;
}