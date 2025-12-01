// Realizar un módulo que acepte dos dobles y devuelva el maximo

// Realizar un main que lea 4 dobles y muestre su máximo

#include <iostream>

using namespace std;

double maximo;
double Maximo(double x, double y) {


    if ( x > y ) {
        maximo = x; 
    }
    else {
        maximo = y;
    }

    return maximo;

}

int main() {

    double x, y, z, t, maximo;

    cout << "Introduce el primer numero: ";
    cin >> x;
    cout << "Introduce el segundo numero: ";
    cin >> y;
    cout << "Introduce el tercer numero: ";
    cin >> z;
    cout << "Introduce el cuarto numero: ";
    cin >> t;

    maximo = Maximo(Maximo(x,y), Maximo(z,t));

    cout << maximo;
    
}