// leer n y ver si es primo o no 

#include <iostream>

using namespace std;

int main() {

    int n, i;
    bool es_primo;

    cout << "Introduce el numero: ";
    cin >> n;

    i = 2;

    es_primo = true;

    while ( i < n && es_primo) {
        
        if ( n%i == 0 ) {

            es_primo = false;

        }
            i++;  
        }  

    if (es_primo) {
        cout << n << " es primo";   
    }  else {
        cout << n << " no es primo";
    }
}

