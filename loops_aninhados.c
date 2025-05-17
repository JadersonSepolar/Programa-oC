#include <stdio.h>
int main(){

// variáveis utilizadas

int i, j;
char letra;

    for (i = 0; i <= 3; i++){

        letra = '0';

        for (j = 1; j <= i; j++)
        {
            printf("%c ", letra);
            ++letra;
        }
            printf("\n");
    }
    
    return 0;
}