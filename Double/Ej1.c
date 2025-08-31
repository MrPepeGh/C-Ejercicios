#include <stdio.h>

int main() {
    int n = 1000;            // Número de términos
    double pi = 0.0;         // Resultado final
    int signo = 1;           // Alterna el signo (+ / -)

    for (int i = 0; i < n; i++) {
        double termino = 1.0 / (2 * i + 1);  // Calcula el término actual
        pi += signo * termino;              // Suma o resta el término
        signo *= -1;                        // Cambia el signo
    }

    pi *= 4;  // Multiplicamos el resultado por 4

    printf("Aproximación de pi usando %d términos: %.15f\n", n, pi);

    return 0;
}
