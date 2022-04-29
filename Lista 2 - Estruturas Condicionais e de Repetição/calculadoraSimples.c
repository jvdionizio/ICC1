// Faça um programa que leia dois números A e B (float) e um número C (inteiro).

// Se a variável C for igual a:

// 1 então somar A e B
// 2 então subtrair A e B
// 3 então multiplicar A e B
// 4 então dividir A e B
// A saída do seu programa deve ser o resultado da operação ou então -1 caso o valor de C seja inválido.
#include <stdio.h>

int main() {
  float A, B;
  int C;

  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%d", &C);

  switch (C)
  {
    case 1:
      printf("%.1f\n", A + B);
      break;
    case 2:
      printf("%.1f\n", A - B);
      break;
    case 3:
    printf("%.1f\n", A * B);
    break;
    case 4:
      printf("%.1f\n", A / B);
      break;
    default:
      printf("-1\n");
      break;
  }

  return 0;
}