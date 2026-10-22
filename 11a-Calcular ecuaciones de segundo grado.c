#include <stdio.h>
#include <math.h>
int main(void) {
    float a, b, c, d, x1, x2, parteReal, parteImag;
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);
    printf("Ingrese el valor de c: ");
    scanf("%f", &c);
    d = (b * b) - (4 * a * c);
    if (d > 0){
        x1 = (-b + sqrtf(d)) / (2 * a);
        x2 = (-b - sqrtf(d)) / (2 * a);
        printf("\nLas raices son reales y diferentes:\n");
        printf("x1 = %.4f\n", x1);
        printf("x2 = %.4f\n", x2);} 
    else if (d == 0) {
        x1 = -b / (2 * a);
        printf("\nLa raiz es real y doble (x1 = x2):\n");
        printf("x1 = x2 = %.4f\n", x1);}
    else {
        parteReal = -b / (2 * a);
        parteImag = sqrtf(-d) / (2 * a);
        printf("\nLas raices son complejas:\n");
        printf("x1 = %.4f + %.4fi\n", parteReal, parteImag);
        printf("x2 = %.4f - %.4fi\n", parteReal, parteImag);}
    return 0;
}
