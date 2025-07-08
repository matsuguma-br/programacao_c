// ------------------------------------------------------------
// Nome: Felipe Ribeiro Matsuguma
// Autor: Felipe Ribeiro Matsuguma
// Data: 2025/07/07
// Última atualização: 2025/07/07
// Objetivo: Fazer um programa que preencha um vetor com seis elementos numéricos inteiros.
// Curso: Engenharia de Software
// Versão: 1.0
// Observações:
// - Não há.
// ------------------------------------------------------------

#include <stdio.h>

void filtrar_num_pares(int vetor[], int result[], int *qnt) {
    int i, cont = 0;
    for (i = 0; i < 6; i++) {
        if (vetor[i] % 2 == 0) {
            result[cont] = vetor[i];
            cont++;
        }
    }
    *qnt = cont;
}

void filtrar_num_impares(int vetor[], int result[], int *qnt) {
    int i, cont = 0;

    for (i = 0; i < 6; i++) {
        if (vetor[i] % 2 != 0) {
            result[cont] = vetor[i];
            cont++;
        }
    }
    *qnt = cont;
}

void mostrar_vetor(char *msg, int vetor[], int tamanho) {
    int i;
    printf("%s ", msg);
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void mostrar_mensagem(char *msg, int valor) {
    printf("%s %d\n", msg, valor);
}

int main() {
    int vetor[6], i;
    int vetor_par[6], vetor_impar[6];
    int qnt_par = 0, qnt_impar = 0;

    // Entrada de variáveis
    for (i = 0; i < 6; i++) {
        printf("Insira o valor da posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Processamento
    filtrar_num_pares(vetor, vetor_par, &qnt_par);
    filtrar_num_impares(vetor, vetor_impar, &qnt_impar);

    mostrar_vetor("Números pares:", vetor_par, qnt_par);
    mostrar_mensagem("Quantidade de números pares:", qnt_par);
    mostrar_vetor("Números ímpares:", vetor_impar, qnt_impar);
    mostrar_mensagem("Quantidade de números ímpares:", qnt_impar);

    return 0;
}