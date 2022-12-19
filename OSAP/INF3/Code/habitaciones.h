#include <iostream>
#include <vector>

using namespace std;

//Se crearan las clases correspondientes
//Quizas a futuro tengo que agregar mas cosas aqui, como obtener IDs, o para comparar al futuro

class Habitaciones
{
	int h_id, p_id; //id habitacion, id del piso
	float h_espac; // espacio habitacion
    vector<int> h_ady; // habitaciones adyacentes
	public:
		Habitaciones();
		Habitaciones();
		Habitaciones(int habit_id, int piso_id, float espaciohab, vector<int> adyacenteshab);
        int obt_hid();
		int obt_pid();
		float obt_espacio();
        void save_habitaciones(int hid, int pid, float hespacio, vector<int> ady);
        vector<int> h_adj();
    };

//Como se está trabajando con clases, es necesario armar los constructores y destructores.

Habitaciones::Habitaciones(){
}

Habitaciones::~Habitaciones(){
}

//Luego armamos el formato entregado por el archivo de input.

/* Constructor con parámetros
- habit_id -> id de la habitacion
- piso_id -> id del piso de la habitacion
- espaciohab -> espacio de la habitacion
- adyacenteshab -> habitaciones adyacentes a la habitacion actual.
*/

Habitaciones::Habitaciones(int habit_id, int piso_id, float espaciohab, vector<int> adyacenteshab){
    h_id = habit_id;
    p_id = piso_id;
    h_espac = espaciohab;
    h_ady = adyacenteshab;
}

/* Retorna el id de la habitacion */

int Habitaciones::obt_hid(){
    return h_id;
}

/* Retorna el id del piso de habitacion */

int Habitaciones::obt_pid(){
    return p_id;
}

/* Retorna el espacio de la habitacion */

float Habitaciones::obt_espacio(){
    return h_espac;
}

/* Retorna las habitaciones adyacentes a la habitacion actual */

vector<int> Habitaciones::h_adj(){
    return h_ady;
}

/* Guardar lo leído en el .txt! */

void Habitaciones::save_habitaciones(int hid, int pid, float hespacio, vector<int> ady){
    h_id = hid;
    p_id = pid;
    h_espac = hespacio;
    h_ady = ady;
}