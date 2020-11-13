#include <iostream>
using namespace std;

class Tvs{
	private:
		string modelo1 = 'Samsung 4k'
		string modelo2 = 'LG 4k'
		string modelo = 'Sony 4k'
	
	public:
		Tvs(): consumo(0), tamaño(0), resolucion(0), bocinas(0) {};
		Tvs(float cons, float tam, int res, int spkr): consumo(cons), tamaño(tam), resolucion(res), bocinas(spkr) {};
		
		void get_Price{};
		void get_cons{};
		void get_tam{};
		void get_res{};
		void get_spkr{};
};