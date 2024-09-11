# SISTEMA DE CLÍNICA VETERINÁRIA


# Sistema de Cadastro de Clientes e Animais
# Funcionalidades;
# 1. Cadastrar Cliente e Animal:
   - Cadastra um cliente e seu animal de estimação com informações como nome, telefone, endereço do dono e detalhes do animal.
# 2. Listar Clientes e Animais:
   - Exibe todos os clientes e seus respectivos animais cadastrados.
# 3. Menu Interativo:
   - Oferece um menu simples para o usuário escolher entre cadastrar um cliente, listar clientes ou sair do programa.

# Funcionalidades do Código
# 1. Cadastrar cliente;
Esta função permite ao usuário:
- Inserir informações do cliente (nome, telefone, endereço).
- Inserir informações do animal (nome, idade, sexo, raça).
- Atribuir um ID único ao cliente.
- Armazenar as informações nos arrays `listaClientes` e `listaAnimais`.

# 2. listar Clientes
Esta função:
- Verifica se há clientes cadastrados.
- Exibe as informações de todos os clientes e seus animais armazenados nos arrays `listaClientes` e `listaAnimais`.

# 3. Exibir Menu
Esta função:
- Exibe um menu com opções para cadastrar clientes, listar clientes ou sair do programa.
- Dependendo da escolha do usuário, chama a função apropriada (`Cadastrarcliente` ou `listarClientes`).
