/*
* Proyecto de Pensamiento Computacional Orientado a Objetos
* Javier Suárez Durán
* A01707380
* 04/01/2020
*/

/*
* Clase Arquero, clase hija de la clase personaje
* donde se definen los métodos únicos de este tipo de
* personaje
*/

#include <iostream>
using namespace std;

#include "ClasePersonaje.h"					// Clase padre

class Arquero : public Personaje {
	public :
		// Constructor
		Arquero(string, int, int);
		
		// Metodos
		int disparar(int);
		int lanzarDaga();
		
};

/**
* Constructor que recibe los atributos de la clase
* 
* @param string nm: nombre del arquero, int hp: vida del arquero, int m: mana del arquero
* @return Objeto Arquero
*/
Arquero :: Arquero(string nm, int hp, int m):Personaje(nm, hp, m) {
}

/**
* Recibe el daño que hace el arma y lo transmite para 
* simular que el Arquero esta lanzando o disparando unary_function
* flecha.
*
* @param int atk: ataque del arma
* @return int ataque del dsiparo
*/
int Arquero :: disparar(int atk) {
	int ataque = atk;
	return ataque;
}

/**
* Genera un valor de ataque a traves de la acción
* simulada de que el arquero arroja una daga a su 
* adversario.
* 
* @param
* @return int ataque del golpe con la daga
*/
int Arquero :: lanzarDaga() {
	int ataque = 500;
	return ataque;
}

