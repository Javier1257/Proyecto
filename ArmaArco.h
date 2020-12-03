/*
* Proyecto de Pensamiento Computacional Orientado a Objetos
* Javier Suárez Durán
* A01707380
* 04/01/2020
*/

/*
* Clase Arco, clase hija de la clase arma
* donde se definen los atributos y metodos generales
* de todos los arcos posibles.
*/

#include <iostream>
using namespace std;

#include "ClaseArma.h"

class Arco : public Arma {
	private : 
		// Declara los atributos de la clase
		int ataqueFlechaEsp;
		
	public :
		// Constructores
		Arco();
		Arco(string, int, int);
		// Getter
		void set_ataqueFlechaEsp(int);
		// Setter	
		int get_ataqueFlechaEsp();
		
};

/**
* Constructor default
* 
* @param
* @return Objeto Arco
*/
Arco :: Arco():Arma() {
	ataqueFlechaEsp = 0;
}

/**
* Constructor que recibe los atributos de la clase
*
* @param string nm: nombre del arco, int atk: ataque del arco, int afE: ataque de la flecha especial
* @return Objeto Arco
*/
Arco :: Arco(string nm, int atk, int afE):Arma(nm, atk) {
	ataqueFlechaEsp = afE;
}

/**
* Setter ataqueFlechaEsp
* 
* @param int afE: ataque de la flecha especial
* @return
*/
void Arco :: set_ataqueFlechaEsp(int afE) {
	ataqueFlechaEsp = afE;
}

/**
* Getter ataqueFlechaEsp
* 
* @param 
* @return int ataqueFlechaEsp ataque de la flecha especial
*/
int Arco :: get_ataqueFlechaEsp() {
	return ataqueFlechaEsp;
}

