// Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

// Perimetro = XX.X
// Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem:

// Area = XX.X
#include <stdio.h>

int main() {
    float A, B, C;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    unsigned D = A - B;

    if ( D < C ){
      printf("Perimetro = %.1f\n", A + B + C);
    } else {
      printf("Area = %.1f\n", ((A+B) * C)/2 );
    }

    return 0;
}