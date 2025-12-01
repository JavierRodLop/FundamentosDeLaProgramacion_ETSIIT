#include <iostream>

using namespace std;

int main() {

    int n, r; 
     
    do {
        cout << "Introduce la longitud (impar mayor o igual que 5): ";
        cin >> n;
        r = n%2;
    } while( n < 5 || r == 0 );

    for(int i = 1; i <= n/2; i++) {
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = 1; k <= 1; k++){
            cout << "*";
        }
        for(int j = n/2-1; j >= i; j--) {
            cout << " ";
        }
        for(int k = 1; k <=1; k++) {
            cout << "*";
        }
        for(int j = n/2; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= 1; k++) {
            cout << "*";
        }

        cout << endl;
    }


    for(int i = 1; i <= 1; i++) {
        for(int j = 1; j < n/2+i; j++){
            cout << " ";
        }
        cout << "*";
        
    }

    cout << endl;

    for(int i = 1; i <= n/2; i++) {
        for(int j = n/2-1; j >= i; j--) {
            cout << " ";
        }
        for(int k = 1; k <=1; k++) {
            cout << "*";
        }
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = 1; k <= 1; k++){
            cout << "*";
        }
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = 1; k <= 1; k++){
            cout << "*";
        }
        
        

        cout << endl;
    }
    
}