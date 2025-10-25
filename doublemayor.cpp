// Realizar un programa que lea dos dobles y muestre por pantalla el maximo

#include <iostream>

using namespace std;

int main() {

    double maximo;

    double a;
    cout << "Introduce el primer numero: ";
    cin >> a;

    double b;
    cout << "Introduce el segundo numero: ";
    cin >> b;

    if (a>b) {
        maximo = a;
    } else {
            maximo = b;
        }

        
    cout << maximo;

}