#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include "calculo_tiempo.h"
float calcular_tiempo() {
    struct timespec inicio, fin;
    double tiempo_total;
    float a[1],x;
    a[0]= (float)rand() / (float)RAND_MAX;
    srand(time(NULL));
    clock_gettime(CLOCK_MONOTONIC, &inicio);
    x = a[0];
    clock_gettime(CLOCK_MONOTONIC, &fin);
    tiempo_total = (fin.tv_sec - inicio.tv_sec) + (fin.tv_nsec - inicio.tv_nsec) / 1E9;
    return (float)tiempo_total;
}
