// Uma das funcionalidades do seu smartphone é um temporizador regressivo que pode ser programado para despertar depois de algumas horas, minutos, segundos.

// Neste exercício você deverá escrever um programa que lê a hora atual, configura o temporizador e calcula o horário em que ele irá despertar.

// Entrada

// A entrada conterá seis números inteiros.

// Os três primeiros números serão H1, M1 e S1, representando o horário em que o temporizador será ativado. Os três números comporão um horário válido, isto é, H1 será um valor inteiro entre 0 e 23 e os outros dois serão números inteiros entre 0 e 59.

// Os três números seguintes serão H2, M2 e S2, representando a duração do temporizador. O tempo máximo será 12 horas.

// Saída

// Seu programa deverá imprimir a hora em que o temporizador irá despertar no formato HH:MM:SS.
#include <stdio.h>

int main() {
  int H1, M1, S1, H2, M2, S2;
  int inicio, fim, periodo;
  int H = 0, M = 0;

  scanf("%d", &H1);
  scanf("%d", &M1);
  scanf("%d", &S1);
  scanf("%d", &H2);
  scanf("%d", &M2);
  scanf("%d", &S2);

  // H1 = 23;
  // M1 = 59;
  // S1 = 59;
  // H2 = 0;
  // M2 = 1;
  // S2 = 1;

  if( 0 <= H1 && H1 < 24 && 0 <= M1 && M1 <= 60 && 0 <= S1 && S1 <= 60 && 0 <= H2 && H2 < 24 && 0 <= M2 && M2 <= 60 && 0 <= S2 && S2 <= 60){
    inicio = H1 * 3600 + M1 * 60 + S1;
    periodo = H2 * 3600 + M2 * 60 + S2;
    fim = inicio + periodo;
     while( fim >= 3600){
      fim -= 3600;
      H++;
    }

    while( fim >= 60){
      fim -= 60;
      M++;
    }

    if( H >= 24){
      H -=24;
    }

    printf("%02d:%02d:%02d\n", H, M, fim);

  } else {
    printf("A saída esperada deste caso de teste não esta disponível");

  }

  return 0;
}
