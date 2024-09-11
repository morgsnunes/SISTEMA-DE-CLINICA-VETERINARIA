#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CLIENTES 100

// Estrutura para armazenar informações dos clientes
struct Clientes {
    int id;
    char nomedoDono[100];
    char numerodoDono[50];
    char enderecoDono[150];
};

// Estrutura para armazenar informações dos animais
struct Animal {
    char nome[50];
    int idade;
    char sexo[10];
    char raca[50];
};

// Uso de vetores para armazenar a lista de clientes e seus animais.
struct Clientes listaClientes[MAX_CLIENTES];
struct Animal listaAnimais[MAX_CLIENTES];
int totalClientes = 0;

// Função para cadastrar um novo cliente e seu animal
int Cadastrarcliente() {

    // SE o total de clientes for maior ou igual ao Maximo de cliente imprime uma mensagem, e retorna 1 para indicar um erro.
    if (totalClientes >= MAX_CLIENTES) {
        printf("Limite de clientes atingido!\n");
        return 1;
    }

    // Declaração de variáveis: Declara novas variáveis para armazenar as informações do cliente e do animal.
    struct Clientes novoCliente;
    struct Animal novoAnimal;

    // Ler os dados do cliente (dono)
    printf("Informe o nome do Dono: ");
    scanf(" %[^\n]", novoCliente.nomedoDono);
    printf("Informe o telefone do Dono: ");
    scanf(" %[^\n]", novoCliente.numerodoDono); 
    // esse %[^\n] é útil quando você precisa capturar uma linha completa de texto, inclusive com espaços. 
    printf("Informe o endereco do Dono: ");
    scanf(" %[^\n]", novoCliente.enderecoDono);

    // Ler os dados do animal
    printf("Informe o nome do Pet: ");
    scanf(" %[^\n]", novoAnimal.nome);
    printf("Informe a idade do Pet: ");
    scanf("%d", &novoAnimal.idade);

    getchar(); //  ideal para ler um caractere por vez

    printf("Informe o sexo do Pet: ");
    scanf(" %[^\n]", novoAnimal.sexo);
    printf("Informe a raca do Pet: ");
    scanf(" %[^\n]", novoAnimal.raca);

    
    novoCliente.id = totalClientes + 1; //Atribuindo id do cliente
    // se o total de cliente for 2 vai ser somado +1, o que se dará Id=3, dessa forma mantendo a sequencia certa nos ids

    // Armazenar o cliente e o animal nos arrays;
    // Array = estrutura de dados que armazena uma coleção de elementos do mesmo tipo em uma área contínua de memória.
    listaClientes[totalClientes] = novoCliente;
    listaAnimais[totalClientes] = novoAnimal;
    // Adiciona o cliente e o animal aos arrays listaClientes e listaAnimais

    totalClientes++; // o ++ incrementa +1 ao valor da variavel "totalClientes" e  e imprime uma mensagem de sucesso.

    printf("Cliente e animal cadastrados com sucesso!\n"); // mensagem de sucesso que é dita acima
    return 0;
}

// verifica se tem ou não clientes cadastrados, e se não tiver imprime uma mensagem e retorna 1. (listar os clientes tmb)
int listarClientes() {
    if (totalClientes == 0) {
        printf("Nenhum cliente cadastrado.\n");
        return 1;
    }

    // busca dentro dos arrays (listaClientes e listaAnimais) as informações cadastradas para poder mostrá-las
    for (int i = 0; i < totalClientes; i++) {
        printf("ID: %d\n", listaClientes[i].id);
        printf("Nome do Dono: %s\n", listaClientes[i].nomedoDono);
        printf("Telefone do Dono: %s\n", listaClientes[i].numerodoDono);
        printf("Endereco do Dono: %s\n", listaClientes[i].enderecoDono);
        printf("Nome do Pet: %s\n", listaAnimais[i].nome);
        printf("Idade do Pet: %d\n", listaAnimais[i].idade);
        printf("Sexo do Pet: %s\n", listaAnimais[i].sexo);
        printf("Raca do Pet: %s\n\n", listaAnimais[i].raca); 
        // o [i] é usado para acessar elementos em um array, onde [i] representa a posição do elemento.
    }

    return 0;
}

// Função para exibir o menu e permitir que o usuário escolha uma ação
int exibirMenu() {
    int opcao = 1;
    for (; opcao != 0;) { //  Usa um loop for que continua mostrando o menu até que a opção escolhida seja 0.
        printf("\n=== Clinica Veterinaria ===\n");
        printf("1. Cadastrar Cliente e Animal\n");
        printf("2. Listar Clientes e Animais\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao); //& é utilizado para obter o endereço de uma variável na memória.

        // se escolher opção ** escolheu ** ( a escolha do 0 encerra o loop)
        if (opcao == 1) {
            Cadastrarcliente();
        } else if (opcao == 2) {
            listarClientes();
        } else if (opcao == 0) {
            printf("Saindo...\n");
        } else {
            printf("Opção inválida!\n");
        }
    }
    return 0;
}

// Função principal que inicia o programa

int main() {
    return exibirMenu();
}
