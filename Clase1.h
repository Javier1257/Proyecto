#include <iostream>
using namespace std;

class Celphone {
	private:
		string modelo1 = 'Note 20 Ultra';
		string modelo3 = 'Note 9 Pro';
		string modelo4 = 'iPhone 12 Pro';
		
	public: //Default
		Celphone(): camaras(0),  batería(0), tamaño(0), entradas(0), bocinas(0), botones(0), lectorDactilar(0), reconocimientoFacial(0), almacenamiento(0), ram(0) {}, marca('');
		Celphone(int cam, int batt, float tam, int ins, int spkr, int bttn, int dLec, int fRec, int alm, int r, string m): camaras(cam), batería(batt), tamaño(tam), entradas(ins), bocinas(spkr), botones(bttn), lectorDactilar(dLec), reconocimientoFacial(fRec), almacenamiento(alm), ram(r), marca(m) {};
		
		void get_Price{};
		void get_cams{};
		void get_batt{};
		void get_tam{};
		void get_ins{};
		void get_spkr{};
		void get_bttn{};
		void get_dLec{};
		void get_fRec{};
		void get_alm{};
		void get_r{};
		void get_m{};
};


