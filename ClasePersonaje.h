/*
* Proyecto de Pensamiento Computacional Orientado a Objetos
* Javier Suárez Durán
* A01707380
* 04/01/2020
*/

/*
* Clase Personaje, define los atributos de todos los 
* personajes usables.
*/

#ifndef CLASEPERSONAJE_H_
#define CLASEPERSONAJE_H_

#include <iostream>
using namespace std;

class Personaje {
	private:
		// Declara los atributos de la clase
		string nombre;
		int vida;
		int mana;

	public: 
		// Constructores
		Personaje();
		Personaje(string, int, int);
		// Setters
		void set_nombrePersonaje(string);
		void set_vidaPersonaje(int);
		void set_manaPersonaje(int);
		// Getters
		string get_nombrePersonaje();
		int get_vidaPersonaje();
		int get_manaPersonaje();
			
};

/**
* Constructor por default
* 
* @param
* @return Objeto Personaje
*/
Personaje :: Personaje() {
	nombre = "";
	vida = 0;
	mana = 0;
}

/**
* Constructor donde recibe los atributos de la clase
* 
* @param string nm: el nombre del personaje, int hp: la vida del personaje, int m: el mana del personaje
* @return Objeto Personaje
*/
Personaje :: Personaje(string nm, int hp, int m) {
	nombre = nm;
	vida = hp;
	mana = m;
}

/**
* Setter nombrePersonaje
* 
* @param string nm: nombre del personaje
* @return
*/
void Personaje :: set_nombrePersonaje(string nm) {
	nombre = nm;
}

/**
* Setter vidaPersonaje
* 
* @param int hp: vida del personaje
* @return
*/
void Personaje :: set_vidaPersonaje(int hp) {
	vida = hp;
}

/**
* Setter manaPersonaje
* 
* @param int m: mana del personaje
* @return
*/
void Personaje :: set_manaPersonaje(int m) {
	mana = m;
}

/**
* Getter nombrePersonaje
* 
* @param
* @return string nombre del personaje
*/
string Personaje :: get_nombrePersonaje() {
	return nombre;
}

/**
* Getter vidaPersonaje
* 
* @param
* @return int vida del personaje
*/
int Personaje :: get_vidaPersonaje() {
	return vida;
}

/**
* Getter manaPersonaje
* 
* @param
* @return int mana del personaje
*/
int Personaje :: get_manaPersonaje() {
	return mana;
}

#endif //CLASEPERSONAJE_H_