#include<stdio.h>
#include "calculo_tiempo.h"
#include "calculo_tiempo1.h"
#include "calculo_tiempo2.h"
#include "calculo_tiempo3.h"
#include "calculo_tiempo4.h"
int main(){
	int contador;
	FILE *archivo = fopen("resultados.csv", "w");
    	if (archivo == NULL) {
        	printf("Error al abrir el archivo CSV.\n");
        	return 1;
    	}
    	fprintf(archivo, "Ejecución,Primer Programa,Segundo Programa,Tercer Programa,Cuarto Programa,Quinto Programa\n");
	float primer_programa, segundo_programa, tercer_programa, cuarto_programa, quinto_programa;
	for (contador=0;contador<5;contador++){
		primer_programa=calcular_tiempo();
		segundo_programa=calcular_tiempo1();
		tercer_programa = calcular_tiempo2();
		cuarto_programa = calcular_tiempo3();
		quinto_programa = calcular_tiempo4();
		fprintf(archivo, "%d,%.12f,%f,%f,%f,%f\n", contador + 1, primer_programa, segundo_programa, tercer_programa, cuarto_programa,quinto_programa);
   	}
	fclose(archivo);
	return 0;
}

