#include <iostream>
#include <stdio.h>

int main() {
  float numero;
    printf("inserire un numero: ");
    scanf("%f", &numero);
    if (numero < 0) {
        printf("numero negativo");
    } else {
        printf("numero positivo");
    }
    return 0;
}
