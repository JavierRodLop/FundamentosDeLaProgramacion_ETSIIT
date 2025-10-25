#include <iostream>

using namespace std;

int main() {

    int i; 
    long long suma;

    i = 1;

    suma = 0;

    while (i <= 1000 ) {

        suma = suma + i*i;

        cout << "iteracion: " << i << " suma parcial: " << suma << endl;
        i++;

    } 
}