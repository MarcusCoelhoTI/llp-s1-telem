#include <stdio.h>
#include <string.h>

// Estrutura de dados para armazenar os produtos
typedef struct
{
    int codigo;
    char descricao[50];
    float valorUnitario;
    int quantidadeEstoque;
} Produto;

// Array de structs para armazenar os produtos
Produto produtos[100];

// Função para cadastrar produto
int numProdutos = 0; // Variável para armazenar o índice atual do array

void cadastrarProduto()
{
    printf("\nCadastrar Produto\n");
    printf("Código do produto: ");
    scanf(" %d", &produtos[numProdutos].codigo);
    getchar(); // Consume o caractere de newline
    printf("Descrição do produto: ");
    fgets(produtos[numProdutos].descricao, sizeof(produtos[numProdutos].descricao), stdin);
    produtos[numProdutos].descricao[strcspn(produtos[numProdutos].descricao, "\n")] = 0; // Remove o caractere de newline
    printf("Valor unitário do produto: ");
    scanf(" %f", &produtos[numProdutos].valorUnitario);
    getchar(); // Consume o caractere de newline
    printf("Quantidade do estoque: ");
    scanf(" %d", &produtos[numProdutos].quantidadeEstoque);
    numProdutos++; // Incrementa o índice do array
    printf("Produto cadastrado com sucesso!\n");
    printf("Pressione enter para continuar...\n");
    getchar();
}

// Função para consultar produto para alteração
void consultarProdutoAlteracao()
{
    printf("\nConsultar Produto para Alteração\n");
    printf("Codigo: ");
    int codigo;
    scanf("%d", &codigo);
    for (int i = 0; i < 100; i++)
    {
        if (produtos[i].codigo == codigo)
        {
            printf("\nDescricao: %s\n", produtos[i].descricao);
            printf("Valor Unitario: %.2f\n", produtos[i].valorUnitario);
            printf("Quantidade Estoque: %d\n", produtos[i].quantidadeEstoque);
            printf("Deseja alterar? (s/n): ");
            char resposta;
            scanf(" %c", &resposta);
            if (resposta == 's')
            {
                printf("\nNova descricao: ");
                scanf("%s", produtos[i].descricao);
                printf("Novo valor unitario: ");
                scanf("%f", &produtos[i].valorUnitario);
                printf("Nova quantidade estoque: ");
                scanf("%d", &produtos[i].quantidadeEstoque);
            }
            break;
        }
    }
    printf("Pressione enter para continuar...\n");
    getchar(); // Pausa para que o usuário possa ver o resultado
}

// Função para listar todos os produtos
void listarProdutos()
{
    printf("\nListar todos os produtos\n");
    for (int i = 0; i < 100; i++)
    {
        if (produtos[i].codigo != 0)
        {
            printf("\nCodigo: %d\n", produtos[i].codigo);
            printf("Descricao: %s\n", produtos[i].descricao);
            printf("Valor Unitario: %.2f\n", produtos[i].valorUnitario);
            printf("Quantidade Estoque: %d\n", produtos[i].quantidadeEstoque);
            printf("Valor do Estoque: %.2f\n", produtos[i].valorUnitario * produtos[i].quantidadeEstoque);
        }
    }
    getchar(); // Pausa para que o usuário possa ver o resultado
}

// Função para excluir produto
void excluirProduto()
{
    printf("\nExcluir Produto\n");
    printf("Codigo do produto a excluir: ");
    int codigo;
    scanf("%d", &codigo);
    for (int i = 0; i < 100; i++)
    {
        if (produtos[i].codigo == codigo)
        {
            printf("Produto encontrado!\n");
            printf("Deseja excluir? (s/n): ");
            char resposta;
            scanf(" %c", &resposta);
            if (resposta == 's')
            {
                produtos[i].codigo = 0;
                produtos[i].descricao[0] = '\0';
                produtos[i].valorUnitario = 0.0;
                produtos[i].quantidadeEstoque = 0;
                printf("Produto excluido com sucesso!\n");
            }
            break;
        }
    }
    getchar(); // Pausa para que o usuário possa ver o resultado
}

int main()
{
    int opcao;
    do
    {
        printf("\nMenu\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Consultar Produto para Alteração\n");
        printf("3. Listar todos os produtos\n");
        printf("4. Excluir Produto\n");
        printf("5. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            cadastrarProduto();
            break;
        case 2:
            consultarProdutoAlteracao();
            break;
        case 3:
            listarProdutos();
            break;
        case 4:
            excluirProduto();
            break;
        case 5:
            printf("Saindo...\n");
            break;
        }
    } while (opcao != 5);
    return 0;
}