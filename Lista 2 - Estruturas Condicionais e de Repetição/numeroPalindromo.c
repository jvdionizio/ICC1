// Escreva um programa que leia um número inteiro de 3 dígitos (entre 100 e 999) e retorne:

// a palavra "SIM" se o número for palíndromo
// a palavra "NAO" se o número não for palíndromo
// a palavra "INVALIDO" se o número não contém três dígitos
// Lembrete: Um palíndromo é um número que é lido da mesma forma tanto da direita para a esquerda como da esquerda para a direita. Por exemplo, 121 é um número palíndromo.
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (99 < n && n < 1000){
      int dig1 = n % 10;
      int dig2 = n / 10 % 10;
      int dig3 = n / 100 % 10;

      int inv = (dig1 * 100) + (dig2 * 10) + dig3;

      if (n == inv){
        printf("SIM\n");
      } else {
        printf("NAO\n");
      }

    } else {
      printf ("INVALIDO\n");
    }


    return 0;
}