#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "calculo_tiempo4.h"
int busquedaBinaria(int arreglo[], int bajo, int alto, int objetivo) {
    if (alto >= bajo) {
        int medio = bajo + (alto - bajo) / 2;
        if (arreglo[medio] == objetivo)
            return medio;
        if (arreglo[medio] > objetivo)
            return busquedaBinaria(arreglo, bajo, medio - 1, objetivo);
        return busquedaBinaria(arreglo, medio + 1, alto, objetivo);
    }
    return -1;
}

float calcular_tiempo4() {
    int arreglo[1000];
    int objetivo;
    clock_t inicio, fin;
    for(int i = 0; i < 1000; i++) {
        arreglo[i] = i;
    }
    int indice_aleatorio = rand() % 1000;
    objetivo = arreglo[indice_aleatorio];
    inicio = clock();
    int posicion = busquedaBinaria(arreglo, 0, 999, objetivo);
    fin = clock();
    if(posicion == -1) {
        printf("Número %d no encontrado\n", objetivo);
    } else {
        printf("Número %d encontrado en posición %d\n", objetivo, posicion);
    }
    return (float)(fin - inicio) / CLOCKS_PER_SEC;
}
