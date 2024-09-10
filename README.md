# SISTEMA DE CLÍNICA VETERINÁRIA 


Este projeto é um simples sistema de cadastro e listagem de clientes para uma clínica veterinária, desenvolvido em C. 
O sistema permite ao usuário cadastrar clientes e seus pets, e listar todos os clientes armazenados em um arquivo de texto. 
O programa utiliza um menu interativo para escolher as operações desejadas.

Funcionalidades:
Cadastrar Cliente: Permite ao usuário inserir informações sobre o dono do pet e o pet, incluindo um ID aleatório.
Listar Clientes: Exibe todos os clientes cadastrados no arquivo de texto, mostrando informações como ID, nome do dono, telefone do dono, nome do pet e raça do pet.

Estrutura do Código:
main: Função principal que chama o menu.
exibirMenu: Exibe um menu interativo que permite ao usuário escolher entre cadastrar um cliente, listar clientes ou sair do programa.
Cadastrarcliente: Função que coleta dados do cliente e do pet e os grava em um arquivo de texto.
listarClientes: Função que lê o arquivo de texto e exibe os dados dos clientes.

# INSTRUÇÕES DE FUNCIONALIDADE 

Ao executar o programa, você verá um menu como este:

=== Menu da Clinica Veterinaria ===
1. Cadastrar Cliente
2. Listar Clientes
0. Sair
Escolha uma opcao: 

Na opção "Cadastrar Cliente"
Você será solicitado a inserir as seguintes informações:

Nome do Dono
Telefone do Dono
Nome do Pet
Raça do Pet

Na função "listar clientes" serão mostrados todos os clientes cadastrados
assim como o exemplo a seguir:
ID: 1   // O ID do cliente é gerado aleatoriamente entre 1 e 100. (não consegui colocar em sequencia 1.2.3...)
Nome do Dono: João
Telefone do Dono: 123456789
Nome do Pet: Rex
Raça do Pet: Labrador
OBS: Os dados dos clientes são armazenados no arquivo clientes.txt.

se a opção "0" for digitada o codigo encerrará. 
