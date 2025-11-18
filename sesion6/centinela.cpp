#include <iostream>

using namespace std;

int main() {

    const int centinela = 0;
    double x, suma, contador, media;

    suma = 0; 
    contador = 0;

    while ( x != centinela) {
        
        suma = suma + x;
        contador++;
        cin >> x;

    }

    if ( contador > 0 ) {

        media = ( 1.0*suma ) / contador;
        cout << "Media: " << media;

    } else {

        cout << "No hay datos";

    }
    

    VER ESTE EJERCICIO, NO SALE LA MEDIA
}