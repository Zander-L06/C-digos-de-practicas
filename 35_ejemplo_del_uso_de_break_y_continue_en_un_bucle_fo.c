/* Codigo 35: Ejemplo del uso de break y continue en un bucle for */
#include <stdio.h>

int main(void) {
    int i;

    printf("Hello world!\n");
    for (i = 1; i <= 10; i++) {
        if (i == 3) continue;  /* salta el 3 */
        if (i == 8) break;     /* termina en el 8 */
        printf("Numero %d\n", i);
    }
    return 0;
}
