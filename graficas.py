import pandas as pd
import matplotlib.pyplot as plt
import os

# Configuración inicial
ruta_csv = "resultados.csv"
carpeta_graficas = "graficas"

# Leer los datos
try:
    df = pd.read_csv(ruta_csv)
except FileNotFoundError:
    print(f"Error: No se encontró el archivo {ruta_csv}")
    exit(1)

# Crear carpeta para gráficas
os.makedirs(carpeta_graficas, exist_ok=True)

# 1. Gráficas individuales para cada ejecución de programa
programas = df.columns[1:]  # Excluir columna 'Ejecución'

for programa in programas:
    # Configurar figura
    plt.figure(figsize=(10, 5))
    
    # Crear gráfica de barras
    plt.bar(df["Ejecución"], df[programa], color='skyblue')
    
    # Personalizar
    plt.title(f"Tiempos de ejecución entre iteraciones - {programa}")
    plt.xlabel("Número de ejecución")
    plt.ylabel("Tiempo (segundos)")
    plt.xticks(df["Ejecución"])
    plt.grid(axis='y', linestyle='--', alpha=0.7)
    
    # Guardar y cerrar
    plt.savefig(f"{carpeta_graficas}/{programa.replace(' ', '_')}_ejecuciones.png", bbox_inches='tight')
    plt.close()

# 2. Gráficas de promedios
promedios = df.mean().drop("Ejecución")

# Versión normal
plt.figure(figsize=(12, 6))
plt.bar(promedios.index, promedios.values, color=['#1f77b4', '#ff7f0e', '#2ca02c', '#d62728', '#9467bd'])
plt.title("Comparación de tiempos promedio (escala lineal)")
plt.xlabel("Programa")
plt.ylabel("Tiempo promedio (segundos)")
plt.grid(axis='y', linestyle='--', alpha=0.7)
plt.savefig(f"{carpeta_graficas}/promedios_lineal.png", bbox_inches='tight')
plt.close()

# Versión logarítmica
plt.figure(figsize=(12, 6))
plt.bar(promedios.index, promedios.values, color=['#1f77b4', '#ff7f0e', '#2ca02c', '#d62728', '#9467bd'])
plt.title("Comparación de tiempos promedio (escala logarítmica)")
plt.xlabel("Programa")
plt.ylabel("Tiempo promedio (segundos)")
plt.yscale('log')  # Escala logarítmica
plt.grid(axis='y', which='both', linestyle='--', alpha=0.7)
plt.savefig(f"{carpeta_graficas}/promedios_logaritmico.png", bbox_inches='tight')
plt.close()

print("¡Gráficas generadas con éxito!")
print(f"Total de gráficas creadas: {5 + 2}")
print(f"Guardadas en: {os.path.abspath(carpeta_graficas)}")
