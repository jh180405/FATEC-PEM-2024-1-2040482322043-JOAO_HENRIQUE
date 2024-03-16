#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char palavra[]) {
    int tamanho = strlen(palavra);
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim])
            return 0;
        inicio++;
        fim--;
    }
    return 1;
}

int main() {
    char frase[100];
    char palavraAtual[50];
    int comeco = 0;
    int final;
    int ehPal = 1;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    final = strlen(frase) - 2;

    while (comeco < final) {
        // Ignorar espaços no início
        if (frase[comeco] == ' ') {
            comeco++;
            continue;
        }

        // Ignorar espaços no final
        if (frase[final] == ' ' || frase[final] == '\n') {
            final--;
            continue;
        }

        // Encontrar a próxima palavra
        int palavraInicio = comeco;
        while (frase[comeco] != ' ' && comeco < final)
            comeco++;

        int palavraFim = comeco - 1;

        // Obter a palavra atual
        strncpy(palavraAtual, &frase[palavraInicio], palavraFim - palavraInicio + 1);
        palavraAtual[palavraFim - palavraInicio + 1] = '\0';

        // Verificar se a palavra é um palíndromo
        if (!ehPalindromo(palavraAtual)) {
            ehPal = 0;
            break;
        }

        comeco++;
    }

    if (ehPal == 1) {
        printf("A frase é um palíndromo.\n");
    } else {
        printf("A frase não é um palíndromo.\n");
    }

    return 0;
}
