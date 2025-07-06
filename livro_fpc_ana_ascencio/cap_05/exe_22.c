#include <stdio.h>

// Função que calcula a média das alturas das pessoas com mais de 50 anos
float calc_media_altura(int idade[], float altura[], int n) {
    int i, qnt_pessoas = 0;  // Conta as pessoas com mais de 50 anos
    float acum_altura = 0.0; // Soma das alturas dessas pessoas

    // Percorre os dados para acumular alturas e contar as pessoas
    for (i = 0; i < n; i++) {
        if (idade[i] > 50) {
            acum_altura += altura[i];
            qnt_pessoas++;
        }
    }

    // Retorna a média se houver pessoas com mais de 50 anos
    if (qnt_pessoas > 0)
        return acum_altura / qnt_pessoas;
    else
        return 0.0; // Retorna 0 se ninguém tiver mais de 50 anos
}

int main() {
    int idade[100];     // Vetor para armazenar as idades
    float altura[100];  // Vetor para armazenar as alturas
    int i, acum = 0;    // i = índice do laço; acum = quantidade de pessoas registradas
    float media_altura; // Armazena a média calculada

    // Entrada de dados
    for (i = 0; i < 100; i++) {
        printf("Insira a idade da %d. pessoa: ", i + 1);
        scanf("%d%*c", &idade[i]);

        if (idade[i] <= 0)
            break; // Idade negativa ou zero finaliza entrada
                   // Garante que a altura seja positiva
        do {
            printf("Insira a altura da %d. pessoa: ", i + 1);
            scanf("%f%*c", &altura[i]);
        } while (altura[i] <= 0.0);

        acum++; // Conta mais uma pessoa registrada
    }

    // Se houve entrada de pessoas
    if (acum != 0) {
        media_altura = calc_media_altura(idade, altura, acum);

        if (media_altura > 0.0) {
            printf("Média das alturas daquelas com mais de 50 anos: %.2f\n", media_altura);
        } else {
            printf("Não há pessoas com mais de 50 anos.\n");
        }
    } else {
        printf("Não há pessoas.\n");
    }

    return 0;
}