/* Codigo 38-b: Suma solo los numeros pares del 1 al 10 con while */
#include <stdio.h>

int main(void) {
    int contador = 1, suma = 0;

    while (contador <= 10) {
        printf("Numero: %d\n", contador);
        if (contador % 2 == 0)
            suma += contador;
        contador++;
    }

    printf("La suma total de los numeros pares es: %d\n", suma);
    return 0;
}
