#include <iostream>

using namespace std;

int main() {

    double pi, r, a, l;

    a = 0;
    l = 0;
    r = 0;

    pi = 3.14159;

    cout << "Introduce circumference's radius' value: ";
    cin >> r;

    a = pi*r*r;
    l = 2*pi*r;

    cout << "The circumference's area is " << a << " m^2\n";
    cout << "The circunmference's length is " << l << " m";
    
}