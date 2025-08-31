#include <stdio.h>
#include <math.h>  // Necesario para pow()

int main() {
    double base, exponente, resultado;

    // Solicitar al usuario la base y el exponente
    printf("Ingresa la base: ");
    scanf("%lf", &base);

    printf("Ingresa el exponente: ");
    scanf("%lf", &exponente);

    // Calcular la potencia usando la función pow
    resultado = pow(base, exponente);

    // Mostrar el resultado
    printf("%.4f elevado a la %.4f es %.4f\n", base, exponente, resultado);

    return 0;
}
