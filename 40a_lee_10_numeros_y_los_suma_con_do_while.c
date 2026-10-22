/* Codigo 40-a: Lee 10 numeros y los suma con do-while */
#include <stdio.h>

int main(void) {
    int suma = 0, n, i = 1;

    do {
        printf("Ingrese numero %d: ", i);
        scanf("%d", &n);
        suma += n;
        i++;
    } while (i <= 10);

    printf("Suma total = %d\n", suma);
    return 0;
}
