// Receber sexo e resposta (S ou N)
// 10 pessoas

#include <stdio.h>
#include <ctype.h>

// Número de pessoas que responderam sim
int calc_total_sim(char resposta[]) {
    int acum = 0;
    for (int i = 0; i < 10; i++) {
        if (resposta[i] == 'S') {
            acum++;
        }
    }
    return acum;
}

// Número de pessoas que responderam não
int calc_total_nao(char resposta[]) {
    int acum = 0;
    for (int i = 0; i < 10; i++) {
        if (resposta[i] == 'N') {
            acum++;
        }
    }
    return acum;
}

// Número de mulheres que responderam sim
int calc_total_mulheres_e_sim(char sexo[], char resposta[]) {
    int acum = 0;
    for (int i = 0; i < 10; i++) {
        if (sexo[i] == 'F' && resposta[i] == 'S') {
            acum++;
        }
    }
    return acum;
}

// Porcentagem de homens que responderam não, entre todos os homens analisados
float calc_porc_homens_nao(char sexo[], char resposta[]) {
    int cont_homem = 0, acum = 0;

    for (int i = 0; i < 10; i++) {
        if (sexo[i] == 'M') {
            cont_homem++;
            if (resposta[i] == 'N') {
                acum++;
            }
        }
    }

    if (cont_homem == 0) return 0;
    return (acum * 100.0) / cont_homem;
}

int main() {
    char sexo[10], resposta[10];
    int i;

    // Entrada de dados
    for (i = 0; i < 10; i++) {
        printf("Insira o sexo do %dº entrevistado (M/F): ", i + 1);
        scanf(" %c", &sexo[i]); // espaço ignora enter anterior

        printf("Insira a resposta do %dº entrevistado (S/N): ", i + 1);
        scanf(" %c", &resposta[i]);
    }

    // Converter para letras maiúsculas
    for (i = 0; i < 10; i++) {
        sexo[i] = toupper(sexo[i]);
        resposta[i] = toupper(resposta[i]);
    }

    int total_sim = calc_total_sim(resposta);
    int total_nao = calc_total_nao(resposta);
    int total_mulheres_e_sim = calc_total_mulheres_e_sim(sexo, resposta);
    float porc_homens_nao = calc_porc_homens_nao(sexo, resposta);

    // Exibir resultados
    printf("Número de pessoas que responderam sim: %d\n", total_sim);
    printf("Número de pessoas que responderam não: %d\n", total_nao);
    printf("Número de mulheres que responderam sim: %d\n", total_mulheres_e_sim);
    printf("Porcentagem de homens que responderam não, entre todos os homens analisados: %.2f%%\n", porc_homens_nao);

    return 0;
}