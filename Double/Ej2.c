#include <stdio.h>

int main() {
    double num1, num2, suma;

    // Solicitar los dos números al usuario
    printf("Ingresa el primer número: ");
    scanf("%lf", &num1);  // %lf para leer un double

    printf("Ingresa el segundo número: ");
    scanf("%lf", &num2);  // %lf para leer un double

    // Realizar la suma
    suma = num1 + num2;

    // Mostrar el resultado
    printf("La suma de %.1f + %.1f = %.1f\n", num1, num2, suma);

    return 0;
}
