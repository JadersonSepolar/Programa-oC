#include <stdio.h>
int main(){

//Variaveis utilizadas.
int opcao;

// Inserção de dados pelo usuário (menu)
printf("Escolha uma das opções abaixo:\n\n");
printf("1 - Consultar saldo.\n");
printf("2 - Fazer depósito.\n");
printf("3 - Realizar saque.\n");
scanf("%d", &opcao);

//Lógica do programa

switch (opcao){
    case 1:
    printf("Seu saldo é de R$ 1.500,37.\n\n");
    break;

    case 2:
    printf("Seu depósito será realizado em instantes.\n\n");
    break;

    case 3:
    printf("Saque realizado com sucesso!\n\n");
    break;

default:
    printf("Opção inválida!\n\n");

}

}