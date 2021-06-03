#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	
	cout << "*** Bienvenido a los Operadores de comparacion ***\n";
	cout << "Creado por: Oscar Francisco Melendez Henriquez\n";
	cout << "Debemos saber que 0 = Falso y 1 = True\n";
	
	cout << "Inserte un numero:  ";
	cin >> x;
	
	cout << "Inserte el otro numero:  ";
	cin >> y;
	
	bool var1 = true;
	bool var2 = false;
	
	cout << "Aqui presentamos que es True:  " << var1 << endl;
	cout << "Aqui presentamo que es False:   "<<var2 << endl;
	// 0 = False (Falso) y 1 = True (Verdadero)
	
	cout << "X menor que Y:  ";						//Menor que
	cout << (x < y) << endl;
	cout << "X mayor que Y:  ";						//Mayor que
	cout << (x > y) << endl;
	cout << "X menor o igual que Y:  ";				//Menor o igual que
	cout << (x <= y) << endl;
	cout << "X mayor o igual que Y:  ";				//Mayor o igual que
	cout << (x >= y) << endl;
	cout << "X Diferente que Y:  ";					//Diferente que
	cout << (x != y) << endl;
	cout << "X Igual que Y:  ";						//Igual que
	cout << (x == y) << endl;
	
	return 0;

}
