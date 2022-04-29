// Você está fazendo um programa para compra de selos. Só existem selos de 5 ou 3 reais. Faça um programa que leia um valor inteiro e apresente a quantidade de selos de 5 e 3 reais que serão enviados ao comprador. O dinheiro inserido como entrada deve ser inteiramente aproveitado, ou seja, o valor deve ser totalmente gasto, não devendo haver desperdício. O valor mínimo para compra de selos é 8 reais. Seu programa deve utilizar a quantidade máxima de selos de 5 reais possíveis.

// Exemplo de saída quando a entrada for um inteiro de valor 8:
#include <stdio.h>

int main() {
  int n;
  int cinco = 0, tres = 0;

  scanf("%d", &n);

  while (n >= 5 && (n % 5) % 3 == 0 )
  {
    n -= 5;
    cinco++;
  }

  while (n >= 3)
  {
    n -= 3;
    tres++;
  }

  printf("Quantidade de selos de 5: %d\n", cinco);
  printf("Quantidade de selos de 3: %d\n", tres);

  return 0;
}