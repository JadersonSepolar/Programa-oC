#include <stdio.h>

void recursivo(int numero){
    if (numero < 10){
    
        recursivo(numero + 1);
        printf("%d \n", numero);
    }
}

int main(){

int quantidade;
printf("Digite o numero para a contagem regressiva: ");
scanf("%d", &quantidade);
    printf("Iniciando contagem regressiva...\n");
    recursivo(quantidade);



    return 0;
}