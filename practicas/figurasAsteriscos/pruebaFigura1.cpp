#include <iostream>
using namespace std;

int main() {

    int L, r; 
    L=13;

    for(int i = L; i >= 1; i--) {
        for(int j = 1; j <= L-i; j++) {
            cout << "-";
        }
        for(int k = 1; k <= 2*i-1; k++) {
            cout << "*";
        }
        

    cout << endl;

    }


}