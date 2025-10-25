#include <iostream>

using namespace std;

int main() {

    int a;
    cout << "Introducir a: ";
    cin >> a;
    
    int c;
    c = (a%2);

    bool es_par = (c==0);

    if (es_par == true) {
        cout << "Ese numero es par chat";
    } else {
        cout << "Ese numero es impar gng";
    }

}