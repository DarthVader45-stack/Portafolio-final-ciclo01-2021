//	Oscar Francisco Melendez Henriquez - MH100620
#include <iostream>
#include <string>
#include <array>

using namespace std;

bool busquedaSecuencial(array<string, 6 > nombres, string valorBuscado){
	bool encontrado = false;
	for(int i = 0; i < nombres.size(); i++){
		if(valorBuscado == nombres[i]){
			encontrado = true;
			break;
		}
	}
	return encontrado;
}

int main(){
	array<string, 5> nombres = {"Briam", "Gustavo", "Graham", "Emmanuel", "Alejandra"};
	array<string, 3> valoresAbuscar = {"Erick", "Krista", "Gustavo"};
	
	for(int i; i < valoresAbuscar.size(); i++){
		if(busquedaSecuencial(nombres, valoresAbuscar[i])){
			cout << valoresAbuscar[i]<< "Esta en el arreglo" << endl;
		}
		else {
			cout << valoresAbuscar[i]<<"No esta en el arreglo" << endl;
		}
	}
return 0;
}

