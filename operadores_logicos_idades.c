#include <stdio.h>
int main(){

    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

if (idade >= 60){
    printf("Você é um idoso!\n\n");
} else if (idade < 60 && idade >= 18){
    printf("Você é um adulto!\n\n");
} else if (idade < 18 && idade >= 12){
    printf("Você é um adolescente!\n\n");
} else { 
    printf("Você é uma criança!\n\n");
}

}
