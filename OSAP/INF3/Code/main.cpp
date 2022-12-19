//Clases necesarias para poder utilizar el main :D
#include "entidades.h"
#include "habitaciones.h"
#include "restricciones.h"
#include <fstream>
#include <iostream>
#include <vector>

//Variables Globales!

int params[6];
vector<Entidades> entidades;
vector<Habitaciones> habitaciones;
vector<Restricciones> rest_blnd, rest_dur;


//Aqui definire todas las restricciones -> despues iran definidas mas abajo!

void leer_instancia(string path);
bool entidad_una_habitacion(vector<vector<int>> i);  
bool asignacion(Habitaciones h, Entidades e, vector<vector<int>> i);
bool asignacion_prohibida(Habitaciones h, Entidades e, vector<vector<int>> i);
bool misma_habitacion(Entidades e1, Entidades e2, vector<vector<int>> i);
bool distinta_habitacion(Entidades e1, Entidades e2, vector<vector<int>> i);
bool habitacion_sincompartir(Entidades e, vector<vector<int>> i);
bool adyacencia(Entidades e1, Entidades e2, vector<vector<int>> i); 
bool cercania(Entidades e1, Entidades e2, vector<vector<int>> i);
bool lejania(Entidades e1, Entidades e2, vector<vector<int>> i);
bool capacidad(Habitaciones h, vector<vector<int>> i);

//Aqui comienza el codigo para que funcione cbj
int main(int argc, char* argv[])
{
    //No se trabajo :c **ïnserte gato triste**
	//aqui se debe trabajar CBJ!
    //Quizas podria separarlo en dos algoritmos como lo hice en el informe(?) 
}


//Leer el archivo .txt que sea entregado en el main!

void leer_instancia(string path){  //Se lee la instancia y crea vetor de entidades habitaciones restricciones duras y blandas
	Entidades e;
    vector<int> list_adj; //lista de adyacencia de habitaciones
    Habitaciones h; 
    Restricciones r;

    string palabra;
    int temp1, temp2, temp4, temp5;
    float temp3;
    int i, j; //#entidades [0], #habitaciones[1], #pisos[2], #restricciones total[3], #rest. duras [4] y #rest. blandas[5]

    ifstream instance (path);	//Forma para abrir el archivo!
	if (instance.is_open())		//Si la instancia es abierta
    {
    	for(i = 0; i < 6 ; i++ ) //Se guardan los parametros en el orden de arriba!
    	{
      	instance >> palabra >> params[i];	//ENTITIES, ROOMS O CONSTRAINTS!
    	}

    	while(instance){
      	instance >> palabra;	//La usaremos para revisar el archivo pasito a pasito
      	cout << palabra << endl;
      	if( palabra == "ENTITIES"){	//Tiene que estar bien escrito D:
        	for (i = 0; i < params[0]; ++i)
        	{
          	instance >> temp1  >> temp2 >> temp3;
          	e.save_entidad(temp1, temp2, temp3);	//Guardar la entidad -> id entidad, id grupo, espacio
          	entidades.push_back(e);		//Siguiente linea
        	}
      	}
      	else if( palabra == "ROOMS"){		//Tiene que estar bien escrito D:
        	i = 0;
        	while(i < params[1]){
          	list_adj.clear();		//Se limpia en caso de que tenga valores o ya exista.
          	instance >> temp1;
          	instance >> temp2;
          	instance >> temp3;
          	instance >> temp4;
          	for(j = 0; j < temp4; j++){
            	instance >> temp5;
            	list_adj.push_back( temp5);
          	}
          	h.save_habitaciones(temp1, temp2, temp3, list_adj);	//Guardar la habitacion -> id habit, id piso, espacio, lista ady
          	habitaciones.push_back(h);
          	i++;
        	}
      	}
      	else if( palabra == "CONSTRAINTS"){	//Tiene que estar bien escrito D:
        	for (i = 0; i < params[3]; ++i)
        	{
			instance >> temp1  >> temp2 >> temp3 >> temp4 >> temp5;
			r.save_restricciones(temp1, temp2, temp3, temp4, temp5);		//Guardar la restriccion -> id rest, tipo rest, blanda o dura, parametro 1, parametro 2
			if(temp3  == 0)
				rest_blnd.push_back(r);
			else
				rest_dur.push_back(r);
			}
        	break; 
      	}
      	else
        	cout << "Revisar el dataset :c Hay algo mal escrito." << endl; 
    	}
    	instance.close();
  	}
  	else 
    	cout << "Error al abrir el archivo";
}             


//Verificar que exista una entidad en una habitacion
bool entidad_una_habitacion(vector<vector<int>> i){
  	int x, y, contador;
  	for(x=0; (unsigned)x < i.size(); x++){
		contador = 0;
		for(y=0; (unsigned)y < i[x].size(); y++)
		{
			if(i[x][y] == 1){
				contador++;
			}
		}if (contador > 1){
			return false;
		}
		
	}
	return true;
}


//Verificar que se cumpla la restricción de asignación
//Necesito la habitacion y la entidad, ademas de un posible vector para asignar
bool asignacion(Habitaciones h, Entidades e, vector<vector<int>> i){
	if(i[e.obt_entid()][h.obt_hid()] == 1)	//Revisamos los id de entidad y habitacion para ver si una entidad fue asignada a una habitacion!
	{
		return true;
	}
	return false;
}	


//Verificar que se cumpla la restricción de asignación prohibida
//Necesito la habitacion y la entidad, ademas de un posible vector para revisar si es una asignacion prohibida.
bool asignacion_prohibida(Habitaciones h, Entidades e, vector<vector<int>> i){
	if(i[e.obt_entid()][h.obt_hid()] == 0)	//Revisamos los id de entidad y habitacion para ver si una entidad NO fue asignada a una habitacion!
	{
		return true;
	}
	return false;
}	


//Verificar que se cumpla la restricción de dos entidades en la misma habitacion
//Necesito de dos entidades y un vector, para revisar si estan dentro de la misma habitacion
bool misma_habitacion(Entidades e1, Entidades e2, vector<vector<int>> i){
	int cont;
	for (cont = 0; cont < params[1]; cont++)
	{
		if (i[e1.obt_entid()][cont] == 1 and i[e2.obt_entid()][cont] == 1)		//Revisamos si dos entidades están en la misma habitación!
		{
			return true;
		}
	}
	return false;
	
}


//Verificar que se cumpla la restricción de dos entidades en habitaciones distintas
//Necesito de dos entidades y un vector, para revisar que estan en distintas habitaciones!
bool distinta_habitacion(Entidades e1, Entidades e2, vector<vector<int>> i){
 	int x, contador = 0;
  	for (x = 0; x < params[1]; x++)
  	{
    	if(i[e1.obt_entid()][x] != i[e2.obt_entid()][x] or (i[e1.obt_entid()][x] == 0 and i[e2.obt_entid()][x] == 0))	//Revisamos si dos entidades NO están en la misma habitación!
      	contador++;
  	}
  	if(contador == params[1])
    	return true;
  	return false;
}


//Verificar que se cumpla la restricción de que no se comparte una habitación
//Necesito de la entidad y un vector para verificar que la habitacion este sin compartir
bool habitacion_sincompartir(Entidades e, vector<vector<int>> i){
	int x = 0, k;
  	bool  hab_no_encontrada = true;
  	while(x < params[1] and hab_no_encontrada){
    	if(i[e.obt_entid()][x] == 1){
      	
			hab_no_encontrada = false;
      	
			for(k = e.obt_entid()-1; k >= 0; k--){	
        		if(i[k][x] == 1){
          			return false;
        		}
      		}

      		for(k = e.obt_entid()+1; (unsigned)k < i.size(); k++){
        		if(i[k][x] == 1){
          			return false;
        		}
      		}
    	}
    x++;
  	} 
  	if(hab_no_encontrada) //La entidad no fue asignada a ninguna habitación, F 
    	return false;
  	return true;	//Si se asigno :D
}


//Verificar que se cumpla la restricción de entidades adyacentes
//Necesito de dos entidades y un vector, para revisar la adyacencia!
bool adyacencia(Entidades e1, Entidades e2, vector<vector<int>> i){
	int x, he1, he2;
	vector<int> ady_e1;
	for (x = 0; x < params[1]; x++)
	{
		if(i[e1.obt_entid()][x]== 1){	//Revisar si el id es igual
			he1 = x;
		}
		if(i[e2.obt_entid()][x]== 1){	//Revisar el id
			he2 = x;
		}
	}	
	ady_e1 = habitaciones[he1].h_adj();		//Habitaciones adyacentes!
  	for (x = 0; (unsigned)x < ady_e1.size(); x++)
  		{
    	if(he2 == ady_e1[x])	//Son adyacentes?
      	return true;	//YES!
  		}
  	return false;	//NO F :c
}

//Verificar que se cumpla la restricción de entidades cercanas
//Necesito de dos entidades y un vector, para comparar la cercania!
bool cercania(Entidades e1, Entidades e2, vector<vector<int>> i){
	int x;
	int he1 = -1 , he2 = -1;
	vector<int> ady_e1;
	for (x = 0; (unsigned)x < i[0].size(); x++)
	{
		if(i[e1.obt_entid()][x]== 1){	//Revisar si el id es igual
			he1 = x;
		}
		if(i[e2.obt_entid()][x]== 1){	//Revisar el id
			he2 = x;
		}
	}	
	if(he1 == -1 or he2 == -1)	//Si es -1, significa que una entidad no ha sido asignada!!!
		return false;	
	if(habitaciones[he1].obt_pid() == habitaciones[he2].obt_pid())	//Si fueron asignadas en el mismo piso, existe cercanía!!
		return true;

	return false;
}


//Verificar que se cumpla la restricción entidades lejanas
//Necesito de dos entidades y un vector, para comparar la lejania entre ambas!
//Es idéntica a la función anterior con la diferencia de que los return están al revés!!
bool lejania(Entidades e1, Entidades e2, vector<vector<int>> i){
	int x, he1, he2; 
  	vector<int> ady_e1;
  	for (x = 0; (unsigned)x < i[0].size(); x++)
  	{
    	if(i[e1.obt_entid()][x] == 1){
      		he1 = x;
    	}
    	if(i[e2.obt_entid()][x] == 1){
      		he2 = x;
   	 	}
  	}
	if(habitaciones[he1].obt_pid() == habitaciones[he2].obt_pid()){
		return false;
  	}
  	return true;
}


//Verificar que se cumpla la restricción de la capacidad de la habitacion
//Necesito la habitacion y un vector para ver la capacidad.
bool capacidad(Habitaciones h, vector<vector<int>> i){
  	int x;
  	float ocupado = 0;
  	for (x = 0; (unsigned)x < i.size(); x++)
  	{
    	if(i[x][h.obt_hid()]){
      	ocupado += entidades[x].obt_espacio();
    	}    
  	}
  	if(ocupado <= h.obt_espacio())	//Verificamos que se cumpla! 
    	return true;
  	return false;
}


