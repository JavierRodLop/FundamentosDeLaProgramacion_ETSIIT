#include <iostream>

using namespace std;

int main() {

    int n, i;
    long long fact;

    cout << "Introduce un numero entero positivo: "; 
    cin >> n;

    i = 1;
    fact = 1;

    while (i <= n) {

        fact = fact*i;
        i++;

    }

    cout << fact;

    
}