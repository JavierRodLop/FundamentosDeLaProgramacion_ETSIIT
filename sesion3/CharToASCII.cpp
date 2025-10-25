// Print ASCII format of an int

#include <iostream>

using namespace std;

int main() {

    char numChar;
    int numInt;

    cout << "Introduce a numer (this value will be saved as char): ";
    cin >> numChar;
    cout << "Number (char) value: " << numChar;

    numInt = numChar;

    cout << "Number's ACII Format: " << numInt;

    
}