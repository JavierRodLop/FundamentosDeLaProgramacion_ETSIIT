#include <iostream>

using namespace std;

int main() {

    int L, r;

    do {
        cout << "Introduce la altura: ";
        cin >> L;
        r = L%2;
    } while( r != 0);

    for(int i = 1; i <= L/2; i++) {
        for(int j = 1; j <= 2.5*L; j++) {
            cout << " ";
        }
        for(int k = 1; k <= i; k++) {
            cout << "*";
        }

        cout << endl;
    }

    for(int i = 1; i <= L/2; i++) {
        for(int j = 1; j <= 1.5*L-i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= i; k++) {
            cout << "*";
        }
        for(int j = 1; j <= L; j++) {
            cout << " ";
        }
        for(int k = L/2; k < L+i; k++) {
            cout << "*";
        }
        
        cout << endl;
    }

    for(int i = 1; i <= L; i++) {
        for(int j = 1; j <= L-i; j++) {
            cout << " ";
        }
        for(int k = L/2; k < L+i; k++) {
            cout << "*";
        }
        
        for(int k = L; k >= i; k--) {
            cout << "+";
        }
        for(int j = L-1; j > L-i; j--) {
            cout << " ";
        }
        for(int k = 1; k <= L+i; k++) {
            cout << "*";
        }

        cout << endl;
    }

    

    

}