# Informe 3: OSAP
>Fecha entrega: Jueves 1 de Diciembre del 2022  
>Diego Rosales Leon, *201810531-7*, paralelo 200  

Proyecto de Inteligencia Artificial (UTFSM-INF295) que busca resolver instancias para Office Space Allocation Problem (OSAP) mediante la técnica de búsqueda completa CBJ (Conflict-based backjumping).

## Prerequisitos
Tener en una terminal el compilador g++ instalado.

## Estructura de los archivos
>**main.cpp**: tiene el código de fuente

>**entidad.h**: es un header con las declaraciones de las entidades. 

>**restriccciones.h**: es un header con las declaraciones de las restricciones.

>**habitaciones.h**: es un header con las declaraciones de las habitaciones.

>**Instancias**: es una carpeta que contiene todas las instancias para la ejecución


## Make

Para correr la tarea, simplemente aplicar el comando make main (como se muestra en el makefile)

Para limpiar los archivos, se debe aplicar el comando make clean

## A tener en cuenta

- Los archivos tienen que tener bien escrito "ENTITIES", "CONSTRAINTS", "ROOMS", debido a que cuando se extraiga la información de ellos, tienen que estar exactamente iguales

- En esta entrega no se  no se implementó CBJ pero si se avanzó en la creación de los headers de las funciones para facilitar la obtención de cosas + la creación de todas las restricciones! Por lo qué el código NO entregará resultados. 