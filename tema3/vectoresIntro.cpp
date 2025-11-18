#include <iostream>
using namespace std;

int main(){

      const int TAM = 10;
      double v[TAM], media, suma; 
      int contador = 0;
	  
	  // Lectura de los componentes del vector v
      for(int i=0; i<TAM; i++){
      	  cout << "Introducir valor real: ";
      	  cin >> v[i];
	  }

      // Calcular la media del vector v
      suma = 0;
      for(int i=0; i<TAM; i++)
          suma = suma + v[i];
      	
      media = suma / TAM;
      
      // Determinar el numero de elementos del vector
	  // superan la media
	  contador = 0;
      for(int i=0; i<TAM; i++)
          if ( v[i] > media )
              contador ++;
              
      cout << endl << "La media del vector es: " << media << endl;
      cout << "Datos mayores a la media: " << contador << endl;
      
      for(int i=TAM-1; i>=0; i--)
         cout << v[i] << ' ';
}