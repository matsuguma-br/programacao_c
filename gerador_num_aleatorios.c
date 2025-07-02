#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Ordena o array em ordem crescente (bubble sort)
void ordenar_array(int arr[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Mostra o array
void mostrar_array(int arr[], int tamanho) {
    int i;
    printf("\nNúmeros em ordem crescente:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Número %d: %d\n", i + 1, arr[i]);
    }
}

// Verifica se o número já existe no array
int existe_no_array(int arr[], int tamanho, int numero) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (arr[i] == numero) {
            return 1; // Já existe
        }
    }
    return 0; // Não existe
}

int main() {
    int min, max, qnt;

    printf("Informe o valor mínimo: ");
    scanf("%d%*c", &min);

    printf("Informe o valor máximo: ");
    scanf("%d%*c", &max);

    printf("Informe a quantidade a ser sorteada: ");
    scanf("%d%*c", &qnt);

    // Verifica se é possível sortear sem repetição
    if (qnt > (max - min + 1)) {
        printf("Erro: a quantidade solicitada excede o intervalo possível.\n");
        return 1;
    }

    srand((unsigned) time(NULL));

    int num_sorteados[100];
    int sorteados = 0;

    while (sorteados < qnt) {
        int numero = (rand() % (max - min + 1)) + min;

        if (!existe_no_array(num_sorteados, sorteados, numero)) {
            num_sorteados[sorteados] = numero;
            sorteados++;
        }
    }

    ordenar_array(num_sorteados, qnt);
    mostrar_array(num_sorteados, qnt);

    return 0;
}