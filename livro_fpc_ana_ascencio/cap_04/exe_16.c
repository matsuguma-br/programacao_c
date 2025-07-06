#include <stdio.h>

float calc_desconto(float preco) {
    if(preco > 100) {
        return preco - (preco * 0.85);
    }
    else if(preco > 30) {
        return preco - (preco * 0.9);
    }
    else {
        return 0.0;
    }
}

float calc_preco_novo(float preco) {
    float desconto;
    
    desconto = calc_desconto(preco);

    return preco - desconto;
}

int main() {
    float preco_atual, valor_desconto, preco_novo;

    printf("Insira o preco atual: ");
    scanf("%f%*c", &preco_atual);

    valor_desconto = calc_desconto(preco_atual);
    preco_novo = calc_preco_novo(preco_atual);

    printf("Valor desconto: %5.2f", valor_desconto);
    printf("\nPreço novo: %5.2f", preco_novo);

    return 0;
}