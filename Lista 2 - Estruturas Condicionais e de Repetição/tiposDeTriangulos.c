// Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

// se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
// se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
// se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
// se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
// se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
// se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

#include <stdio.h>

int main() {
  float A, B, C;
  float A2, B2, C2;

  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);

  if(A >= (B + C)){
    printf("NAO FORMA TRIANGULO\n");

    return 0;
  }

  if(A > B && A > C){
    A2 = A; 
    B2 = B; 
    C2 = C;
  } else if(B > A && B > C){
    A2 = B;
    B2 = A; 
    C2 = C;
  } else {
    A2 = C;
    B2 = B; 
    C2 = A; 
  }

  printf("%f\n", A2);
  printf("%f\n", B2);
  printf("%f\n", C2);

  if(A2 == (B2 + C2)){
    printf("TRIANGULO RETANGULO\n");
  } else if(A2 > (B2 + C2)){
    printf("TRIANGULO OBTUSANGULO\n");
  } else {
    printf("TRIANGULO ACUTANGULO\n");
  }

  if(A == B && C == A && B == C ){
    printf("TRIANGULO EQUILATERO\n");
  } else if(A == B ||C == A ||B == C ){
    printf("TRIANGULO ISOSCELES\n");
  }

  return 0;
}