#include <stdio.h>

#define NUM_PESSOAS 5

// Calcular a quantidade de pessoas com mais de 50 anos
int calc_qnt_acima_50_anos(int idade[], int n) {
    int acum = 0;
    for (int i = 0; i < n; i++) {
        if (idade[i] > 50) {
            acum++;
        }
    }
    return acum;
}

// Calcular a média das alturas das pessoas com idade entre 10 e 20 anos
float calc_media_altura(int idade[], float altura[], int n) {
    int acum = 0;
    float soma_altura = 0.0;
    for (int i = 0; i < n; i++) {
        if (idade[i] >= 10 && idade[i] <= 20) {
            soma_altura += altura[i];
            acum++;
        }
    }
    if (acum == 0) return 0;
    return soma_altura / acum;
}

// Calcular a porcentagem de pessoas com peso inferior a 40 kg
float calc_porc_peso_menor_40(float peso[], int n) {
    int acum = 0;
    for (int i = 0; i < n; i++) {
        if (peso[i] < 40) {
            acum++;
        }
    }
    return (acum * 100.0) / n;
}

int main() {
    int idade[NUM_PESSOAS];
    float altura[NUM_PESSOAS], peso[NUM_PESSOAS];
    int qnt_acima_50_anos;
    float media_altura_10_e_20_anos, porc_peso_menor_40;

    for (int i = 0; i < NUM_PESSOAS; i++) {
        printf("Insira a idade da %dª pessoa: ", i + 1);
        scanf("%d", &idade[i]);

        printf("Insira a altura da %dª pessoa (em metros): ", i + 1);
        scanf("%f", &altura[i]);

        printf("Insira o peso da %dª pessoa (em kg): ", i + 1);
        scanf("%f", &peso[i]);
    }

    qnt_acima_50_anos = calc_qnt_acima_50_anos(idade, NUM_PESSOAS);
    media_altura_10_e_20_anos = calc_media_altura(idade, altura, NUM_PESSOAS);
    porc_peso_menor_40 = calc_porc_peso_menor_40(peso, NUM_PESSOAS);

    printf("Quantidade de pessoas com mais de 50 anos: %d\n", qnt_acima_50_anos);
    printf("Média das alturas das pessoas com idade entre 10 e 20 anos: %.2f metros\n", media_altura_10_e_20_anos);
    printf("Porcentagem de pessoas com peso inferior a 40 kg: %.2f%%\n", porc_peso_menor_40);

    return 0;
}