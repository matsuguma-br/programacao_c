// ------------------------------------------------------------
// Nome: Felipe Ribeiro Matsuguma
// Autor: Felipe Ribeiro Matsuguma
// Data: 2025/07/06
// Última atualização: 2025/07/06
// Objetivo: Calcular novo salário, férias e décimo terceiro
//           com base no salário e meses trabalhados de um funcionário
// Curso: Engenharia de Software
// Versão: 1.0
// Observações:
// - O programa apresenta um menu e trata opção inválida
// - Não há validação do salário (pode ser incluída futuramente)
// ------------------------------------------------------------

#include <stdio.h>

// Função para exibir o menu de opções ao usuário
void mostrarMenu() {
    printf("Menu de opções:\n");
    printf("1. Novo salário\n");
    printf("2. Férias\n");
    printf("3. Décimo terceiro\n");
    printf("4. Sair\n");
    printf("Digite a opção desejada: ");
}

// Calcula o novo salário com base no salário atual
float calc_novo_salario(float salario_funcionario) {
    if (salario_funcionario < 210.0) {
        return salario_funcionario * 1.15; // Aumento de 15% para salários abaixo de 210
    } else if (salario_funcionario <= 600) {
        return salario_funcionario * 1.10; // Aumento de 10% para salários até 600
    } else {
        return salario_funcionario * 1.05; // Aumento de 5% para salários acima de 600
    }
}

// Calcula o valor das férias (salário + 1/3 do salário)
float calc_valor_ferias(float salario_funcionario) {
    return salario_funcionario + (salario_funcionario / 3);
}

// Calcula o décimo terceiro proporcional aos meses trabalhados
float calc_decimo_terceiro(float salario_funcionario, int num_meses_trabalhados) {
    return (salario_funcionario * num_meses_trabalhados) / 12;
}

int main() {
    // Declaração das variáveis
    int opcao = 0;             // Opção escolhida no menu
    float salario_funcionario; // Salário informado pelo usuário
    int num_meses_trabalhados; // Meses trabalhados (para décimo terceiro)
    float novo_salario;        // Armazena o novo salário calculado
    float valor_ferias;        // Armazena o valor das férias calculado
    float decimo_terceiro;     // Armazena o valor do décimo terceiro calculado

    // Laço principal do menu
    do {
        mostrarMenu();       // Exibe o menu ao usuário
        scanf("%d", &opcao); // Lê a opção escolhida

        switch (opcao) {
        case 1:
            // Novo salário
            printf("Insira o valor do salário: ");
            scanf("%f%*c", &salario_funcionario); // Lê o salário

            novo_salario = calc_novo_salario(salario_funcionario); // Calcula o novo salário

            printf("Novo salário do funcionário: %.2f\n", novo_salario);
            break;

        case 2:
            // Valor das férias
            printf("Insira o valor do salário: ");
            scanf("%f%*c", &salario_funcionario); // Lê o salário

            valor_ferias = calc_valor_ferias(salario_funcionario); // Calcula o valor das férias

            printf("Valor das férias do funcionário: %.2f\n", valor_ferias);
            break;

        case 3:
            // Décimo terceiro
            printf("Insira o valor do salário: ");
            scanf("%f%*c", &salario_funcionario); // Lê o salário

            // Garante que o número de meses seja entre 1 e 12
            do {
                printf("Insira a quantidade de meses trabalhados: ");
                scanf("%d%*c", &num_meses_trabalhados);
            } while (num_meses_trabalhados < 1 || num_meses_trabalhados > 12);

            decimo_terceiro = calc_decimo_terceiro(salario_funcionario, num_meses_trabalhados);

            printf("Valor do décimo terceiro do funcionário: %.2f\n", decimo_terceiro);
            break;

        case 4:
            // Opção de sair
            printf("Fim do programa.\n");
            break;

        default:
            // Tratamento de opção inválida
            printf("Opção inválida! Tente novamente.\n");
            break;
        }

    } while (opcao != 4); // O laço continua até o usuário escolher sair

    return 0;
}