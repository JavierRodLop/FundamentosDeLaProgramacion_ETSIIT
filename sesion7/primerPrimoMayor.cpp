// Leer un entero tope y encontrar el primer primo mayora  tope

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int tope, i, p;
    bool encontrado, esPrimo;

    i = 2;

    esPrimo = true;

    while ( i < tope && esPrimo) {
        
        if ( tope%i == 0 ) {

            esPrimo = false;

        }
            i++;  
        } 
    
    cout << "Introduce un número entero";
    cin >> tope;

    p = tope + 1;

    encontrado = false;

    

    while ( !encontrado ) {

        if ( esPrimo ) {
            encontrado = true;
        } 
        else {
            p++;
        }

    }

    cout << "El siguiente primo a: " << tope << " es: " << p;    
}
