//Oscar Francisco Melendez Henriquez - MH100620
#include <iostream>
#include <iomanip>

//int main(int num_args, char** arg_string){
int main(int argc, const char * argv[]){
	
	using namespace std;
	
	int numeros[10] = {23, 7, 9, 52, 41, -4, 35, 16, 0, 18};
	
	cout << "Indice\tValor\n--------\t-------\n";
	for(int i=0; i < 10; i++){
		cout << setw(6) << right << i << "\t";
		cout << setw(5) << right << numeros[i] << endl;
	}
	return 0;
}