#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
} Livro;

// Função para inserir um livro
void inserirLivro(Livro **livros, int *n) {
    // Realoca memória para o próximo livro
    *livros = realloc(*livros, (*n + 1) * sizeof(Livro));
    if (*livros == NULL) {
        printf("Erro de alocação de memória.\n");
        return;
    }

    // Solicita os dados do livro
    getchar();  // Limpar o buffer
    printf("Digite o título do livro: ");
    scanf("%98[^\n]", (*livros)[*n].titulo);
    getchar();  // Limpar o buffer do '\n'

    printf("Digite o autor do livro: ");
    scanf("%98[^\n]", (*livros)[*n].autor);
    getchar();  // Limpar o buffer do '\n'

    printf("Digite o ano de publicação do livro: ");
    scanf("%d", &(*livros)[*n].ano);

    // Incrementa o contador de livros
    (*n)++;

    printf("\nLivro registrado com sucesso!\n");
}

// Função para listar todos os livros
void listarLivros(Livro *livros, int n) {
    if (n == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }

    printf("\nLista de Livros:\n");
    for (int i = 0; i < n; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Título: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano: %d\n\n", livros[i].ano);
    }
}

// Função para pesquisar por título
void pesquisarPorTitulo(Livro *livros, int n) {
    char tituloBusca[100];
    int encontrado = 0;

    getchar();  // Limpar o buffer
    printf("Digite o título para pesquisa: ");
    scanf("%98[^\n]", tituloBusca);

    for (int i = 0; i < n; i++) {
        if (strstr(livros[i].titulo, tituloBusca) != NULL) {  // Verifica se o título contém a busca
            printf("\nLivro encontrado:\n");
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhum livro encontrado com esse título.\n");
    }
}

// Função para pesquisar por autor
void pesquisarPorAutor(Livro *livros, int n) {
    char autorBusca[100];
    int encontrado = 0;

    getchar();  // Limpar o buffer
    printf("Digite o nome do autor para pesquisa: ");
    scanf("%98[^\n]", autorBusca);

    for (int i = 0; i < n; i++) {
        if (strstr(livros[i].autor, autorBusca) != NULL) {  // Verifica se o autor contém a busca
            printf("\nLivro encontrado:\n");
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhum livro encontrado com esse autor.\n");
    }
}

// Função para pesquisar por ano de publicação
void pesquisarPorAno(Livro *livros, int n) {
    int anoBusca;
    int encontrado = 0;

    printf("Digite o ano para pesquisa: ");
    scanf("%d", &anoBusca);

    for (int i = 0; i < n; i++) {
        if (livros[i].ano == anoBusca) {
            printf("\nLivro encontrado:\n");
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhum livro encontrado com esse ano.\n");
    }
}

int main() {
    Livro *livros = NULL;
    int n = 0;
    int escolha;

    while (1) {
        // Menu de opções
        printf("\n1. Inserir livro\n");
        printf("2. Listar livros\n");
        printf("3. Pesquisar por título\n");
        printf("4. Pesquisar por autor\n");
        printf("5. Pesquisar por ano de publicação\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                inserirLivro(&livros, &n);
                break;
            case 2:
                listarLivros(livros, n);
                break;
            case 3:
                pesquisarPorTitulo(livros, n);
                break;
            case 4:
                pesquisarPorAutor(livros, n);
                break;
            case 5:
                pesquisarPorAno(livros, n);
                break;
            case 6:
                // Libera a memória antes de sair
                free(livros);
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida.\n");
        }
    }
}
