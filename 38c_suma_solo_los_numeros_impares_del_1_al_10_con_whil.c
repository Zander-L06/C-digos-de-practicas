/* Codigo 38-c: Suma solo los numeros impares del 1 al 10 con while */
#include <stdio.h>

int main(void) {
    int contador = 1, suma = 0;

    while (contador <= 10) {
        printf("Numero: %d\n", contador);
        if (contador % 2 != 0)
            suma += contador;
        contador++;
    }

    printf("La suma total de los numeros impares es: %d\n", suma);
    return 0;
}
