// Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

// Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

// Imprima a saída conforme exemplo fornecido no caso de teste 1

#include <stdio.h>

int main ()
{
    int idadeEmDias;

    scanf("%d", &idadeEmDias);

    int anos = idadeEmDias/365;
    int meses = (idadeEmDias - 365 * anos)/30;
    int dias = (idadeEmDias - 365 * anos) - (30 * meses);


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}