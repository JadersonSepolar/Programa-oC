#include <stdio.h>
int main (){

//Variáveis utilizadas

int i = 0;

//estrutura (lógica) do código

while (i <= 10){

    if(i % 2 != 0)
    {
    printf("O número %d é impar!\n", i);
    }

    else if(i % 2 ==0)
    {
    printf("O numero %d é par!\n", i);
    }
     i++;
}

    return 0;
}