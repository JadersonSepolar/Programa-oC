#include <stdio.h>
int main(){
// Variáveis utilizadas.
 int opcao;
 float nota1, nota2, media;

 //Recebendo dados do usuário

 printf("Menu de gerenciamento de estudantes.\n");
 printf("1 - Calcular média.\n");
 printf("2 - Determinar status.\n");
 printf("3 - Sair do programa.\n");
 printf("Escolha uma opção: ");
 scanf("%d", &opcao);

// Lógica do programa

switch (opcao){
case 1:
   printf("Calcular a média.\n");
   printf("Digite a primeira nota: ");
   scanf("%f", &nota1);
   printf("Digite a segunda nota: ");
   scanf("%f", &nota2);

   //Abaixo, um teste para ver se as notas são válidas e evitar erros.
   // Se (if) nota 1 é >= a 0, e (&&) se nota 1 é <= 10.

    if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
    media = (nota1 + nota2 )/ 2;
    printf("A média é: %.2f\n\n", media);
    } else {
    printf("Entrada com valores incorretos!\n");
}
    break;

case 2:
    printf("Determinar status.\n\n");
    printf("Digite o valor da média.\n");
    scanf("%f", &media);
    media >= 5 ? printf("Aprovado!!!\n\n") : printf("Reprovado!!!\n\n");
     break;

     case 3:
   printf("Saindo do programa...\n");
    break;

default:
    printf("Opção inválida.\n");
}
}