//#include "calculadora.h"
#include <iostream>
#include <string>

using namespace std;

const double pi = 3.141592653589793238;

double sumar(double x, double y){
	cout << "Funcion suma:   ";
	return x+y;
}

double restar(double x, double y){
	cout << "Funcion resta:   ";
	return x-y;
}

double multiplicar(double x, double y){
	cout << "Funcion multiplicar:   ";
	return x*y;
}

double dividir(double x, double y){
	cout << "Funcion dividir:   ";
	return x/y;
}



double solicitarNumero(string queNumero){
	double numero;
	cout << queNumero << ":  ";
	
	while(!(cin >> numero)){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Valor no valido. Intente de nuevo:  ";
	}	
	return numero;
}

char solicitarOperador(){
	char operador;
	cout << "Seleccione la operacion (+ | - | * | / ):  ";
	while(!(cin >> operador)){
		cin.clear();
		cin.ignore(1000,'\n');
	}
	return operador;

}

void calculadora(){
	double numero1, numero2, resultado;
	char operador;
	
	cout << "Creado por: Oscar Francisco Melendez Henriquez\n";
	cout << "Calculadora de operaciones con dos numeros." << endl;
	cout << "Por favor ingresa dos numeros."<<endl;
	
	numero1 = solicitarNumero("Primer Numero");
	numero2 = solicitarNumero("Segundo Numero");
	operador = solicitarOperador();
	
	switch(operador){
		case '+':
			resultado = sumar(numero1,numero2);
			break;
		case '-':
			resultado = sumar(numero1,numero2);
			break;
		case '*':
			resultado = multiplicar(numero1,numero2);
			break;
		case '/':
			resultado = dividir(numero1,numero2);
			break;
		default:
			cout << "Operador no valido";
			resultado = -1.0;
			break;
	}
	
	
	cout << "El resultado es = " << resultado << endl;
}

double valorPi(){
	return pi;
}


int main(){
	cout << valorPi() << endl;
	calculadora();
	

	return 0;
}
