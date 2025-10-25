// Ley de Ohm

// Instrucciones para cambiar el valor de 2 variables

#include <iostream>

using namespace std;

int main() {

    double i;
    cout << "Introduzca el valor de la intensidad (I): " << endl;
    cin >> i;

    double r;
    cout << "Introduzca el valor de la resistencia (R): " << endl;
    cin >> r;

    cout << "Vamos a calcular el voltaje de la Ley de Ohm con los siguientes valores: " << "I = "<< i << " Amperios, " "R = " << r << " Ohmios" << endl;

    // Ley de Ohm:

    double v;
    v = i*r;
    cout << "El valor del voltaje es de " << v << " voltios"<<endl;

}