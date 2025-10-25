#include <iostream>

using namespace std;

// In C++11 -> This is a creation of a new data type (this is made before main)

enum class Clasification_int {
    positivo, negativo, cero
};

int main() {

    int x;
    Clasification_int clase; // type variable declaration (Clasification_int)

    // Input:

    cout << "Introduce int: ";
    cin >> x;
    
    // Process

    if ( x > 0 )
        clase = Clasification_int::positivo;
    else if ( x < 0 )
        clase = Clasification_int::negativo;
    else 
        clase = Clasification_int::cero;

    // Output

    if ( clase == Clasification_int::positivo ) {
        cout << x << " is a positivo number ";
    }
    else if ( clase == Clasification_int::negativo ) {
        cout << x << " is a negative number";
    } 
    else {
        cout << x << " is zero";
    }

    // Fin
    
}
