#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar informações do produto
typedef struct {
    int id;
    char nome[50];
    char descricao[100];
    float preco;
    int quantidade;
} Produto;

// Funções do programa
void inserirProduto(Produto **produtos, int *numProdutos);
void simularCompra(Produto *produtos, int numProdutos);
void listarProdutos(Produto *produtos, int numProdutos);
void ordenarProdutos(Produto *produtos, int numProdutos);
Produto* buscarProduto(Produto *produtos, int numProdutos, int id);

int main() {
    Produto *produtos = NULL;
    int numProdutos = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir Produto\n");
        printf("2. Simular Compra\n");
        printf("3. Listar Produtos\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                inserirProduto(&produtos, &numProdutos);
                break;
            case 2:
                simularCompra(produtos, numProdutos);
                break;
            case 3:
                listarProdutos(produtos, numProdutos);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 4);

    // Liberar a memória alocada
    free(produtos);
    return 0;
}

void inserirProduto(Produto **produtos, int *numProdutos) {
    *produtos = realloc(*produtos, (*numProdutos + 1) * sizeof(Produto));
    if (*produtos == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    Produto *novoProduto = &(*produtos)[*numProdutos];

    printf("Inserir novo produto:\n");
    novoProduto->id = *numProdutos + 1;  // Gerar ID automaticamente
    printf("Nome do Produto: ");
    scanf(" %[^\n]", novoProduto->nome);
    printf("Descricao do Produto: ");
    scanf(" %[^\n]", novoProduto->descricao);
    printf("Preco Unitario: ");
    scanf("%f", &novoProduto->preco);
    printf("Quantidade em Estoque: ");
    scanf("%d", &novoProduto->quantidade);

    (*numProdutos)++;
}

void simularCompra(Produto *produtos, int numProdutos) {
    int id, quantidadeDesejada;
    printf("Inserir ID do produto: ");
    scanf("%d", &id);

    Produto *produto = buscarProduto(produtos, numProdutos, id);
    if (produto == NULL) {
        printf("Produto inexistente.\n");
        return;
    }

    printf("Quantidade desejada: ");
    scanf("%d", &quantidadeDesejada);

    if (quantidadeDesejada > produto->quantidade) {
        printf("Estoque insuficiente. Disponivel: %d\n", produto->quantidade);
    } else {
        produto->quantidade -= quantidadeDesejada;
        printf("Compra realizada com sucesso.\n");
        printf("Total: R$ %.2f\n", quantidadeDesejada * produto->preco);
    }
}

void listarProdutos(Produto *produtos, int numProdutos) {
    ordenarProdutos(produtos, numProdutos);

    printf("\nLista de Produtos:\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("ID: %d\n", produtos[i].id);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Descricao: %s\n", produtos[i].descricao);
        printf("Preco: R$ %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n\n", produtos[i].quantidade);
    }
}

void ordenarProdutos(Produto *produtos, int numProdutos) {
    Produto temp;
    for (int i = 0; i < numProdutos - 1; i++) {
        for (int j = 0; j < numProdutos - 1 - i; j++) {
            if (strcmp(produtos[j].nome, produtos[j + 1].nome) > 0) {
                temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }
}

Produto* buscarProduto(Produto *produtos, int numProdutos, int id) {
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].id == id) {
            return &produtos[i];
        }
    }
    return NULL;
}
