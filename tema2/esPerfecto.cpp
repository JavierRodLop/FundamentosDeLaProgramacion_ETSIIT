/*
Un numero entero es perfecto si es igual a la suma de sus divisores propios, por ejemplo
6 es perfecto porque 6=1+2+3
*/

#include <iostream>

using namespace std;

int main() {

int n, i, suma;
bool esPerfecto;

cout << "Introduce un numero natural: ";
cin >> n;

suma = 0;
for ( i = 1; i < n; i++) {
    if ( n % i == 0 ) {
        suma = suma + i;
    }
esPerfecto = (suma == n);

}

if ( esPerfecto ) {
    cout << n << " es perfecto" << endl;
} else {
    cout << n << " no es perfecto" << endl;
}

}