# Examen1_SistemasDistribuidos
Se trata del repositorio correspondiente al primer Exámen de Sistemas distribuidos. Semestre 2025-2
Desarrollo en Linux.
Se trata de medir el tiempo de ejecución de cinco programas:
1. Asignación simple
2. Asignación recorriendo un vector
3. Asignación recorriendo una matriz
4. Asignación reccoriendo un arreglo tridimensional
5. Búsqueda binaria.
## Integrantes
- Aranda Solís Ricardo
- Morales Gracía Owen
- Rodríguez Guerrero Angel Gabriel
- Ramírez Chávez Ángel Yahir
## Uso 
### Compilación
Dentro de la carpeta Ex1 se debe de compilar cada uno de los modulos secundarios y el principal de tal manera:
```
gcc -c PrimerPrograma.c
gcc -c SegundoPrograma.c
gcc -c TercerPrograma.c
gcc -c CuartoPrograma.c
gcc -c QuintoPrograma.c
gcc -c Principal.c
gcc Principal.o PrimerPrograma.o SegundoPrograma.o TercerPrograma.o CuartoPrograma.o QuintoPrograma.o -o Principal
```
Finalmente se ejecuta
```
./Programa
```
El programa genera un archivo llamado *resultados.csv* donde contiene todos los resultados.
### Obtener gráficas
Para obtener las gráficas se debe de correr el script de pyhton para generar las graficas *graficas.py*
```
pyhton graficas.py
```
## Requerimientos 
- Python 3
- gcc
- pip (pandas, matplotlib)
```
sudo apt install python3
pip install pandas matplotlib
```
## Resultados
![imagen](https://github.com/user-attachments/assets/1cbcd809-90d1-4be1-a130-977581da32eb)
![imagen](https://github.com/user-attachments/assets/27e071a5-9dc7-4c8f-a971-7834b9f7bb12)


Y las ![gráficas](graficas)
