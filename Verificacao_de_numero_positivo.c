#include <stdio.h>
int main(){

    //variaveis utilizadas
     int numero;

    // Coletando dados
    printf("Digite um numero: ");
    scanf("%i", &numero);

    //lógica do programa
if (numero > 0){
    if (numero % 2 == 0){
        printf("O Número é par!\n\n");
    } else {
        printf("O número é ímpar!\n\n");
    }
    printf("O numero é positivo!\n\n");
} else if (numero == 0){
    printf("O número é zero!\n\n");
} else {
     printf("O numero é negativo!\n\n");

}
}