// Dado un numero n ver si es un cuadrado perfecto

#include <iostream>
#include <cmath>

using namespace std;

int main() {


    // Variables
    
    int n, sqrt_int;
    double sqrt_n;
    bool perfectSquare;

    // Entrada

    cout << "Introduce a number value: ";
    cin >> n;

    // Proceso

    sqrt_n = sqrt(n);

    sqrt_int = static_cast<int>(sqrt_n);

    perfectSquare = sqrt_int * sqrt_int == n;

    // salida

    if (perfectSquare) {
        cout << n << " is a perfect square." << endl;
    } else {
        cout << n << " is NOT a perfect squeare." << endl;
    }
    
}       