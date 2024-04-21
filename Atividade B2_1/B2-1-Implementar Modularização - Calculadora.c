#include <stdio.h>

int op1, op2, resultado, operacao;

void funcSoma() {
    resultado = op1 + op2;
}

void funcSub() {
    resultado = op1 - op2;
}

void funcDiv() {
    resultado = op1 / op2;
}

void funcMult() {
    resultado = op1 * op2;
}

int main() {
    char resposta;

    do {
        printf("Insira os valores da operação...\n\n-> operando: ");
        scanf("%i", &op1);

        printf("-> operando: ");
        scanf("%i", &op2);

        printf("\nAgora selecione a operação:\n\n| (1) = +\n| (2) = -\n| (3) = /\n| (4) = *\n\nDigite: ");
        scanf("%i", &operacao);

        switch (operacao) {
            case 1:
                funcSoma();
                printf("\nResultado da soma: %i", resultado);
                break;
            case 2:
                funcSub();
                printf("\nResultado da subtração: %i", resultado);
                break;
            case 3:
                while (op2 == 0) {
                    printf("\nO divisor não pode ser 0\nEscolha outro número divisor para efetuar a operação: ");
                    scanf("%i", &op2);
                }
                funcDiv();
                printf("\nResultado da divisão: %i", resultado);
                break;
            case 4:
                funcMult();
                printf("\nResultado da multiplicação: %i", resultado);
                break;
            default:
                printf("\nOperação inválida!\n");
                break;
        }

        printf("\n\nDeseja fazer um novo calculo? (S/N): ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

    printf("Fim das operações\n");

    return 0;
}
