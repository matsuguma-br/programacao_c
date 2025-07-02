#include <stdio.h>

float novoPesoEngordar(float peso) {
    return peso * 1.15;
}

float novoPesoEmagrecer(float peso) {
    return peso * 0.8;
}

void mostrarMensagem(char *msg, float vlr) {
    printf("%s %5.2f", msg, vlr);
}

int main() {
    float peso, pesoEngordar, pesoEmagrecer;

    printf("Insira o peso: ");
    scanf("%f%*c", &peso);

    pesoEngordar = novoPesoEngordar(peso);
    pesoEmagrecer = novoPesoEmagrecer(peso);

    mostrarMensagem("O novo peso ao engordar é ", pesoEngordar);
    mostrarMensagem("\nO novo peso ao emagrecer é ", pesoEmagrecer);

    return 0;
}