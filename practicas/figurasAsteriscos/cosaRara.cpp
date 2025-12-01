#include <iostream>

using namespace std;

int main() {

    int L;
    cout << "Introduce L: ";
    cin >> L;

    for(int i = 1; i <= L/2; i++) {
        for(int j = 1; j <= i-1; j++) {
            cout << " ";
        }
        for(int k = 1; k <= (L/2-i)+1; k++) {
            cout << "*";
        }

        for(int j = 1; j <= L-2; j++) {
            cout << " ";
        }
        for(int k = 1; k <= (L/2-i)+1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    for(int i = 1; i <= L; i++) {
        for(int j = 1; j <= L/2-1; j++) {
            cout << " ";
        }
        for(int k = 1; k <= L; k++) {
            if( i == 1 || k == 1 || i == L || k == L) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        for(int j = 1; j <= i; j++) {
            cout << "o";
        }

        cout << endl;
    }

    for(int i = 1; i <= L-1; i++) {
        for(int j = 1; j <= L/2-1; j++) {
            cout << " ";
        }

        for(int j = 1; j < L-i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= (2*i+1); k++) {
            cout << "*";
        }
        
        cout << endl;
    }
        
}