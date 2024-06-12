#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    double nota;
} Aluno;

Aluno incluirAluno(char nome[], double nota) {
    Aluno aluno;
    strcpy(aluno.nome, nome);
    aluno.nota = nota;
    return aluno;
}

void ordenarAlunos(Aluno alunos[], int quantidade) {
    for (int i = 0; i < quantidade - 1; i++) {
        for (int j = 0; j < quantidade - i - 1; j++) {
            if (strcmp(alunos[j].nome, alunos[j + 1].nome) > 0) {
                Aluno temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

void imprimirLista(Aluno alunos[], int quantidade) {
    printf("\nNOME\t\tNOTA\tSITUAÇÃO\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%-15s\t%.2f\t%s\n", alunos[i].nome, alunos[i].nota, (alunos[i].nota >= 6.0) ? "APROVADO" : "REPROVADO");
    }
}

int main() {
    int opcao, quantidade = 0;
    Aluno alunos[50];

    printf("LISTA DE ALUNOS\n");

    do {
        printf("\nOpções:\n");
        printf("1. Incluir Aluno\n");
        printf("2. Listar Alunos\n");
        printf("3. Sair\n");
        printf("Qual opção deseja? ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (quantidade < 50) {
                char nome[50];
                double nota;

                printf("Digite o nome do aluno: ");
                scanf(" %[^\n]s", nome);

                printf("Digite a nota do aluno: ");
                scanf("%lf", &nota);

                alunos[quantidade] = incluirAluno(nome, nota);
                quantidade++;
                printf("Cadastro realizado com sucesso!\n");
            } else {
                printf("Lista de alunos cheia!\n");
            }
        } else if (opcao == 2) {
            ordenarAlunos(alunos, quantidade);
            imprimirLista(alunos, quantidade);
        }
    } while (opcao != 3);

    printf("Programa encerrado.\n");
    return 0;
}