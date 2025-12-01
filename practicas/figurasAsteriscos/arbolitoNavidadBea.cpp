#include <iostream>

using namespace std;

int main() {


    int L, T, A, rL, rA;

    do {
        cout << "Venga Bea introduce la longitud de la rama (par): ";
        cin >> L;

        rL = L%2;
    } while( rL != 0);

    cout << "Vamos ahora introduce la longitud del tronco: ";
    cin >> T; 

    do {
        cout << "Ahora introduce la anchura del tronco (impar y menor que la base): ";
        cin >> A;

        rA = A%2;
    } while( rA != 1 || A >= (2*L - 1) );
    

    for(int i = 1; i <= L; i++) {
        for(int j = 1; j <= L-i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= 2*i-1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    for(int i = 1; i <= T; i++) {
        
        for(int j = 1; j <= (L-1)-(A/2); j++) {
            cout << " ";
        }
        for(int k = 1; k <= A; k++) {
            cout << "|";
        }

        cout << endl;
    }


    cout << "Merry Christmas gatita ;)";

    // Merry christmas gatita 
    // Wink ;)
    
}