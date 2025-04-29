#include <stdio.h>
int main(){

// Variáveis utilizadas
    int nota;

//Coleta informações do usuário
    printf("Digite sua nota: ");
    scanf("%i", &nota);

  // tipos de notas:
  // Excelente >= 90, Muito bom  =>70, Bom =>60, Aceitavel => 50, repitir o teste =< 50.

//lógica das notas
if (nota >= 90){
    printf("Excelente!\n\n");
} else if (nota >= 70){
    printf("Muito bom!\n\n");
} else if ( nota >= 60){
    printf("Bom!\n\n");
} else if (nota >= 50){
    printf("Aceitavel!\n\n");
} else if (nota <= 50){
    printf("Repita o teste!\n\n");
}
}