#include <iostream>

using namespace std;

int main() {

    int L, i, j;

    cout << "Introduce la altura del triangulo: ";
    cin >> L;

    for( i = 1; i<=L; i++) {
        
        for ( j = 1; j <= i; j++ ) {
            if(i == 1 || i == L || j == 1 || j == i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }

        cout <<endl;

    }
    
}