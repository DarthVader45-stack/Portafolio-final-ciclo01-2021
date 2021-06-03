#include <iostream>
using namespace std;

int main(){
	
	int n,sum = 0;
	
	while (n >= 0){
		cout << "Por: Oscar Francisco Melendez Henriquez\n";
		cout << "Ingrese un numero a sumar (-1 para salir): \n";
		cin >> n;
		sum += n;
	}
	
	cout << "Suma = " << sum;
	return 0;
}
