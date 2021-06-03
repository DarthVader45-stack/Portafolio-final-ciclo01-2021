//Oscar Francisco Melendez Henriquez - MH100620
#include <iostream>

using namespace std;


int main(){
	//Arreglo de tipo integer de 3 filas y 2 columnas
	int test[3][2] ;			
	
	cout << "Ingrese 6 numeros: "
					  
	for (int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			cin >> numeros[i][j];
		}
	}
	
	cout << "Los numeros ingresados son:" << endl;
	
	for (int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
		}
	}
	return 0;

}
