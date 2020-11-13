#include <iostream>
using namespace std;

class Computer{
	private:
		string modelo1 = 'AlienWare'
		string modelo2 = 'Lenovo'
		string modelo3 = 'Hp'
		
	public:
		Computer(): batería(0), tamaño(0), entradas(0), bocinas(0), almacenamiento(0), ram(0), procesador(''), grafica('')  {};
		Computer(int batt, float tam, int ins, int spkr, int alm, int r, string proc, string graff): batería(batt), tamaño(tam), entradas(ins), bocinas(spkr), almacenamiento(alm), ram(r), procesador(proc), grafica(graff) {};
		
		void get_Price{};
		void get_batt{};
		void get_tam{};
		void get_ins{};
		void get_spkr{};
		void get_alm{};
		void get_r{};
		void get_proc{};
		void get_graff{};
};