#include <stdio.h>
int main (){

// Variáveis utilizadas

    int numero, i;

// Recebe dados do usuário

    printf("Digite um número para calcularmos a Tabuada: ");
    scanf("%d", &numero);
 // Lógica do programa

 for (i = 0; i <= 10; i++)
 {
    printf("%d * %d = %d\n", i, numero, i * numero);
 }

    return 0;
    
}