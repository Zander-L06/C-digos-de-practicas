/* Codigo 28: Calcula la suma y el promedio de n notas (bucle for) */
#include <stdio.h>

int main(void) {
    int suma = 0, nota, n, i;

    printf("PROMEDIO DE NOTAS\n");
    printf("Leer n notas\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Ingrese la nota %d: \n", i);
        scanf("%d", &nota);
        suma += nota;
    }

    printf("La suma de notas es: %d\n", suma);
    if (n > 0)
        printf("El promedio de notas es: %.2f\n", (float)suma / n);
    return 0;
}
