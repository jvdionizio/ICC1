// Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D, segundo a fórmula: DIFERENCA = (A * B - C * D).

#include <stdio.h>

int main ()
{
    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    int diferenca = (a*b - c*d);

    printf("%d", diferenca);

    return 0;
}