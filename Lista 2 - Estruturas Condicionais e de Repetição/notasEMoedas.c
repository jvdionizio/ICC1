// Escreva um programa que lê um valor inteiro em reais e retorna a quantidade de notas de R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2 e se necessário a quantidade de moedas de 1 R$. A demanda para o programa necessita que seja escolhida a solução com menos notas e moedas possíveis para qualquer valor digitado.

// Exemplo de entrada: 20

// Exemplo de saída: "0 nota(s) de 100, 0 nota(s) de 50, 1 nota(s) de 20, 0 nota(s) de 10, 0 nota(s) de 5, 0 nota(s) de 2 e 0 moeda(s) de 1."
#include <stdio.h>

int main() {
  int n;
  int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

  scanf("%d", &n);

  while (n >= 100)
  {
    n -= 100;
    cem++;
  }

  while (n >= 50)
  {
    n -= 50;
    cinquenta++;
  }
  
  while (n >= 20)
  {
    n -= 20;
    vinte++;
  }

  while (n >= 10)
  {
    n -= 10;
    dez++;
  }

  while (n >= 5)
  {
    n -= 5;
    cinco++;
  }

  while (n >= 2)
  {
    n -= 2;
    dois++;
  }

  while (n >= 1)
  {
    n -= 1;
    um++;
  }

  printf("%d nota(s) de 100, %d nota(s) de 50, %d nota(s) de 20, %d nota(s) de 10, %d nota(s) de 5, %d nota(s) de 2 e %d moeda(s) de 1.", cem, cinquenta, vinte, dez, cinco, dois, um);

  return 0;
}
