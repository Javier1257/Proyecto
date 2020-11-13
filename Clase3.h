#include <iostream>
using namespace std;

class Tvs{
	private:
		string modelo1 = 'Samsung';
		string modelo2 = 'LG';
		string modelo3 = 'Sony';
	
	public:
		Tvs(): consumo(''), tamaño(''), resolucion(''), bocinas(0) {};
		Tvs(string cons, string tam, string res, int spkr): consumo(cons), tamaño(tam), resolucion(res), bocinas(spkr) {};
		
		void set_modelo{};
};

void set_modelo{
	cout << 'Modelos Dsiponibles: '<< endl;
	cout << '1.-' << modelo1 << endl;
	cout << '2.-' << modelo2 << endl;
	cout << '3.-' << modelo3 << endl;
	cout << 'Digita el número del modelo para obtener su información: ' << cin = int mod << endl;
	while (mod <= 4) or (mod >= 0) {
		cout << 'Opcion invalida, digita el número del modelo para obtener su información: ' << cin = int mod << endl;
	}
	switch(mod){
		case 1:
			tam = '64"';
			cons = '150 W/h';
			res = '4320p';
			spkr = 3;
			price = '$25000'
		break;
		case 2:
			tam = '45"';
			cons = '190 W/h';
			res = '1080p';
			spkr = 1
			price = '$14000'
		break;
		case 3:
			tam = '56"';
			cons = '200 W/h';
			res = '2160p';
			spkr = 2;
			price = '$19500'
		break;
	}
	cout << 'Tamaño: ' << tam << ' Consumo: ' << cons << ' Resolución: ' << res << ' Bocinas: ' << spkr << ' Precio: ' << price << endl;
}