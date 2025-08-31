#include <stdio.h>

int main() {
    double num, suma = 0.0, promedio;

    // Leer 5 números del usuario
    for (int i = 1; i <= 5; i++) {
        printf("Ingresa el número %d: ", i);
        scanf("%lf", &num);  // Leer número de tipo double
        suma += num;
    }

    // Calcular el promedio
    promedio = suma / 5;

    // Mostrar el resultado
    printf("El promedio de los 5 números es: %.2f\n", promedio);

    return 0;
}
