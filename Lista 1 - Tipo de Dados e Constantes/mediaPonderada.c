// Leia 2 valores de ponto flutuante A e B (com uma casa decimal) que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

// Imprima a média do aluno com 5 dígitos após o ponto decimal.

#include <stdio.h>

int main()
{
    float A,B;

    scanf("%f", &A);
    scanf("%f", &B);

    float notaA = A * 3.5;
    float notaB = B * 7.5;
    float notaFinal = (notaA + notaB) / 11;

    printf("%.5f", notaFinal);

    return 0;
}