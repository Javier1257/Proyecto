/*
* Proyecto de Pensamiento Computacional Orientado a Objetos
* Javier Suárez Durán
* A01707380
* 04/01/2020
*/

/**
* Descripción: Este proyecto es un sencillo 
* simulador de pelea por turnos en el que hay dos 
* posibles tipos de personaje a usar, cada uno 
* con tres posibles armas para utilizar y dos mounstruos
* diferentes que enfrentar, uno por cada tipo de 
* personaje.
*/


// Bibliotecas
#include <iostream>					// Para imprimir
using namespace std;
#include "ClasePersonaje.h"			//Clases
#include "PersonajeArquero.h"
#include "PersonajeGuerrero.h"
#include "ClaseArma.h"
#include "ArmaArco.h"
#include "ArmaEspadaEscudo.h"
#include "ClaseMounstruo.h"

// Menu de opciones para el personaje Arquero
void menuOpcionesArquero() {
	cout << "1.- Disparar" << endl;
	cout << "2.- Lanzar Daga" << endl;
	cout << "3.- Disparar Flecha Especial" << endl;
	cout << "4.- Regenerar Vida por Mana" << endl;
	cout << "Digite el numero de su eleccion: " << endl;
}
// Construcción y combate del personaje de tipo Arquero
int personajeArquero() {
	// Variables necesarias para desarrollar la función
	int op;
	string nombre;
	Arco bow1("Arco de la Llama Eterna", 240, 250);
	Arco bow2("Arco Explosivo", 140, 700);
	Arco bow3("Arco del Rencor", 190, 150);
	Arco wp[3] = {bow1, bow2, bow3};
	int i;
	int ataque;
	int defensa;
	int fEsp;
	int mana;
	int y;
	
	// Construccion del Arquero
	cout << endl;
	cout << "Ingrese un nombre para su Arquero: " << endl;
	cin >> nombre;
	Arquero Arq(nombre, 800, 400);
	cout << endl;
	cout << "Estas son tus estadisticas" << endl;
	cout << "Vida: " << Arq.get_vidaPersonaje() << endl;
	cout << "Mana: " << Arq.get_manaPersonaje() << endl;
	cout << "Dagas Ataque: " << Arq.lanzarDaga() << endl;
	cout << endl;
	cout << "Escoja un Arco para su Arquero" << endl;
	cout << "1.- Arco de la Llama Eterna: " << "Ataque: 240 " << "Flechas Igneas, Ataque: 250" << endl;
	cout << "2.- Arco Explosivo: " << "Ataque: 140 " << "Flechas Explosivas, Ataque: 700" << endl;
	cout << "3.- Arco del Rencor: " << "Ataque: 190 " << "Flechas Venenosas, Ataque: 150" << endl;
	cout << "Digite el numero de su eleccion: " << endl;
	cin >> op;
	while (op >= 4 or op <= 0) {
		cout << "ERROR, Opcion invalida, digite el numero de su eleccion: " << endl;
		cin >> op;
	}
	if (op == 1) {
		i = 0;
	}
	else if (op == 2) {
		i = 1;
	}
	else if (op == 3) {
		i = 2;
	}
	cout << endl;
	
	//Combate del Arquero contra el Mounstruo
	cout << "Empezemos ARQUERO es hora de probar tu fuerza" << endl;
	cout << "Que empiece el combate!" << endl;
	cout << nombre << " destruye al mounstro" << endl;
	Mounstruo m1("Demonio Negro Devorador de Almas", 5000, 115, 50);
	cout << m1.get_nombreMounstruo() << " acaba de entrar al combate" << endl;
	cout << endl;
	
	int vidaM = m1.get_vidaMounstruo();
	int vidaA = Arq.get_vidaPersonaje();
	while (true) {
		// Ataques del Arquero
		for (int x = 1; x <= 3; x++) {
			menuOpcionesArquero();
			cin >> op;
			while (op >= 5 or op <= 0) {
			cout << "ERROR, Opcion invalida, digite el numero de su eleccion: " << endl;
			cin >> op;
			}
			if (op == 1) {
				ataque = wp[i].get_ataqueArma();
				vidaM = m1.get_vidaMounstruo();
				defensa = m1.get_defensaMounstruo();
				vidaM = vidaM - ataque + defensa;
				m1.set_vidaMounstruo(vidaM);
				cout << Arq.get_nombrePersonaje() << " golpeo exitosamente al mountruo" << endl;
				cout << m1.get_nombreMounstruo() << " Vida: " << m1.get_vidaMounstruo() << endl;
			}
			else if (op == 2) {
				ataque = Arq.lanzarDaga();
				vidaM = m1.get_vidaMounstruo();
				defensa = m1.get_defensaMounstruo();
				vidaM = vidaM - ataque + defensa;
				m1.set_vidaMounstruo(vidaM);
				cout << Arq.get_nombrePersonaje() << " golpeo exitosamente al mountruo" << endl;
				cout << m1.get_nombreMounstruo() << " Vida: " << m1.get_vidaMounstruo() << endl;
			}
			else if (op == 3) {
				ataque = wp[i].get_ataqueFlechaEsp();
				vidaM = m1.get_vidaMounstruo();
				defensa = m1.get_defensaMounstruo();
				vidaM = vidaM - ataque + defensa;
				m1.set_vidaMounstruo(vidaM);
				cout << Arq.get_nombrePersonaje() << " golpeo exitosamente al mountruo" << endl;
				cout << m1.get_nombreMounstruo() << " Vida: " << m1.get_vidaMounstruo() << endl;
			}
			else if (op == 4) {
				mana = Arq.get_manaPersonaje();
				vidaA = Arq.get_vidaPersonaje();
				int cura = 50;
				mana = mana - cura;
				Arq.set_manaPersonaje(mana),
				vidaA = vidaA + cura;
				Arq.set_vidaPersonaje(vidaA);
				cout << "Tu vida recupero 50pts";
			}
			cout << endl;
		}
		// Ataque del Mounstruo
		if (y == 4) {
			ataque = m1.get_ataqueMounstruo();
			ataque = m1.zarpaso(ataque);
			vidaA = Arq.get_vidaPersonaje();
			vidaA = vidaA - ataque;
			Arq.set_vidaPersonaje(vidaA);
			cout << m1.get_nombreMounstruo() << " acaba de usar zarpaso en ti" << endl; 
			cout << Arq.get_nombrePersonaje() << " Vida: " << Arq.get_vidaPersonaje() << endl;
		}
		else {
			ataque = m1.get_ataqueMounstruo();
			vidaA = Arq.get_vidaPersonaje();
			vidaA = vidaA - ataque;
			Arq.set_vidaPersonaje(vidaA);
			cout << m1.get_nombreMounstruo() << " acaba de golpearte" << endl;
			cout << Arq.get_nombrePersonaje() << " Vida: " << Arq.get_vidaPersonaje() << endl;
		}
		cout << endl;
		y =+ 1;
		if (vidaM <= 0) {
			cout << "Felecidades ARQUERO " << Arq.get_nombrePersonaje() << " tu victoria es un granito de arena mas por la paz de este mundo" << endl;
			break;
		}
		else if (vidaA <= 0) {
			cout << "FALLASTE, hubieras escogido otra profesion donde fracasar " << Arq.get_nombrePersonaje() << endl;
			break;
		}
	}
	y = 0;
	
	return 0;
}

// Menu de opciones para el personaje Guerrero
void menuOpcionesGuerrero() {
	cout << "1.- Tajo" << endl;
	cout << "2.- Tajo Fuerte" << endl;
	cout << "3.- Golpe Iracundo" << endl;
	cout << "4.- Regenerar Vida por Mana" << endl;
	cout << "Digite el numero de su eleccion: " << endl;
}
// Construccion y combate del personaje de tipo Guerrero
int personajeGuerrero() {
	// Variables necesarias para desarrollar la función
	int op;
	string nombre;
	EspadaEscudo eYe1("Gran Espada y Escudo del Rey", 170);
	EspadaEscudo eYe2("Espada y Escudo del Sacrificio", 100);
	EspadaEscudo eYe3("Espada y Escudo Draconico", 130);
	EspadaEscudo wp[3] = {eYe1, eYe2, eYe3};
	int i;
	int ataque;
	int defensa;
	int mana;
	int y;
	
	// Construccion del Guerrero
	cout << endl;
	cout << "Ingrese un nombre para su Guerrero: " << endl;
	cin >> nombre;
	Guerrero Gro(nombre, 1300, 100);
	cout << endl;
	cout << "Estas son tus estadisticas" << endl;
	cout << "Vida: " << Gro.get_vidaPersonaje() << endl;
	cout << "Mana: " << Gro.get_manaPersonaje() << endl;
	cout << endl;
	cout << "Escoja un Espada y Escudo para su Guerrero" << endl;
	cout << "1.- Gran Espada y Escudo del Rey: " << "Ataque: 170 " << endl;
	cout << "2.- Espada y Escudo del Sacrificio: " << "Ataque: 100 " << endl;
	cout << "3.- Espada y Escudo Draconico: " << "Ataque: 130 " << endl;
	cout << "Digite el numero de su eleccion: " << endl;
	cin >> op;
	while (op >= 4 or op <= 0) {
		cout << "ERROR, Opcion invalida, digite el numero de su eleccion: " << endl;
		cin >> op;
	}
	if (op == 1) {
		i = 0;
	}
	else if (op == 2) {
		i = 1;
	}
	else if (op == 3) {
		i = 2;
	}
	cout << endl;
	
	// Combate del Guerrero contra el Mounstruo
	cout << "Empezemos GUERRERO es hora de probar tu fuerza" << endl;
	cout << "Que empiece el combate!" << endl;
	cout << nombre << " destruye al mounstro" << endl;
	Mounstruo m1("Destructor Sanguinario", 4000, 150, 20);
	cout << m1.get_nombreMounstruo() << " acaba de entrar al combate" << endl;
	cout << endl;
	
	int vidaM = m1.get_vidaMounstruo();
	int vidaG = Gro.get_vidaPersonaje();
	while (true) {
		// Ataque del Guerrero
		for (int x = 1; x <= 3; x++) {
			menuOpcionesGuerrero();
			cin >> op;
			while (op >= 5 or op <= 0) {
			cout << "ERROR, Opcion invalida, digite el numero de su eleccion: " << endl;
			cin >> op;
			}
			if (op == 1) {
				ataque = wp[i].get_ataqueArma();
				vidaM = m1.get_vidaMounstruo();
				defensa = m1.get_defensaMounstruo();
				vidaM = vidaM - ataque + defensa;
				m1.set_vidaMounstruo(vidaM);
				cout << Gro.get_nombrePersonaje() << " golpeo exitosamente al mountruo" << endl;
				cout << m1.get_nombreMounstruo() << " Vida: " << m1.get_vidaMounstruo() << endl;
			}
			else if (op == 2) {
				ataque = wp[i].get_ataqueArma();
				ataque = wp[i].tajoFuerte(ataque);
				vidaM = m1.get_vidaMounstruo();
				defensa = m1.get_defensaMounstruo();
				vidaM = vidaM - ataque + defensa;
				m1.set_vidaMounstruo(vidaM);
				cout << Gro.get_nombrePersonaje() << " golpeo exitosamente al mountruo" << endl;
				cout << m1.get_nombreMounstruo() << " Vida: " << m1.get_vidaMounstruo() << endl;
			}
			else if (op == 3) {
				ataque = Gro.golpe();
				vidaM = m1.get_vidaMounstruo();
				defensa = m1.get_defensaMounstruo();
				vidaM = vidaM - ataque + defensa;
				m1.set_vidaMounstruo(vidaM);
				cout << Gro.get_nombrePersonaje() << " golpeo exitosamente al mountruo" << endl;
				cout << m1.get_nombreMounstruo() << " Vida: " << m1.get_vidaMounstruo() << endl;
			}
			else if (op == 4) {
				mana = Gro.get_manaPersonaje();
				vidaG = Gro.get_vidaPersonaje();
				int cura = 50;
				mana = mana - cura;
				Gro.set_manaPersonaje(mana),
				vidaG = vidaG + cura;
				Gro.set_vidaPersonaje(vidaG);
				cout << "Tu vida recupero 50pts";
			}
			cout << endl;
		}
		// Ataque del Mounstruo
		if (y == 4) {
			ataque = m1.get_ataqueMounstruo();
			ataque = m1.zarpaso(ataque);
			vidaG = Gro.get_vidaPersonaje();
			vidaG = vidaG - ataque;
			Gro.set_vidaPersonaje(vidaG);
			cout << m1.get_nombreMounstruo() << " acaba de usar zarpaso en ti" << endl; 
			cout << Gro.get_nombrePersonaje() << " Vida: " << Gro.get_vidaPersonaje() << endl;
		}
		else {
			ataque = m1.get_ataqueMounstruo();
			vidaG = Gro.get_vidaPersonaje();
			vidaG = vidaG - ataque;
			Gro.set_vidaPersonaje(vidaG);
			cout << m1.get_nombreMounstruo() << " acaba de golpearte" << endl;
			cout << Gro.get_nombrePersonaje() << " Vida: " << Gro.get_vidaPersonaje() << endl;
		}
		cout << endl;
		y =+ 1;
		if (vidaM <= 0) {
			cout << "Felecidades GUERRERO " << Gro.get_nombrePersonaje() << " tu victoria es un granito de arena mas por la paz de este mundo" << endl;
			break;
		}
		else if (vidaG <= 0) {
			cout << "FALLASTE, hubieras escogido otra profesion donde fracasar " << Gro.get_nombrePersonaje() << endl;
			break;
		}
	}
	y = 0;
	
	return 0;
}

// 
int main() {
	// Variable necesaria para la función
	int op;
	
	cout << "Hola!, Bienvenido a este sencillo simulador de pelea por turnos" << endl;
	cout << "Desea participar?" << endl;
	cout << "1.- Si " << endl;
	cout << "2.- No " << endl;
	cout << "Digite el numero de su eleccion: " << endl;
	cin >> op;
	while (op >= 3 or op <= 0) {
			cout << "ERROR, Opcion invalida, digite el numero de su eleccion: " << endl;
			cin >> op;
	}
	cout << endl;
	// Caso 1 en el que el usuario decide participar
	if (op == 1) {
			//Se escoje un tipo personaje
			cout << "Gracias por decidir participar, ahora por favor escoja un personaje: " << endl;
			cout << "1.- Arquero" << endl;
			cout << "2.- Guerrero" << endl;
			cout << "Digite el numero de su eleccion: " << endl;
			cin >> op;
			while (op >= 3 or op <= 0) {
				cout << "ERROR, Opcion invalida, digite el numero de su eleccion: " << endl;
				cin >> op;
			}
			if (op == 1) {
				personajeArquero();  // Se desarrolla la construcción y el combate del Arquero
			}
			else if (op == 2) { 
				personajeGuerrero(); // Se desarrolla la construcción y el combate del Guerrero
			}
			cout << endl;
			cout << "Gracias por participar" << endl;
			
	}
	// Caso 2 en el que el usuario decide NO participar
	else if (op == 2) {
		cout << "Gracias por su atencion, Que tenga un lindo dia! " << endl;
	}

	return 0;
};






