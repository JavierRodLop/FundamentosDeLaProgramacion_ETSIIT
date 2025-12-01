#include <iostream>

using namespace std;

int main() {

    int L;
    cout << "Introduce L: ";
    cin >> L;

    for(int i = 1; i <= L/2; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for(int i = 1; i <= L/2; i++) {
        for(int j = L/2; j < L+i; j++) {
            cout << "*";
        }
        for(int j = 1; j <= (3*L)-2*i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= i; k++) {
            cout << "+";
        }

        cout << endl;
    }

    for(int i = 1; i <= L; i++) {
        for(int j = L; j < 2*L+i; j++) {
            cout << "*";
        }
        for(int j = 1; j <= 2*L-2*i; j++) {
            cout << " ";
        }
        for(int k = L/2; k < L+i; k++) {
            cout << "+";
        }
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
      
    
    }
        
}