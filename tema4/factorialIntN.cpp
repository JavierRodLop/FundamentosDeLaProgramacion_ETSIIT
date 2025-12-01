#include <iostream>

using namespace std;

// Precondicion: numero <= 15
long long Factorial(int x) {

    long long f;

    f = 1;

    for(int i = 1; i <= x; i++) {
        f = f*i;
    }

    return f;

}

int main() {

    int n;

    cout << "Introduce un entero positivo: ";
    cin >> n;

    cout << "El factorial de " << n << " es: " << Factorial(n) << endl;;
    
}