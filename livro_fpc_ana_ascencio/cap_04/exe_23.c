// Receber:
// Código do produto
// Quantidade a ser comprada

#include <stdio.h>

// Estipular preço unitário
float estipular_preco(int cod) {
    if(cod <= 10) {
        return 10.00;
    }
    else if(cod <= 20) {
        return 15.00;
    }
    else if(cod <= 30) {
        return 20.00;
    }
    else {
        return 30.00;
    }
}

// Calcular preço total da nota
float calc_total_nota(float preco, int qnt) {
    return preco * qnt;
}

// Calcular desconto da nota
float calc_desconto(float total) {
    if(total < 250.0) {
        return total * 0.05;
    }
    else if(total <= 500.0) {
        return total * 0.10;
    }
    else {
        return total * 0.15;
    }
}

// Calcular preço final da nota
float calc_preco_final(float total) {
    float valor_desconto;
    valor_desconto = calc_desconto(total);
    return total - valor_desconto;
}

// Mostrar mensagem
void mostrarMensagem(char *msg, float vlr) {
    printf("\n%s %5.2f", msg, vlr);
}

int main() {
    int cod_produto, qnt;
    float preco_unitario, total_nota, valor_desconto, preco_final;

    printf("Insira o código do produto: ");
    scanf("%d%*c", &cod_produto);

    printf("Insira a quantidade a ser comprada: ");
    scanf("%d%*c", &qnt);

    if(cod_produto > 0 && cod_produto <= 40) {
        preco_unitario = estipular_preco(cod_produto);
        total_nota = calc_total_nota(preco_unitario, qnt);
        valor_desconto = calc_desconto(total_nota);
        preco_final = calc_preco_final(total_nota);
    
        mostrarMensagem("Preço unitário: ", preco_unitario);
        mostrarMensagem("Preço total da nota: ", total_nota);
        mostrarMensagem("Valor do desconto: ", valor_desconto);
        mostrarMensagem("Preço final da nota: ", preco_final);
    }
    else {
        printf("Código inválido.");
    }
    
    return 0;
}