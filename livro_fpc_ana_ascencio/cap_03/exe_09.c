#include <stdio.h>

float calcularAreaTrapezio(int baseMenor, int baseMaior, int altura) {
    return ((baseMenor + baseMaior) * altura) / 2;
}

void mostrarMensagem(char *msg, float vlr) {
    printf("%s %5.2f", msg, vlr);
}

int main() {
    int baseMenor, baseMaior, altura;
    float areaTrapezio;

    printf("Insira o valor da base menor: ");
    scanf("%d%*c", &baseMenor);
    printf("Insira o valor da base maior: ");
    scanf("%d%*c", &baseMaior);
    printf("Insira o valor da altura: ");
    scanf("%d%*c", &altura);

    areaTrapezio = calcularAreaTrapezio(baseMenor, baseMaior, altura);

    mostrarMensagem("A área do trapézio é ", areaTrapezio);
    
    return 0;
}