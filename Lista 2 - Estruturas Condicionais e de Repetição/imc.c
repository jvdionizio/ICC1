// Construa um algoritmo para determinar o IMC (Índice de Massa Corpórea), que é definida como sendo a relação entre o peso (PESO) e o quadrado da Altura (ALTURA) do indivíduo.

// O seu programa deve imprimir na tela um texto conforme o resultado do IMC:

// Se IMC abaixo de 20, então imprimir "Abaixo do peso"
// Se IMC de 20 até 25, então imprimir "Peso Normal"
// Se IMC de 25 até 30, então imprimir "Sobre Peso"
// Se IMC de 30 até 40, então imprimir "Obeso"
// Se IMC de 40, então imprimir "Obeso Morbido"
#include <stdio.h>

int main() {
  float H, W;

  scanf("%f", &H);
  scanf("%f", &W);

  float IMC = W / (H * H);
  
  if( 20 > IMC ){
    printf("Abaixo do peso");
  } else if( 25 > IMC ){
    printf("Peso Normal");
  } else if( 30 > IMC ){
    printf("Sobre Peso");
  } else if( 40 > IMC ){
    printf("Obeso");
  } else {
    printf("Obeso Morbido");
  }

  return 0;
}
