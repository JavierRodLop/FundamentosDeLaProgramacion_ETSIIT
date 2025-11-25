/*

                    |inicio = 5
v1 ->   23  45  64  1   2   3   4  345  92


v2 ->   1   2   3   4

util_v2 = 4

inicio = 0;
encontrado = false;
while ( !encontrado && inicio <= util_v1-util_v2 )

      //v2 est� en v1 empezando en inicio
      iguales = true;
      for (int i = 0; i<util_v2; i++)
         if ( v1[inicio+i]!=v2[i] )
            iguales = false;



      if ( iguales )
          encontrado = true;
       else
	       inicio ++;   

if (encontrado)
   cout << "v2 esta en v1 a partir de " << inicio;
else
   cout << "v2 no esta en v1";
    

*/


#include <iostream>
using namespace std;

int main() 
{
    const int MAX = 1000;
    int v1[MAX], v2[MAX], util_v1, util_v2, i, j;
    bool encontrado, iguales;

    // Lectura de los vectores de entrada
    cout << "Introducir primer vector: " << endl;
    do{
       cout << "Introduzca numero de componentes: ";
       cin >> util_v1;
    }while (util_v1 > MAX || util_v1 < 0);

    for (int i=0 ; i<util_v1 ; i++)
    {
         cout << "Posicion " << i << ": ";
         cin >> v1[i];
    }

    cout << "Introducir segundo vector: " << endl;
    do{
       cout << "Introduzca numero de componentes: ";
       cin >> util_v2;
    }while (util_v2 > MAX || util_v2 < 0);

    for (int i=0 ; i<util_v2 ; i++)
    {
         cout << "Posicion " << i << ": ";
         cin >> v2[i];
    }

	// Proceso
	i=0;
	encontrado = false;
    while( i<util_v1-util_v2+1 && !encontrado ){
    	
    	iguales = true;
    	for(j=0; j<util_v2 && iguales; j++)
    	   if ( v1[i+j]!=v2[j] )
    	      iguales = false;
    	      
    	if ( iguales )
		    encontrado = true;
		else
		    i++;	      
	}
	    
    // Salida
    if ( encontrado )
	    cout << "v2 se encuentra en v1 a partir de la posicion: " << i << endl;
	else
	    cout << "v2 NO se encuentra en v1" << endl;   
}