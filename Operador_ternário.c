#include <stdio.h>
int main(){
// Variáveis utilizadas
int temperatura = 16, resultado;

 resultado = temperatura >= 20 ? 1:0;

 if (resultado == 1){
    printf("Esta calor!.\n\n");
} else{
    printf("Esta frio!.\n\n");
}

}