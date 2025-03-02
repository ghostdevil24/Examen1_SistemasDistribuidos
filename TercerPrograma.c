#include "calculo_tiempo2.h"
#include <stdio.h>
#include <stdlib.h>
#define N 1000
double calcular_tiempo2() {
    float a[N][N], x[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = (float)rand() / (float)RAND_MAX;
        }
    }
    clock_t inicio, fin;
    inicio = clock();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            x[i][j] = a[i][j];
        }
    }
    fin = clock();
    return ((double)(fin - inicio)) / CLOCKS_PER_SEC;
}
