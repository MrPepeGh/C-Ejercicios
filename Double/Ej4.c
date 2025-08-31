#include <stdio.h>

int main() {
    double numero;

    // Solicitar el número al usuario
    printf("Ingresa un número: ");
    scanf("%lf", &numero);  // %lf se usa para leer un double

    // Verificar si es positivo, negativo o cero
    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}
