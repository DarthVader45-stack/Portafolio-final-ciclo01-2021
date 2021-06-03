//Oscar Francisco Melendez Henriquez - MH100620
#include <iostream>

using namespace std;

void imprimirArreglo(int numeros[]){
	for (int i = 0; i < 5; ++i){
		cout << "numeros[" << i << "] : ";
		cout << numeros[i] << " " << endl;
	}
	cout << endl;
}

int main(){
	
	int numeros[5] = {19,10,8,17,9};
	
	imprimirArreglo(numeros);
	
	//Cambiando el elemento en la posición 3 (4to elemento)
	numeros[3] = 35;
	
	imprimirArreglo(numeros);
	
	cout << "Ingrese el valor de numero[4]: ";
	cin >> numeros[4];
	
	imprimirArreglo(numeros);
	
	//A partir de C++ 11 se introdujo el bucle basado en rango
	cout << endl;
	for (int n : numeros){
		cout << n << " " << endl;
	}
	return 0;
}
