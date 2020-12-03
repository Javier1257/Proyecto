/*
* Proyecto de Pensamiento Computacional Orientado a Objetos
* Javier Suárez Durán
* A01707380
* 04/01/2020
*/

/*
* Clase Guerrero, clase hija de la clase personaje
* dende se definen los métodos únicos de este
* personaje.
*/

#include <iostream>
using namespace std;

#include "ClasePersonaje.h"					// Clase padre

class Guerrero : public Personaje {
	public :
		// Constructor
		Guerrero(string, int, int);
		
		//Metodo
		int golpe();
		
};

/**
* Constructor que recibe los atributos de la clase
* 
* @param string nm: nombre del guerrero, int hp: vida del guerrero, int m: mana del guerrero
* @return Objeto Arquero
*/
Guerrero :: Guerrero(string nm, int hp, int m):Personaje(nm, hp, m) {
}

/**
* Genera un valor de ataque a traves de la acción
* simulada de que el guerrero golpea iraciblemente
* a su adversario.
* 
* @param
* @return int ataque del golpe
*/
int Guerrero :: golpe() {
	int ataque = 300;
	return ataque;
}
