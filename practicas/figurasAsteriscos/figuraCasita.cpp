#include <iostream>

using namespace std;

int main() {

    int L; 
    cout << "Introduce L: ";
    cin >> L;

    for(int i = 1; i <= L-1; i++) {

        for(int j = 1; j <= L-i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= 2*i-1; k++) {
            if(i == 1 || k == 1 || k == 2*i-1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }

    for(int i = 1; i <= L; i++) {
        for(int j = 1; j <= L; j++) {
            if(i == 1 || i == L || j == 1 || j == L || i == j || i == L-j+1) {
                cout << "* ";
            } 
            else {
                cout << "  ";
            }
        }
        
        cout << endl;
    }

    

}