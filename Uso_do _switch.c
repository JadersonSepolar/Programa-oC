#include <stdio.h>
int main(){
 //Variáveis utilizadas.
 char variavel;
//Inserção de dados pelo usuário.
 printf("Digite um valor: ");
scanf("%s", &variavel);

//Lógica do programa.
switch (variavel){
    case 'a':
    printf("Executado caso o valor seja == a a.\n\n");
    break;

    case 'b':
    printf("Exwcutado caso o valor seja == a b.\n\n");
    break;

    default:
    printf("executado caso o valor seja diferente de a ou b.\n\n");
}

}