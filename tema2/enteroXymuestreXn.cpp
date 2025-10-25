// Realizar un programa que lea un real X y un entero positivo n y muestre por pantalla X^n

#include <iostream>

using namespace std;

int main() {

    double x, pot;
    int n, i;

    cout << "Introduce el valor de la base: ";
    cin >> x;

    cout << "Introduce el valor del exponente: ";
    cin >> n;

    i = 1;
    pot = 1;

    while ( i <= n) {
        
        pot = pot*x;
        i++;
        cout << pot << endl;
    }

    cout << "la potencia final es: " << pot;

    }