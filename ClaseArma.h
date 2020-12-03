/*
* Proyecto de Pensamiento Computacional Orientado a Objetos
* Javier Suárez Durán
* A01707380
* 04/01/2020
*/

/*
* Clase Arma, define los atributos generales de todas
* las armas posibles.
*/

#ifndef CLASEARMA_H_
#define CLASEARMA_H_

#include <iostream>
using namespace std;

class Arma {
	private:
		// Declara los atributos de la clase
		int ataque;
		string nombre;
		
	public:
		// Constructores
		Arma();
		Arma(string, int);
		// Setter
		void set_nombreArma(string);
		// Getters
		string get_nombreArma();
		int get_ataqueArma();
		
};

/**
* Constructor por default
* 
* @param
* @return Objeto Arma
*/
Arma :: Arma() {
	nombre = "";
	ataque = 0;
};

/**
* Contructor que recibe los atributos de la clase
* 
* @param string nm: nombre del arma, int atk: ataque del arma
* @return Objeto Arma
*/
Arma :: Arma(string nm, int atk) {
	nombre = nm;
	ataque = atk;
};

/**
* Setter nombreArma
* 
* @param string nm: nombre del arma
* @return
*/
void Arma :: set_nombreArma(string nm) {
	nombre = nm;
};

/**
* Getter nombreArma
* 
* @param
* @return string nombre del arma
*/
string Arma :: get_nombreArma() {
	return nombre;
};

/**
* Getter ataqueArma
* 
* @param
* @return int ataque del arma
*/
int Arma :: get_ataqueArma() {
	return ataque;
};


#endif //CLASEARMA_H_