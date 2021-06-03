#include <iostream>
#include <cstdlib>  		//Generar Nùmeros aleatorios
#include <ctime>			//Hora

int main(){
	using namespace std;
	cout << "Creado por: Oscar Francisco Melendez Henriquez\n";
	int magico;
	int intento;
	int respuesta;
	
	//funcion que inicializa la generaciòn de numero aleatorios
	srand(time(0));
	//Numero aleatorio extraido del generador en un rango desde 10 a 1
	magico = rand() % 10 + 1;
	
	cout << "Adivina el numero magico:  ";
	cin >> intento;
	
	//Condicion para evaluar el numero ingresado
	if (magico == intento){
		cout << "Correcto! Como lo supiste?" << endl;	
	}else if (magico > intento){
		cout << "Incorrecto. El numero es mayor que " << intento << endl;
	}else{
		cout << "Incorrecto. El numero es menor que " << intento << endl;
	}
	
	cout << "Quieres saber cual era el numero (y/n):  ";
	cin >> respuesta;
	if (respuesta == 'y'){
		cout << "El numero secreto era:  " << magico << endl;
	}else if (respuesta == 'n'){
		cout << "Bueno, esta bien. Intentalo de nuevo. " << endl;
	}
	
	return 0;
}
