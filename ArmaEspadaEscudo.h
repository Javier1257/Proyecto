/*
* Proyecto de Pensamiento Computacional Orientado a Objetos
* Javier Suárez Durán
* A01707380
* 04/01/2020
*/

/*
* Clase EspadaEscudo, clase hija de la clase arma
* donde se definen los metodos de todos las espadas
* y escudos.
*/

#include <iostream>
using namespace std;

#include "ClaseArma.h"

class EspadaEscudo : public Arma {
	public :
		// Constructor
		EspadaEscudo(string, int);
		// Metodo
		int tajoFuerte(int);
		
};

/**
* Constructor que recibe los atributos de la clase
* 
* @param string nm: nombre del espada y escudo, int atk: ataque del espada y escudo
* @return Objeto EspadaEscudo
*/
EspadaEscudo :: EspadaEscudo(string nm, int atk):Arma(nm, atk) {
}

/**
* Genera un valor de ataque a tarves de la acción
* de realizar un tajo con la espada más fuerte de localecon
* usual.
*
* @param int atk: ataque del espada y escudo
* @return int ataque del tajo
*/
int EspadaEscudo :: tajoFuerte(int atk) {
	int ataque = atk + 150;
	return ataque;
}




