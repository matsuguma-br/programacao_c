#include <stdio.h>
#include <iostream>
#include "Retangulo.hpp"
using namespace std;

void mostrarMensagem(string msg, float vlr) {
    cout << msg << vlr << "\n";
}

int main() {
    Retangulo r;
    
    float altura, largura; // não precisa declarar float area, perimetro;
    
    printf("Digite o valor da altura do retângulo: ");
    scanf("%f%*c", &altura);
    printf("Digite o valor da largura do retângulo: ");
    scanf("%f%*c", &largura);

    r.setAltura(altura);
    r.setLargura(largura);

    mostrarMensagem("O valor da área é ", r.calcularArea());
    mostrarMensagem("O valor da largura é ", r.calcularPerimetro());

    return 0;
}