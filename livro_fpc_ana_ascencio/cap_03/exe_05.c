#include <stdio.h>

float calcularNovoPreco(float preco, float desconto) {
    return preco * (1.00 - (desconto / 100.00)); 
}

void mostrarMensagem(char *msg, float vlr) {
    printf("%s %5.2f", msg, vlr);
}

int main() {
    float preco, desconto, novoPreco;

    printf("Insira o preco do produto: ");
    scanf("%f%*c", &preco);
    printf("Insira o desconto do produto (%%): ");
    scanf("%f%*c", &desconto);

    novoPreco = calcularNovoPreco(preco, desconto);

    mostrarMensagem("O novo preço é ", novoPreco);

    return 0;
}