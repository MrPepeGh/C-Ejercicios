#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;  // Usamos unsigned long long para números grandes

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: El número debe ser positivo.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es %llu\n", n, factorial);
    }

    return 0;
}