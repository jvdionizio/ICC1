// Escreva um programa que lê três números inteiros H, M e S separados por espaços. Esses números devem representar uma hora do dia. Imprima a quantidade de segundos que se passaram desde a meia-noite.

// Observação: os três números necessariamente comporão uma hora válida, isto é, a entrada garante que

// 0 <= H < 24
// 0 <= M <= 60
// 0 <= S <= 60
// Caso não seja um horário válido, imprima "HORARIO INVALIDO".
#include <stdio.h>

int main() {
  int H, M, S;

  scanf("%d %d %d", &H, &M, &S);

  if( 0 <= H && H < 24 && 0 <= M && M <= 60 && 0 <= S && S <= 60){
    printf("%d\n", H * 3600 + M * 60 + S );
  } else {
    printf("HORARIO INVALIDO\n");
  }

  return 0;
}
