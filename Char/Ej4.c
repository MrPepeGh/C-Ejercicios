#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    char letra;
    int contador = 0;

    // Pedir al usuario la palabra
    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    // Pedir la letra a contar
    printf("Ingresa la letra que deseas contar: ");
    scanf(" %c", &letra);  

    // Recorrer la palabra y contar ocurrencias de la letra
    for (int i = 0; i < strlen(palabra); i++) {
        if (palabra[i] == letra) {
            contador++;
        }
    }

    // Mostrar resultado
    printf("La letra '%c' aparece %d veces en la palabra \"%s\".\n", letra, contador, palabra);

    return 0;
}
