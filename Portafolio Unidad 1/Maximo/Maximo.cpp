#include <iostream>

/* Este programa recibe una "Lista de numeros y nos devuelve el valor maximo encontrado entre dichos numeros */

using namespace std;

int main(){
	
	int numero;
	int maximo;
	
	for(int i = 0; i < 10; i++) {
		cout << "Creado por: Oscar Francisco Melendez Henriquez\n";
		cout << "Ingrese el numero " << ( i + 1 ) << ":  ";
		cin >> numero;
		if (i == 0)
			maximo = numero;
		if (numero > maximo)
			maximo = numero;
	}
	
	cout << "El Valor maximo es:  " << maximo << endl;
	return 0;
} 
