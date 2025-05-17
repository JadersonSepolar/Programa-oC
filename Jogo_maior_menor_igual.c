#include <time.h>
int main(){
// Variáveis utilizadas.
int numerojogador, numerocomputador, resultado;
char tipodecomparacao;

// Gerador de números aleatórios.
srand(time(0));
// Número entre 1 e 100.
numerocomputador = rand() % 100 + 1;

// Início do jogo
printf(">>> Bem-vindo ao jogo Maior, Menor ou Igual! <<<\n\n");
printf("Você deve escolher um número e o tipo de comparação.\n");
printf("+ - Maior\n");
printf("- - Menor\n");
printf("= - Igual\n");

// O usuário escolhe o tipo de comparação
printf("Escolha a comparação: ");
scanf("%c", &tipodecomparacao);

// O usuário escolhe o numero
printf("Digite um número de 1 a 100: ");
scanf("%d", &numerojogador);

// O Computador gera e imprime o numero aleatório
//printf("O numero do Computador é: %d\n", numerocomputador);


// Lógica do jogo
switch (tipodecomparacao)
{
case '+': // foram criados 2 case, caso o jogador digite a letra maiuscula ou minuscula.
    printf("\nVocê escolheu a opção Maior.\n");
    resultado = numerojogador > numerocomputador ? 1 : 0;
    printf("Seu numero: %d VS %d Número do PC.\n\n", numerojogador,numerocomputador);
    break;

case '-':
    printf("\nVocê escolheu a opção Menor.\n");
    resultado = numerojogador < numerocomputador ? 1 : 0;
    printf("Seu numero: %d VS %d Número do PC.\n\n", numerojogador,numerocomputador);
    break;

case '=':
    printf("\nVocê escolheu a opção Igual.\n");
    resultado = numerojogador == numerocomputador ? 1 : 0;
    printf("Seu numero: %d VS %d Número do PC.\n\n", numerojogador,numerocomputador);
    break;

default:
    printf("\nOpção de jogo inválida.\n\n");
    break;
}
if (resultado == 1){
        printf("Parabéns, você venceu!!!\n\n");
} else {
        printf("Infelizmente, você Perdeu!!!\n\n");
}
}