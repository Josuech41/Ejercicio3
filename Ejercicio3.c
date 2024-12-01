#include <stdio.h>

int Calidad_Puntos(float nota);

int main() {
    float nota;
    int calidad;

    printf("Introduce la nota del alumno (0-100): ");
    scanf("%f", &nota);

    calidad = Calidad_Puntos(nota);

    printf("La calidad de puntos para la nota %.2f es: %d\n", nota, calidad);

    return 0;
}

int Calidad_Puntos(float nota) {
    if (nota >= 90 && nota <= 100) {
        return 4; 
    } else if (nota >= 80 && nota < 90) {
        return 3; 
    } else if (nota >= 70 && nota < 80) {
        return 2; 
    } else if (nota >= 60 && nota < 70) {
        return 1; 
    } else if (nota < 60) {
        return 0; 
    } else {
        printf("Error: La nota ingresada no es válida.\n");
        return -1; 
    }
}
