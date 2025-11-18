// Ver si un numero es primo con el bucle for 

#include <iostream>

using namespace std;

int main() {

    // Declaro variables
    int n, p;
    cout << "Introduce un entero: ";
    cin >> n;

    p = 2;

    while ( n > 0) {
        if ( n % p == 0) {
            cout << p << endl;

            n = n / p;
        } 
        else {
            p++;
        }
    }
    
}