// Efetue o cálculo da área do círculo dado um raio (ponto flutuante com duas casas decimais) informado pelo usuário, considerando PI = 3.14159

// A área deve ser apresentada com 4 casas após o ponto decimal (use variável do tipo double).

#include <stdio.h>

int main () {

    const double PI = 3.14159;
    double raio;

    scanf("%lf", &raio );

    
    double area = (raio * raio) * PI;

    printf("%.4lf\n", area);

    return 0;
}
