// Um número é Feliz se tem dois dígitos (entre 10 e 99) e os dígitos são iguais. Por exemplo, 55 é um número feliz. Todos os outros números são chamados de TRISTE.

// Escreva um programa para ler um inteiro e determinar se é TRISTE ou FELIZ

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (10 < n && n < 99){
      int dig1 = n % 10;
      int dig2 = n / 10 % 10;

      if (dig1 == dig2){
        printf("FELIZ\n");
      } else {
        printf("TRISTE\n");
      }

    } else {
      printf ("TRISTE\n");
    }

    return 0;
}