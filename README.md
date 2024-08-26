# Implementación de Tabla Hash en C++

## ¿Qué es una Tabla Hash?

Una tabla hash es una estructura de datos que implementa un tipo de datos abstracto llamado diccionario o mapa asociativo. Permite almacenar y recuperar datos de manera eficiente basándose en claves únicas.

### Características principales:

1. **Rápido acceso**: Las operaciones de inserción, búsqueda y eliminación tienen un tiempo promedio de O(1) (tiempo constante).
2. **Asociación clave-valor**: Cada elemento almacenado consiste en una clave única y su valor asociado.
3. **Función hash**: Utiliza una función hash para transformar las claves en índices de un array.

## ¿Para qué se usa una Tabla Hash?

Las tablas hash son ampliamente utilizadas en programación debido a su eficiencia. Algunos usos comunes incluyen:

1. **Caché**: Para almacenar resultados de operaciones costosas.
2. **Bases de datos**: Como índices para acceso rápido a registros.
3. **Conteo de frecuencias**: Para contar ocurrencias de elementos en un conjunto de datos.
4. **Eliminación de duplicados**: Para almacenar elementos únicos de un conjunto.
5. **Asociaciones**: Para mantener pares clave-valor, como diccionarios o mapas.

## Sobre este proyecto

Este proyecto implementa una tabla hash básica en C++ para gestionar una agenda de contactos. Características principales:

- Utiliza encadenamiento para manejar colisiones.
- Implementa operaciones básicas: inserción, búsqueda y eliminación.
- Incluye una función para imprimir todos los elementos de la tabla.

### Estructura del proyecto:
(Ejemplo de una libreta de telefónos.  Usada con mucha utilidad en el siglo pasado, "Conocidad como: PAGINAS BLANCAS"
- `HashTable.h` y `HashTable.cpp`: Implementación de la tabla hash.
- `Nodo.h` y `Nodo.cpp`: Definición de los nodos para el encadenamiento.
- `Data.h` y `Data.cpp`: Clase para almacenar los datos de cada contacto.
- `main.cpp`: Programa de ejemplo que demuestra el uso de la tabla hash.
- `Makefile`: Para facilitar la compilación del proyecto.

### Cómo usar:

1. Clona este repositorio.
2. Navega al directorio del proyecto.
3. Ejecuta `make` para compilar.
4. Ejecuta `./libretatelefono` para ver una demostración.

### Ejemplo de salida:

Cuando ejecutes el programa, verás una salida similar a esta:

```
Contenido de la agenda:
Bucket 0:
 └─Nombre: Maria, Teléfono: 098-765-4321
Bucket 1:
Bucket 2:
 └─Nombre: Ana, Teléfono: 444-555-6666
Bucket 3:
 └─Nombre: Luis, Teléfono: 777-888-9999
Bucket 4:
Bucket 5:
Bucket 6:
 └─Nombre: Pedro, Teléfono: 111-222-3333
Bucket 7:
Bucket 8:
 └─Nombre: Juan, Teléfono: 123-456-7890
Bucket 9:

Búsqueda exitosa: Nombre: Maria, Teléfono: 098-765-4321

Se eliminó a Juan de la agenda

Contenido actualizado de la agenda:
Bucket 0:
 └─Nombre: Maria, Teléfono: 098-765-4321
Bucket 1:
Bucket 2:
 └─Nombre: Ana, Teléfono: 444-555-6666
Bucket 3:
 └─Nombre: Luis, Teléfono: 777-888-9999
Bucket 4:
Bucket 5:
Bucket 6:
 └─Nombre: Pedro, Teléfono: 111-222-3333
Bucket 7:
Bucket 8:
Bucket 9:
```

Esta salida muestra:
1. El contenido inicial de la agenda. (10 hojas o Bucket en la libreta)
2. El resultado de una búsqueda exitosa.
3. La confirmación de la eliminación de un contacto.
4. El contenido actualizado de la agenda después de la eliminación. (libreta de 10 hojas "bucket" en la libreta)

Este proyecto sirve como una introducción práctica a las tablas hash y puede ser utilizado como base para implementaciones más complejas o especializadas.
