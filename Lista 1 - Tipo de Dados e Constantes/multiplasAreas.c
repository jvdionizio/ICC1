// Escreva um programa que leia três valores com ponto flutuante: A, B e C. Em seguida, calcule e mostre: a) a área do triângulo retângulo que tem A por base e C por altura. b) a área do círculo de raio C. (pi = 3.14159) c) a área do trapézio que tem A e B por bases e C por altura. d) a área do quadrado que tem lado B. e) a área do retângulo que tem lados A e B.

// A entrada contém três valores com um dígito após o ponto decimal.

// A saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.

#include <stdio.h>

int main()
{
    const float PI = 3.14159;
    float A, B, C;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    float areaTriangulo = (A*C) / 2;
    float areaCirculo = (C*C) * PI;
    float areaTrapezio = ((A+B) * C)/2;
    float areaQuadrado = B*B;
    float areaRetangulo = A*B;

    printf("%.3f\n", areaTriangulo);
    printf("%.3f\n", areaCirculo);
    printf("%.3f\n", areaTrapezio);
    printf("%.3f\n", areaQuadrado);
    printf("%.3f\n", areaRetangulo);

    return 0;
}