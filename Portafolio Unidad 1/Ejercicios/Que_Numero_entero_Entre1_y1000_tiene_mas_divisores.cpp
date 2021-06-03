 //Determina los numeros perfectos entre uno y mil.

 #include <iostream>
 using namespace std;

 int Perfect (int);
 void PrintPerfect(int);

 int main(){    // abre main
 int s;

 cout<<"Determinacion de numeros perfectos entre 1 y 1000."<<endl;
 cout << "Creado por: Oscar Francisco Melendez Henriquez\n";

 for (int counter = 1; 1000 >= counter;++counter){
 s = Perfect (counter);
 if (1 == s)
 PrintPerfect (counter);
 }

 cout <<endl << endl;
 
 return 0;
 } 
 
 int Perfect (int n)

 {

 int suma = 0, factor;

 for (int divisor = 1; divisor < n; ++ divisor)
 { 

 if (0 == n % divisor){ 
 factor = divisor;
 suma += factor;
 }   

 }   

 if ( suma == n)
 return 1;

 else
 return 0;
 }


 void PrintPerfect (int m)
 
 {
 cout <<endl<<endl<< m << "\tes igual a la suma de:"<<endl;

 for (int divisor = 1; divisor <m; ++divisor)
 if (0 == m%divisor)
 cout << divisor << "\t";

 return ;
 }

