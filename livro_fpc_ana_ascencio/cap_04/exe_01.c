// Receber quatro notas de alunos
// Calcular média
// Mostrar média
// Mostrar mensagem 'aprovado' ou 'reprovado
// Aprovação acima de 7.0

#include <stdio.h>
#include <string.h>

float calcular_media(float nota_a, float nota_b, float nota_c, float nota_d) {
    return (nota_a + nota_b + nota_c + nota_d) / 4.0;
}

void definir_status(float media, char status[]) {
    if(media > 7.0) strcpy(status, "Aprovado");
    else strcpy(status, "Reprovado");
}

int main() {
    float nota_a, nota_b, nota_c, nota_d, media;
    char status[10];

    printf("Insira a nota A: ");
    scanf("%f%*c", &nota_a);
    
    printf("Insira a nota B: ");
    scanf("%f%*c", &nota_b);
    
    printf("Insira a nota C: ");
    scanf("%f%*c", &nota_c);

    printf("Insira a nota D: ");
    scanf("%f%*c", &nota_d);

    media = calcular_media(nota_a, nota_b, nota_c, nota_d);
    
    definir_status(media, status);

    printf("Média: %5.2f", media);
    printf("\nStatus: %s", status);

    return 0;
}