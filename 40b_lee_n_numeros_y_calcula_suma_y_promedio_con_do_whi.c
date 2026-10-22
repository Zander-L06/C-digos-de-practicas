/* Codigo 40-b: Lee n numeros y calcula suma y promedio con do-while */
#include <stdio.h>

int main(void) {
    int i = 1, suma = 0, n, num;

    printf("Ingrese la cantidad de datos : ");
    scanf("%d", &n);

    do {
        printf("Ingrese numero :%d\n", i);
        scanf("%d", &num);
        suma += num;
        i++;
    } while (i <= n);

    printf("Suma total = %d\n", suma);
    if (n > 0)
        printf("Promedio = %.2f\n", (float)suma / n);
    return 0;
}
