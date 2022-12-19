#include <iostream>
#include <vector>

using namespace std;

//Se crearan las clases correspondientes
//Quizas a futuro tengo que agregar mas cosas aqui, como obtener IDs, o para comparar al futuro

class Restricciones
{
	int r_id, r_tipo, r_1, r_2; // Id restriccion, tipo de restriccion, primer y segundo parametro de la restriccion
	bool rdorb; // Revisar si es blanda o dura (0 1)
	public:
		Restricciones();
		Restricciones();
		Restricciones(int res_id, int res_tipo, bool bod, int res_1, int res_2);
        int obt_rid();
		int obt_rtipo();
		int obt_c1();
		int obt_c2();
		bool obt_bod();
        void save_restricciones(int res_id, int res_tipo, bool bod, int res_1, int res_2);
    };

//Como se está trabajando con clases, es necesario armar los constructores y destructores.

Restricciones::Restricciones(){
}

Restricciones::~Restricciones(){
}

//Luego armamos el formato entregado por el archivo de input.

/* Constructor con parámetros
- res_id -> id de la restriccion
- res_tipo -> tipo de restriccion
- bod -> 0 si es restriccion blanda, 1 si es dura
- res_1 -> primer parametro de la restriccion
- res_2 -> segundo parametro de la restriccion
*/

Restricciones::Restricciones(int res_id, int res_tipo, bool bod, int res_1, int res_2){
    r_id = res_id;
    r_tipo = res_tipo;
    rdorb = bod;
    r_1 = res_1;
    r_2 = res_2;
}

/* Retorna el id de la restriccion */


int Restricciones::obt_rid(){
    return r_id;
}

/* Retorna el tipo de la restriccion */


int Restricciones::obt_rtipo(){
    return r_tipo;
}

/* Retorna el primer parametro de la restriccion */


int Restricciones::obt_c1(){
    return r_1;
}

/* Retorna el segundo parametro de la restriccion */

int Restricciones::obt_c2(){
    return r_2;
}

/* Retorna si la restriccion es blanda o dura respectivamente */


bool Restricciones::obt_bod(){
    return rdorb;
}

/* Guardar las restricciones desde el .txt! */

void Restricciones::save_restricciones(int res_id, int res_tipo, bool bod, int res_1, int res_2){
    r_id = res_id;
    r_tipo = res_tipo;
    rdorb = bod;
    r_1 = res_1;
    r_2 = res_2;
}
