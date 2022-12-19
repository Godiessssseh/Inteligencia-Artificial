//Clases necesarias para poder utilizar el main :D
#include "entidades.h"
#include "habitaciones.h"
#include "restricciones.h"

#include <iostream>
#include <vector>


//Aqui definire todas las restricciones -> despues iran definidas mas abajo!
/*
idea de cada restriccion y que variables deberia llevar

bool entidad_una_habitacion() -> que variables necesito? 
bool asignacion() -> habitacion h, entidad e, algun vector a los valores?
bool asignacion_prohibida() -> habitacion h, entidad e, vector nuevamente?
bool misma_habitacion() -> entidad e1, entidad e2, vector?
bool distinta_habitacion() -> entidad e1, entidad e2, vector?
bool habitacion_sincompartir -> entidad e, vector??
bool adyacencia() -> entidad 1, entidad 2, vector??
bool cercania() -> entidad1, entidad2, vector??
bool lejania() -> entidad1, entidad2, vector??
bool capacidad() habitacion h, vector??

*/
void leer_instancia(string path); //Esta es la definicion para leer los archivos!




//Aqui comienza el codigo para que funcione cbj
int main(int argc, char* argv[])
{
    //aqui se debe trabajar CBJ!
    //Quizas podria separarlo en dos algoritmos como lo hice en el informe(?) 
}


void leer_instancias(string path)
{
    //Entities -> entidad
    //Constraints -> restricciones
    // rooms -> habitaciones
    //aqui se buscara la instancia .txt y se leera! 
}

//Verificar que exista una entidad en una habitacion
bool entidad_una_habitacion(vector){}


//Verificar que se cumpla la restricción de asignación
//Necesito la habitacion y la entidad, ademas de un posible vector para asignar
bool asignacion(Habitacion h, Entidad e, vector){}


//Verificar que se cumpla la restricción de asignación prohibida
//Necesito la habitacion y la entidad, ademas de un posible vector para revisar si es una asignacion prohibida.
bool asignacion_prohibida(Habitacion h, Entidad e, vector) 



//Verificar que se cumpla la restricción de dos entidades en la misma habitacion
//Necesito de dos entidades y un vector, para revisar si estan dentro de la misma habitacion
bool misma_habitacion(Entidad e1, Entidad e2, vector){}


//Verificar que se cumpla la restricción de dos entidades en habitaciones distintas
//Necesito de dos entidades y un vector, para revisar que estan en distintas habitaciones!
bool distinta_habitacion(Entidad e1, Entidad e2, vector){}


//Verificar que se cumpla la restricción de que no se comparte una habitación
//Necesito de la entidad y un vector para verificar que la habitacion este sin compartir
bool habitacion_sincompartir(Entidad e, vector){}


//Verificar que se cumpla la restricción de entidades adyacentes
//Necesito de dos entidades y un vector, para revisar la adyacencia!
bool adyacencia(Entidad e1, Entidad e2, vector){}


//Verificar que se cumpla la restricción de entidades cercanas
//Necesito de dos entidades y un vector, para comparar la cercania!
bool cercania(Entidad e1, Entidad e2, vector){}


//Verificar que se cumpla la restricción entidades lejanas
//Necesito de dos entidades y un vector, para comparar la lejania entre ambas!
bool lejania(Entidad e1, Entidad e2, vector){}


//Verificar que se cumpla la restricción de la capacidad de la habitacion
//Necesito la habitacion y un vector para ver la capacidad.
bool capacidad(Habitacion h, vector){}


