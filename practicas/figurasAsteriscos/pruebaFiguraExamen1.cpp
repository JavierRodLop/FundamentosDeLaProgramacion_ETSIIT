#include <iostream>

using namespace std;

int main() {

    int L;
    do {
        cout << "Introduce la longitud: ";
        cin >> L;
    } while(L%2==1||L<4);
    

    for(int i = 1; i <= 1; i++) {
        for(int j = 1; j <= ((5*L-1)/2); j++){
            cout << " ";
        }

        cout << "#";

        for(int j = 1; j <= 2*L-3; j++) {
            cout << " ";
        }

        cout << "#";
    }

    cout << endl;


    for(int i = 1; i <= L-1; i++) {
        for(int j = 1; j <= L-i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= 2*i-1; k++) {
            cout << "*";
            
        }

        for(int j = 1; j <= ((2*L)-(L/2)); j++) {
            cout << " ";
        }        

        for(int k = 1; k <= 1; k++) {
            cout << "#";
        }

        for(int f = 1; f >= 1; f--) {
            for(int j = 1; j <= 2*L-(2*i+3); j++) {
                cout << " ";
            }
            for(int k = 1; k <= 1; k++) {
                cout << "#";
            }
                 
        }
    
        

        cout << endl;
        
    }

    for(int i = 1; i <= 1; i++) {
        for(int j = 1; j <= 2*L-1; j++) {
            cout << "*";
        }

        for(int k = 1; k <= L/2; k++) {
            cout << "o";
        }
        for(int j = 1; j <= 2*L-1; j++) {
            cout << "*";
        }
        

    }

    cout << endl;

    for(int i = 1; i < L; i++) {
        for(int j = 1; j <= L-i; j++) {
            cout << " ";
        }

        for(int k = 1; k <= i; k++) {
            cout << "+";
        }

        for(int j = 1; j <= L-1+L/2+i; j++) {
            cout << " ";
        }

        for(int f = 1; f >= 1; f--) {
            for(int j = 1; j <= 2*L-(2*i+1); j++) {
                cout << "*";
            }
        }

        cout << endl;
    }

    for(int i = 1; i <= 1; i++) {
        for(int j = 1; j <= L; j++) {
            cout << "+";
        }
    }

}