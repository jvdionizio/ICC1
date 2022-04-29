// Escreve um programa que lê três números inteiros diferentes e apresente o maior número dos três, o intermediário e o menor.

// Exemplo de entrada: 10 8 9

// Exemplo de saída: "maior eh o 10, intermediario eh o 9 e menor eh o 8"

#include <stdio.h>

int main() {
  int A, B, C;
  int A2, B2, C2;

  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);

  if(A > B && A > C){
    A2 = A;
    if(B > C){
      B2 = B;
      C2 = C;
    } else {
      B2 = C;
      C2 = B;
    }
  } else if(B > A && B > C){
    A2 = B;
    if(A > C){
      B2 = A;
      C2 = C;
    } else {
      B2 = C;
      C2 = A;
    }
  } else {
    A2 = C;
    if(A > B){
      B2 = A;
      C2 = B;
    } else {
      B2 = B;
      C2 = A;
    } 
  }

  printf("maior eh o %d, intermediario eh o %d e menor eh o %d", A2, B2, C2);

  return 0;
}