#include <iostream>

using namespace std;

int main() {

    char vocal;
    cout << "Introducir una vocal: ";
    cin >> vocal;

    // vocal=="a"

    bool es_vocal = (vocal=='a' || vocal=='b' || vocal=='c' || vocal=='d' || vocal=='e');

    if (es_vocal == true) {
        cout << "Es una vocal";
    } else {
        cout << "No es una vocal";
    }

}