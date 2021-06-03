//Oscar Francisco Melendez Henriquez - MH100620 
#include <iostream>
#include <iomanip>

//int main(int num_args, char** arg_string){
int main(int argc, const char * argv[]){
	
	using namespace std;
	
	int numeros[10];
	
	for(int i=0; i < 10; i++){
		numeros[i] = 10 - (i+1);
	}
	
	cout << "Indice\tValor\n--------\t-------\n";
	for(int i=0; i < 10; i++){
		cout << setw(6) << i << "\t" << setw(5) << numeros[i] << endl;
	}
	return 0;
}
