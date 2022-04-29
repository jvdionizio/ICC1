// Escreva um programa que lê um número S indicando a quantidade de segundos transcorridos desde a meia noite até agora. Imprima a hora atual no formato HH:MM:SS.

// Observação: considere que o dia inicia à hora 00:00:00 e termina às 23:59:59.
#include <stdio.h>

int main() {
  int S;
  int H = 0, M = 0;

  scanf("%d", &S);
  
  while( S > 3600){
    S -= 3600;
    H++;
  }

  while( S > 60){
    S -= 60;
    M++;
  }

  printf("%02d:%02d:%02d\n", H, M, S);

  return 0;
}