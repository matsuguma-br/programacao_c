// ------------------------------------------------------------
// Nome: Felipe Ribeiro Matsuguma
// Autor: Felipe Ribeiro Matsuguma
// Data: 2025/07/07
// Última atualização: 2025/07/07
// Objetivo: Mostrar o número das matrículas que aparecem nos dois vetores
// Curso: Engenharia de Software
// Versão: 1.0
// Observações:
// - Não há.
// ------------------------------------------------------------

#include <stdio.h>

void inscricao_curso(int matricula[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("Insira a matrícula do %d aluno: ", i + 1);
        scanf("%d", &matricula[i]);
    }
}

int main() {
    int curso_logica[15], curso_programacao[10];

    inscricao_curso(curso_logica, 15);
    inscricao_curso(curso_programacao, 10);

    // Continuar a partir daqui
}