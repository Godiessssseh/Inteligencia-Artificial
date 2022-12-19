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
		Restricciones(int res_id, int res_type, bool bosd, int res_1, int res_2);
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

Restricciones::Restricciones(int res_id, int res_tipe, bool bod, int res_1, int res_2){
    r_id = res_id;
    r_tipo = res_tipe;
    rdorb = bod;
    r_1 = res_1;
    r_2 = res_2;
}
