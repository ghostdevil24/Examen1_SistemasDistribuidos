#include "calculo_tiempo3.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

double calcular_tiempo3() {
    float ***a = (float ***)malloc(N * sizeof(float **));
    float x;

    for (int i = 0; i < N; i++) {
        a[i] = (float **)malloc(N * sizeof(float *));
        for (int j = 0; j < N; j++) {
            a[i][j] = (float *)malloc(N * sizeof(float));
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                a[i][j][k] = (float)rand() / (float)RAND_MAX;
            }
        }
    }
    clock_t inicio, fin;
    inicio = clock();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                x = a[i][j][k];
            }
        }
    }

    fin = clock();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            free(a[i][j]);
        }
        free(a[i]);
    }
    free(a);
    return ((double)(fin - inicio)) / CLOCKS_PER_SEC;
}
