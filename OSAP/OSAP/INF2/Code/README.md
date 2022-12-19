# Informe 2: OSAP
>Fecha entrega: Miércoles 1 de Noviembre del 2022  
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

## A tener en cuenta
Los archivos tienen que tener bien escrito "ENTITIES", "CONSTRAINTS", "ROOMS", debido a que cuando se extraiga la información de ellos, tienen que estar exactamente iguales

En esta entrega de la tarea, solo se avanzó muy poco en el código, por lo que este no va a correr! (main.cpp está casi vació, además de que faltan definir variables, pero aun así tiene muchas ideas para armar en la prox entrega :D)


## Make

Para correr la tarea, simplemente aplicar el comando make main (como se muestra en el makefile)

Para limpiar los archivos, se debe aplicar el comando make clean