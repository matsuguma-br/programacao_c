#include <stdio.h>

float calcularArea(float a, float b) {
    return a * b;
}

float calcularPerimetro(float a, float b) {
    return 2 * a + 2 * b;
}

void mostrarMensagem(char *msg, float vlr) {
    printf("%s %5.2f", msg, vlr);
}

int main() {
    float altura, largura, area, perimetro;
    
    printf("Informe o valor da altura do retângulo: ");
    scanf("%f%*c", &altura);
    printf("Informe o valor da largura do retângulo: ");
    scanf("%f%*c", &largura);

    area = calcularArea(altura, largura);
    perimetro = calcularPerimetro(altura, largura);

    mostrarMensagem("O valor da área é ", area);
    mostrarMensagem("O valor do perímetro é ", perimetro);

    return 0;
}