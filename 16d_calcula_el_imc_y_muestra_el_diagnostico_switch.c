/* Codigo 16-d: Calcula el IMC y muestra el diagnostico (switch) */
#include <stdio.h>
#include <math.h>

int main(void) {
    float peso, estatura, IMC;
    int opcionRango;

    printf("Calculo del Indice de masa corporal\n");
    printf("Ingrese su peso (kg): ");
    scanf("%f", &peso);
    printf("Ingrese su talla (m): ");
    scanf("%f", &estatura);

    if (peso <= 0 || estatura <= 0) {
        printf("\nError: el peso y estatura deben ser mayores a cero\n");
        return 1;
    }

    IMC = peso / powf(estatura, 2);

    if (IMC < 18.5f)        opcionRango = 1;
    else if (IMC <= 24.9f)  opcionRango = 2;
    else if (IMC <= 29.9f)  opcionRango = 3;
    else if (IMC <= 34.9f)  opcionRango = 4;
    else                    opcionRango = 5;

    printf("Su Indice de masa corporal calculado es: %.2f kg/m2\n", IMC);
    printf("\nDiagnostico: ");

    switch (opcionRango) {
        case 1: printf("Bajo peso\n");        break;
        case 2: printf("Peso normal\n");      break;
        case 3: printf("Sobrepeso\n");        break;
        case 4: printf("Obesidad grado 1\n"); break;
        case 5: printf("Obesidad grado 2\n"); break;
    }

    return 0;
}
