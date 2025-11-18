#include <iostream>
#include <cmath>

using namespace std;

int main() {

    bool encontrado;

    int q, p, n;

    cout << "Introduce n par: ";
    cin >> n;

    /* Ahora buscar p y q que sumen n y que ambos sean primos */
    p = 2;
    encontrado = false;

    while ( p <= n/2 && !encontrado ) { // (p <= n/2 && encontrado == false )

        q = n-p;

        if ( p es primo && q es primo ) {
            encontrado = true;
        } else {
            p++;
        }

    }

    if ( encontrado )
        cout << n << "=" << p << "+" << q << endl;
    else 
        cout << "Conjetura falsa!!!!!!!!!!!";
    
}