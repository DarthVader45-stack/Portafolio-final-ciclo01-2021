/* Recorrer una cadena, y para cada carácter, determinar si es un dìgito , ademas imprime las veces que el caracter se repite*/
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char frase [30];
	int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;
	
	cout << "Digite una frase:  ";
	cin.getline(frase,30,'\n');
	
	for(int i=0;i<30;i++){
		switch(frase[i]){
			case 'a' : vocal_a++;
			break;
			case 'e' : vocal_e++;
			break;
			case 'i' : vocal_i++;
			break;
			case 'o' : vocal_o++;
			break;
			case 'u' : vocal_u++;
			break;
			
		}
	}
	
	cout << "Vocal a: "<<vocal_a<<"\tEs un digito"<<endl;
	cout << "Vocal e: "<<vocal_e<<"\tEs un digito"<<endl;
	cout << "Vocal i: "<<vocal_i<<"\tEs un digito"<<endl;
	cout << "Vocal o: "<<vocal_o<<"\tEs un digito"<<endl;
	cout << "Vocal u: "<<vocal_u<<"\tEs un digito"<<endl;
	return 0;	
}
