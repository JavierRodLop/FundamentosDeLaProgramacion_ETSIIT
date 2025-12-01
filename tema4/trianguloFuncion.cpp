#include <iostream>

using namespace std;

void pintar(char c, int L) {

    for(int i = 1; i<=L; i++) {
        cout << c;
    }

}

int main() {

    // Pintar tamaño "*"

    int L;
    cout << "Introduce L: ";
    cin >> L;

    for(int linea = 1; linea <= L; linea++) {

        pintar(' ', L-linea);

        pintar('*', linea);

        cout << endl;

    }

    
}