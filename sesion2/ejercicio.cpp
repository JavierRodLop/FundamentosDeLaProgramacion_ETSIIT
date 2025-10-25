// Dar un entero de 3 cifras y sacar cifra por cifra independientemente

#include <iostream>

using namespace std;

int main()
{

    // Declaramos las variables

	int n, c1, c2, c3;

    // Entrada

    cout << "Introducir entero positivo con 3 cifras: ";
    cin >> n;

    // Proceso

    c1 = n % 10;
    n = n / 10;

    c2 = n % 10;
    c3 = n / 10;

    // Salida

    cout << c3 << endl << c2 << endl << c1 << endl;
}