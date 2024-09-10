#include <stdio.h>
#include <stdlib.h> // Para usar a função rand()
#include <string.h>

#define MAX_CLIENTES 100

// Definindo a estrutura para os clientes
struct Clientes {
    int id;
    char nomedoPet[50];
    char racadoPet[50];
    char nomedoDono[100];
    int idadedoPet;
    char numerodoDono[50];
};

// Função para cadastrar um novo cliente (dono do pet)
int Cadastrarcliente() {
    struct Clientes novoCliente; // Declarando o cliente
    FILE *arquivoClientes = fopen("clientes.txt", "a"); // Abrindo o arquivo para gravar; "a" abre o arquivo para adição (append)

    if (arquivoClientes == NULL) { // fopen retorna NULL se o arquivo não puder ser aberto
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Retorna 1 para indicar um problema
    }

    // Ler os dados do cliente (dono do pet)
    printf("Informe o nome do Dono: ");
    scanf("%s", novoCliente.nomedoDono);
    printf("Informe o telefone do Dono: ");
    scanf("%s", novoCliente.numerodoDono);

    // Ler os dados do pet
    printf("Informe o nome do Pet: ");
    scanf("%s", novoCliente.nomedoPet);
    printf("Informe a raca do Pet: ");
    scanf("%s", novoCliente.racadoPet);

    novoCliente.id = rand() % MAX_CLIENTES + 1; // Gerando um ID aleatório para o cliente, entre 1 e MAX_CLIENTES (inclusive)

    // Gravar os dados no arquivo
    fprintf(arquivoClientes, "%d %s %s %s %s\n", novoCliente.id, novoCliente.nomedoDono, novoCliente.numerodoDono, novoCliente.nomedoPet, novoCliente.racadoPet);
    fclose(arquivoClientes); // Fecha o arquivo após a gravação para garantir que os dados sejam salvos

    return 0;
}

// Função para listar os clientes armazenados no arquivo
int listarClientes() {
    FILE *arquivoClientes = fopen("clientes.txt", "r"); // Abrindo o arquivo para leitura

    if (arquivoClientes == NULL) { // fopen retorna NULL se o arquivo não puder ser aberto
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Retorna 1 para indicar um problema
    }

    struct Clientes cliente;
    printf("\n=== Lista de Clientes ===\n");

    // Ler e exibir os dados dos clientes
    while (fscanf(arquivoClientes, "%d %49s %49s %49s %49s", &cliente.id, cliente.nomedoDono, cliente.numerodoDono, cliente.nomedoPet, cliente.racadoPet) == 5) {
        printf("ID: %d\n", cliente.id);
        printf("Nome do Dono: %s\n", cliente.nomedoDono);
        printf("Telefone do Dono: %s\n", cliente.numerodoDono);
        printf("Nome do Pet: %s\n", cliente.nomedoPet);
        printf("Raça do Pet: %s\n\n", cliente.racadoPet);
    }

    if (!feof(arquivoClientes)) {
        printf("Erro ao ler o arquivo.\n");
    } else if (ftell(arquivoClientes) == 0) {
        printf("Nenhum cliente cadastrado.\n");
    }

    fclose(arquivoClientes); // Fecha o arquivo após a leitura

    return 0;
}

// Função para exibir o menu e lidar com as opções
int exibirMenu() {
    int opcao;
    while (1) { // Laço infinito para exibir o menu repetidamente
        printf("\n=== Menu da Clinica Veterinaria ===\n");
        printf("1. Cadastrar Cliente\n");
        printf("2. Listar Clientes\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            Cadastrarcliente();
        } else if (opcao == 2) {
            listarClientes();
        } else if (opcao == 0) {
            printf("Saindo...\n");
            return 0; // Retorna 0 para sair do programa
        } else {
            printf("Opção inválida!\n");
        }
    }
}

int main() {
    return exibirMenu(); // Chama a função para exibir o menu e retorna seu valor
}