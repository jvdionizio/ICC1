// Faça um programa que leia um número inteiro positivo e imprima um texto afirmando se é PAR ou IMPAR.

// Se o número for negativo ou zero, imprimir INVALIDO.
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if ( n <= 0 ) {
      printf("INVALIDO\n");

      return 0;
    }

    if ( n % 2 == 0 ) {
      printf("PAR\n");
    } else {
      printf("IMPAR\n");
    }

    return 0;
}