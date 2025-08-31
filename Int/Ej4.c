#include <stdio.h>

int main() {
    int num1, num2, num3, mayor;

    printf("Ingresa el primer número entero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo número entero: ");
    scanf("%d", &num2);

    printf("Ingresa el tercer número entero: ");
    scanf("%d", &num3);

    mayor = num1; // Asumimos que el primero es el mayor

    if (num2 > mayor) {
        mayor = num2;
    }

    if (num3 > mayor) {
        mayor = num3;
    }

    printf("El mayor de los tres números es: %d\n", mayor);

    return 0;
}
