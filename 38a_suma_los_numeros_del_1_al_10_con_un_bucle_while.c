/* Codigo 38-a: Suma los numeros del 1 al 10 con un bucle while */
#include <stdio.h>

int main(void) {
    int contador = 1, suma = 0;

    while (contador <= 10) {
        printf("Numero: %d\n", contador);
        suma += contador;
        contador++;
    }

    printf("La suma total es: %d\n", suma);
    return 0;
}
