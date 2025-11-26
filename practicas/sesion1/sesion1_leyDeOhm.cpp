#include <iostream>

using namespace std;

int main() {

    float I, R, V;

    cout << "Introduce intensity value (A): ";
    cin >> I;

    cout << "Introduce resistor value (Ohm): ";
    cin >> R;

    V = R*I;

    cout << "The voltage is " << V << " V";
    
}