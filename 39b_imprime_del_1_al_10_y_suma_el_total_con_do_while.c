/* Codigo 39-b: Imprime del 1 al 10 y suma el total con do-while */
#include <stdio.h>

int main(void) {
    int i = 1, suma = 0;

    printf("Hello world!\n");
    do {
        printf("Numero :%d\n", i);
        suma += i;
        i++;
    } while (i <= 10);

    printf("La suma total es : %d\n", suma);
    return 0;
}
