#include <stdio.h>

// Calcular e mostrar a tabuada desse número até 10
void mostrar_tabuada(int num) {
    int i;

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d%*c", &num);

    mostrar_tabuada(num);

    return 0;
}