#include <stdio.h>
#include <ctype.h>

int main() {

    char letra;
    printf("ingresa una letra: ");
    scanf(" %c", &letra );

    char mayuscula = toupper(letra);

    printf("La letra en mayuscula es: %c\n", mayuscula);
    return 0;   

}