/* Codigo 36-b: Imprime las tablas de multiplicar con encabezado por tabla */
#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 1; i <= 10; i++) {
        printf("Tabla del : %d\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}
