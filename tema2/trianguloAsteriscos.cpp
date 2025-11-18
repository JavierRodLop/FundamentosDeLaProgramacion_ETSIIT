#include <iostream>

using namespace std;

int main() {

    int L, i, tam;

    cout << "Introducir L: ";
    cin >> L;
    string triangulo;
    
    // Subtarea: Dibujar lineas te tamañi "*"
    // Y un salto de linea

    for ( tam=1; tam <=L; tam++) {
        for ( i=1; i <= tam; i++) {
            triangulo = triangulo + "*";
    }

    triangulo = triangulo + "\n";

    }
    cout << triangulo;

    cout << "-------------------------------------------";
    
    for ( tam=1; tam <= L; tam++ ) {

        for ( i = 1; i <= L-tam; i++ ) {
            cout << " ";
        }

        for ( i=1; i <= tam; i++) {
            cout << "*";
        }

        cout << endl;
    }    
    
    
}

