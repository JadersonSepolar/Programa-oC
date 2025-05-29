#include <stdio.h>
int main(){

//Variáveis utilizadas

int index;
char * nomesAlunos[3][3] = {
    {"João", "Pt: 30", "Mat: 90"},
    {"Maria", "Pt: 60", "Mat: 60"},
    {"Pedro", "Pt: 90", "Mat: 90"}
};

    printf("Digite o numero do aluno que queira ver as notas...\n");
    printf("Digite 0 para João.\n");
    printf("Digite 1 para Maria.\n");
    printf("Digite 2 para Pedro.\n");

    scanf("%d", &index);

    printf("As notas do Aluno: %s, são: %s, %s.\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);



    return 0;
}