#include <stdio.h>
#include <string.h>

void identif_procedencia(int cod, char procedencia[]) {
    if (cod > 0 && cod <= 30) {
        switch (cod) {
            case 1:
                strcpy(procedencia, "Sul");
                break;
            case 2:
                strcpy(procedencia, "Norte");
                break;
            case 3:
                strcpy(procedencia, "Leste");
                break;
            case 4:
                strcpy(procedencia, "Oeste");
                break;
        }

        if (cod == 5 || cod == 6) {
            strcpy(procedencia, "Nordeste");
        } else if (cod >= 7 && cod <= 9) {
            strcpy(procedencia, "Sudeste");
        } else if (cod >= 10 && cod <= 20) {
            strcpy(procedencia, "Centro-Oeste");
        } else if (cod > 20 && cod <= 30) {
            strcpy(procedencia, "Nordeste");
        }
    } else {
        strcpy(procedencia, "Nao identificada");
    }
}

int main() {
    float preco;
    int cod_origem;
    char procedencia[20];

    printf("Insira o preço: ");
    scanf("%f%*c", &preco);

    printf("Insira o código de origem: ");
    scanf("%d%*c", &cod_origem);

    identif_procedencia(cod_origem, procedencia);

    printf("Procedência: %s\n", procedencia);

    return 0;
}