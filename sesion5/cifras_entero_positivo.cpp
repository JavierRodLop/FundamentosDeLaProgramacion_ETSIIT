#include <iostream>
#include <string>

using namespace std;

// Definimos variables

int main() {
int m, n, unidad;
string cadena_cifras = " ";

// Proceso de entrada

cout << "Introduce el numero entero: ";
cin >> m;

n = m;

// Proceso

while ( n > 0 ) {

    unidad = n % 10;

    cadena_cifras = to_string(unidad) + " " + cadena_cifras;

    n = n / 10;

}

// Salida

cout << "Las cifras son: " << cadena_cifras << endl;
    
}