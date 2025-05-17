#include <stdio.h>
int main(){

//Variáveis utilizadas
int numero;

// Estrutura (lógica) do programa
do {
    printf("Digite um número par para sair do programa:");
    scanf("%d", &numero);

    if(numero % 2 == 0){
    printf("%d é par!\n\n", numero);
    } else {
    printf("%d é impar!\n\n", numero);
    }

    } while (numero % 2 != 0);
        printf("Você digitou um numero par. Saindo do programa...\n\n");

    



    return 0;
}
