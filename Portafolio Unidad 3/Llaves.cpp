//Oscar Melendez - MH100620

#include <iostream>
#include <string>
#include "Pila.hpp"

using std::string;
using std::cin;
using std::cout;
using std::endl;

bool estanLlavesBalanceadas(string expresion){
	Pila<char> unaPila;
	for(size_t i = 0; i < expresion.length(); i++){
		char caracter = expresion[i];
		cout << caracter << endl;
		if(caracter == '{'){
			unaPila.push(caracter);
			cout << unaPila.pilacomoCadena() << endl;
		} else if( caracter == '}' ) {
			if(unaPila.estaPilaVacia()){
				return false;
			}
			unaPila.pop();
			cout << unaPila.pilacomoCadena() << endl;
		}
	}
	return unaPila.estaPilaVacia();
}

int main(){
	string cadena;
	cout << "Ingrese una expresion: " << endl;
	cin >> cadena;
	if (estanLlavesBalanceadas(cadena)){
		cout << "Las llaves estan balanceadas.";
	} else {
		cout << "Las llaves no estan balanceadas.";
	}
	return 0;
}
