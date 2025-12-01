#include <iostream>

using namespace std;

int main() {

    int L = 11; 

    for(int i = 1; i <= L; i++) {
        for(int j = 1; j <= L-i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= 2*i-1; k++){
            if(k == 2*i-1 || i == L || k == 1) {
                cout << "*";
            }
            else {
                cout << "-";
            }
        }

        cout << endl;
    }

    
}