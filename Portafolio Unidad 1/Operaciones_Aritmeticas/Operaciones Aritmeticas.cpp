#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	
	cout << "*** Calcula operaciones aritmeticas de dos numeros ***\n";
	cout << "Creado por: Oscar Francisco Melendez Henriquez\n";
	
	cout << "Inserte un numero:  ";
	cin >> x;
	
	cout << "Inserte el otro numero:  ";
	cin >> y;
	
	x += y;				//equivale a x = x + y
	cout << "La suma de X + Y:  "<< x << endl;
	
	x -= y;				//equivale a x = x - y
	cout << "La resta de X + Y:  "<< x << endl;
	
	x *= y;				//equivale a x = x * y
	cout << "La multiplicacion de X + Y:  "<< x << endl;
	
	x /= y;				//equivale a x = x / y
	cout << "La division de X + Y:  "<< x << endl;
	
	x %= y;				//equivale a x = x % y
	cout << "El residuo de X + Y:  "<< x << endl;
	
	return 0;

}
