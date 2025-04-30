#include <stdio.h>
int main(){
    
//variáveis utilizadas
    int idade, renda;
    

    //Descrição do programa
    /*O programa verifica se uma pessoa está qualificada a receber um desconto
    dependendo da sua idade e renda ( idade >= 60 && idade < 18 ou  Renda < 2000)*/

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%d", &renda);

 // Lógica do programa

 if (idade <= 18 || idade >= 60)
 {
    if (renda < 2000)
    {
      printf(" Você terá um desconto!\n\n");
    } else {
      printf("Você não terá desconto devido a sua renda (+2000).\n\n");
    }

 } else {
   printf("Você naõ terá desconto devido a sua idade (-60).\n\n");
 }

}