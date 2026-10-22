#include <stdio.h>
#include <math.h>
int main(void) {
    float peso, estatura, IMC;
    printf("Ingrese su peso (kg): ");
    scanf("%f", &peso);
    printf("Ingrese su estatura (m): ");
    scanf("%f", &estatura);
    if (peso <= 0 || estatura <= 0) {
        printf("\nLos datos no pueden tomar valores negativos o cero\n");
        return 1;}
    IMC = peso / powf(estatura, 2);
    if (IMC < 18.5f)
        printf("\nEl sujeto pertenece a la categoria de bajo peso\n");
    else if (IMC <= 24.9f)
        printf("\nEl sujeto pertenece a la categoria de peso normal\n");
    else if (IMC <= 29.9f)
        printf("\nEl sujeto pertenece a la categoria de sobrepeso\n");
    else if (IMC <= 34.9f)
        printf("\nEl sujeto pertenece a la categoria de Obesidad grado I\n");
    else if (IMC <= 39.9f)
        printf("\nEl sujeto pertenece a la categoria de Obesidad grado II\n");
    else
        printf("\nEl sujeto pertenece a la categoria de Obesidad grado III\n");
    return 0;
}
