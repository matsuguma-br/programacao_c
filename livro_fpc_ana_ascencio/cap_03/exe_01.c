#include <stdio.h>

int calcularSubtracao(int a, int b) {
    return a - b;
}

void mostrarMensagem(char *msg, int vlr) {
    printf("%s %d", msg, vlr);
}

int main() {
    int a, b, subtracao;

    printf("Insira o valor de A: ");
    scanf("%d%*c", &a);
    printf("Insira o valor de B: ");
    scanf("%d%*c", &b);

    subtracao = calcularSubtracao(a, b);
    
    mostrarMensagem("O resultado da subtração é ", subtracao);

    return 0;
}