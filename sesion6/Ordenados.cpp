#include <iostream>

using namespace std;

int main() {

    bool esta_ordenado;
    int n, i, x, x_ant;

    cin >> n;

    esta_ordenado = true;
    cin >> x;

    x_ant = x;
    
    for ( i=1; i<=n-1; i++ ) {

        // Leer x;

        if ( x < x_ant) {

            esta_ordenado = false;

        }

        x_ant = x;

    }
    
    // Salida

    if ( esta_ordenado )
       cout << "La secuencia de enteros estaba ordenada" << endl;
    else
      cout << "La secuencia de enteros NO estaba ordenada" << endl;

    TERMINAR

}