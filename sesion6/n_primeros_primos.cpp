#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int p, n, i, cont;
    bool esPrimo;
    
    cout << "Introducir numero de primos: ";
    cin >> n;

    p = 2;
    cont = 0;

    while ( cont < n ) {

        esPrimo = true; 
        for ( i = 2; i <= sqrt(p) && esPrimo; i++ ) {
            if (p % i == 0 ) {
                esPrimo = false;
            }
        }
        
        if ( esPrimo ) {

            cout << p << endl;
            cont++;

        }

        p++;
    }
}