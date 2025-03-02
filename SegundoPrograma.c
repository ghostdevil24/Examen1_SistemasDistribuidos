#include "calculo_tiempo1.h"
#include <stdio.h>
#include <stdlib.h>
#define TAMANO 1000
double calcular_tiempo1() {
    float a[TAMANO], x[TAMANO];
    for (int i = 0; i < TAMANO; i++) {
        a[i] = (float)rand() / (float)RAND_MAX;
    }
    clock_t inicio, fin;
    inicio = clock();
    for (int i = 0; i < TAMANO; i++) {
        x[i] = a[i];
    }
    fin = clock();

    return ((double)(fin - inicio)) / CLOCKS_PER_SEC;
}
