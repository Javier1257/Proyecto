/*
* Proyecto de Pensamiento Computacional Orientado a Objetos
* Javier Suárez Durán
* A01707380
* 04/01/2020
*/

/*
* Clase Mounstruo, define los atributos y metodos 
* de todos los mounstruos que pueden aparecer 
* como adeversarios.
*/

#ifndef CLASEMOUNSTRUO_H_
#define CLASEMOUNSTRUO_H_

#include <iostream>
using namespace std;

class Mounstruo {
	private:
		// Declara los atributos de la clase
		string nombre;
		int vida;
		int ataque;
		int defensa;
		
	public:
		// Constructores
		Mounstruo();
		Mounstruo(string, int, int, int);
		// Setters
		void set_nombreMounstruo(string);
		void set_vidaMounstruo(int);
		void set_ataqueMounstruo(int);
		void set_defensaMounstruo(int);
		// Getters
		string get_nombreMounstruo();
		int get_vidaMounstruo();
		int get_ataqueMounstruo();
		int get_defensaMounstruo();
		// Metodo
		int zarpaso(int);
	
};

/** Constructor por default
* 
* @param
* @return Objeto Mounstruo
*/
Mounstruo :: Mounstruo() {
	nombre = "";
	vida = 0;
	ataque = 0;
	defensa = 0;
}

/**
* Constructor donde recibe los atributos de la clase
* 
* @param string nm: el nombre del mounstruo, int hp: la vida del mounstruo, int d: el defensa del mounstruo
* @return Objeto Mounstruo
*/
Mounstruo :: Mounstruo(string nm, int hp, int atk, int def) {
	nombre = nm;
	vida = hp;
	ataque = atk;
	defensa = def;
}

/**
* Setter nombreMounstruo
* 
* @param string nm: nombre del mounstruo
* @return
*/
void Mounstruo :: set_nombreMounstruo(string nm) {
	nombre = nm;
}

/**
* Setter vidaMounstruo
* 
* @param int hp: vida del mounstruo
* @return
*/
void Mounstruo :: set_vidaMounstruo(int hp) {
	vida = hp;
}

/**
* Setter ataqueMounstruo
* 
* @param int atk: ataque del mounstruo
* @return
*/
void Mounstruo :: set_ataqueMounstruo(int atk) {
	ataque = atk;
}

/**
* Setter defensaMounstruo
* 
* @param int def: defensa del mounstruo
* @return
*/
void Mounstruo :: set_defensaMounstruo(int def) {
	defensa = def;
}

/** 
* Getter nombreMounstruo
* 
* @param
* @return string nombre del mounstruo
*/
string Mounstruo :: get_nombreMounstruo() {
	return nombre;
}

/**
* Getter vidaMounstruo
* 
* @param
* @return int vida del mounstruo
*/
int Mounstruo :: get_vidaMounstruo() {
	return vida;
}

/**
* Getter ataqueMounstruo
* 
* @param
* @return int ataque del mounstruo
*/
int Mounstruo :: get_ataqueMounstruo() {
	return ataque;
}

/** 
* Getter defensaMounstruo
* 
* @param
* @return int defensa del Mounstruo
*/
int Mounstruo :: get_defensaMounstruo() {
	return defensa;
}

/**
* Genera un valor de ataque a traves de la acción
* simulada de que el mounstruo golpea contundentemente 
* con su zarpa al adversario generando mas daño de lo
* normal.
* 
* @param int ataque: ataque del mounstruo
* @return int ataque del golpe
*/
int Mounstruo :: zarpaso(int atk) {
	ataque = atk + 150;
	return ataque;
}





#endif //CLASEMOUNSTRUO_H_