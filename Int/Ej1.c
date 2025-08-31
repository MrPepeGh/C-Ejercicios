#include <stdio.h>

int main() {
    int num1, num2, suma;

    printf("Ingresa el primer número entero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo número entero: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("La suma de %d y %d es %d\n", num1, num2, suma);

    return 0;
}
