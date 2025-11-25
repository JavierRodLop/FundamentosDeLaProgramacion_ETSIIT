#include <iostream>

using namespace std;

int main(){
   const int MAX = 5000;	
   const char TERMINADOR = '#';
   char caracter, cadena[MAX];
   int util_cadena;

   util_cadena = 0;


   // Lectura de un vector de char (puede incluir espacios, tabuladores, etc.)
   caracter = cin.get();   
   while ( caracter != TERMINADOR ){
      cadena[ util_cadena ] = caracter;
      util_cadena ++;
      
      caracter = cin.get();
   }
  
   // Mostrar por pantalla el vector de char
   cout << endl;
   for (int i=0; i<util_cadena; i++)
      cout << cadena[i];

   cout << endl;
} 
