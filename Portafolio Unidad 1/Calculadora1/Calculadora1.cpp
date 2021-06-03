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
	
	cout << "Suma:  " 						<< x + y << endl; 		//Suma de x + y
	cout << "Resta:  "						<<x - y << endl; 			//Resta x - y
	cout << "Multiplicacion:  "				<<x * y << endl;		//Multiplicacion x * y
	cout << "Division:  "					<<x / y << endl;		//Division x / y
	cout << "Residuo de division:  "		<<x % y << endl;		//Residuo de la division x % y
	
	++x;
	++y;
	cout << "Incremento en uno:  " << "X:  " << x << "  y:  " << y << endl;
	
	--x;
	--y;
	cout << "Decrece en uno:  " << "X:  " << x << "  y:  " << y << endl;
	
	return 0;
}
