#include <ctype.h> // Biblioteca para funções de manipulação de caracteres (toupper)
#include <stdio.h> // Biblioteca para entrada e saída padrão (printf, scanf)

// Função para calcular a média dos salários
float calc_media_salario(float salario[], int n) {
    int i;
    float acum_salario = 0;

    // Soma todos os salários
    for (i = 0; i < n; i++) {
        acum_salario += salario[i];
    }

    // Retorna a média
    return acum_salario / n;
}

// Função para encontrar a menor idade do grupo
int calc_menor_idade(int idade[], int n) {
    int i, menor_idade = idade[0];

    // Compara todas as idades para achar a menor
    for (i = 1; i < n; i++) {
        if (idade[i] < menor_idade) {
            menor_idade = idade[i];
        }
    }

    return menor_idade;
}

// Função para encontrar a maior idade do grupo
int calc_maior_idade(int idade[], int n) {
    int i, maior_idade = idade[0];

    // Compara todas as idades para achar a maior
    for (i = 1; i < n; i++) {
        if (idade[i] > maior_idade) {
            maior_idade = idade[i];
        }
    }

    return maior_idade;
}

// Função para contar mulheres com salário até 200
int calc_qnt_mulheres_salario_200(char sexo[], float salario[], int n) {
    int i, acum = 0;

    // Percorre o vetor e conta as mulheres com salário <= 200
    for (i = 0; i < n; i++) {
        if (sexo[i] == 'F' && salario[i] <= 200.0) {
            acum++;
        }
    }

    return acum;
}

// Função para identificar a pessoa com o menor salário
void calc_idade_sexo_menor_salario(float salario[], int idade[], char sexo[], int n, float *menor_salario,
                                   int *idade_menor_salario, char *sexo_menor_salario) {
    int i;

    // Inicializa com os dados da primeira pessoa
    *menor_salario = salario[0];
    *idade_menor_salario = idade[0];
    *sexo_menor_salario = sexo[0];

    // Percorre o vetor para encontrar o menor salário
    for (i = 1; i < n; i++) {
        if (salario[i] < *menor_salario) {
            *menor_salario = salario[i];
            *idade_menor_salario = idade[i];
            *sexo_menor_salario = sexo[i];
        }
    }
}

int main() {
    // Declaração dos vetores e variáveis de controle
    int idade[100];     // Vetor para armazenar as idades
    char sexo[100];     // Vetor para armazenar os sexos
    float salario[100]; // Vetor para armazenar os salários

    // Variáveis para os resultados
    int maior_idade, menor_idade;
    int qnt_mulheres_salario_200;
    int idade_menor_salario;
    char sexo_menor_salario;
    float media_salario, menor_salario;

    int i, acum = 0; // i = índice do laço; acum = número de voluntários

    // Entrada de dados
    for (i = 0; i < 100; i++) {
        // Lê a idade
        printf("Insira a idade do %d. voluntário: ", i + 1);
        scanf("%d%*c", &idade[i]);

        // Se a idade for negativa, termina a entrada
        if (idade[i] < 0) {
            break;
        }

        // Lê e valida o sexo (aceita só M ou F)
        do {
            printf("Insira o sexo do %d. voluntário (M/F): ", i + 1);
            scanf("%c%*c", &sexo[i]);
            sexo[i] = toupper(sexo[i]); // Converte para maiúsculo
        } while (sexo[i] != 'M' && sexo[i] != 'F');

        // Lê o salário
        printf("Insira o salário do %d. voluntário: ", i + 1);
        scanf("%f%*c", &salario[i]);

        // Incrementa o número de voluntários
        acum++;
    }

    // Se houver voluntários, faz os cálculos
    if (acum > 0) {
        media_salario = calc_media_salario(salario, acum);
        menor_idade = calc_menor_idade(idade, acum);
        maior_idade = calc_maior_idade(idade, acum);
        qnt_mulheres_salario_200 = calc_qnt_mulheres_salario_200(sexo, salario, acum);
        calc_idade_sexo_menor_salario(salario, idade, sexo, acum, &menor_salario, &idade_menor_salario,
                                      &sexo_menor_salario);

        // Exibe os resultados
        printf("\nMédia dos salários: %.2f\n", media_salario);
        printf("Maior idade: %d\n", maior_idade);
        printf("Menor idade: %d\n", menor_idade);
        printf("Quantidade de mulheres com salário até 200: %d\n", qnt_mulheres_salario_200);
        printf("Pessoa com menor salário: %d anos, sexo %c, salário %.2f\n", idade_menor_salario, sexo_menor_salario,
               menor_salario);

    } else {
        // Caso nenhum voluntário tenha sido registrado
        printf("Não houve voluntários.\n");
    }

    return 0;
}