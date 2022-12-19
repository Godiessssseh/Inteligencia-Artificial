#include <iostream>
#include <vector>

using namespace std;
//Se crearan las clases correspondientes
//Quizas a futuro tengo que agregar mas cosas aqui, como obtener IDs, o para comparar al futuro

class Entidades
{
	int ent_id, gid; // ID Entidad, ID grupo
	float espacio_ent; // Espacio de la entidad
	public:
		Entidades();
		Entidades();
		Entidades(int entidad_id, int idgrupo, float entidad_espacio);
    };

//Como se está trabajando con clases, es necesario armar los constructores y destructores.

Entidades::Entidades(){
}

Entidades::~Entidades(){
}

//Luego armamos el formato entregado por el archivo de input.

/* Constructor con parámetros
- entidad_id -> id de la entidad
- idgrupo -> id del grupo de entidades
- entidad_espacio -> espacio requerido por la entidad
*/

Entidades::Entidades(int entidad_id, int idgrupo, float entidad_espacio){
    ent_id = entidad_id;
    gid = idgrupo;
    espacio_ent = entidad_espacio;
}