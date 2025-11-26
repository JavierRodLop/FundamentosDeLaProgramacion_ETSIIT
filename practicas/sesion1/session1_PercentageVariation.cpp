#include <iostream>
#include <cmath>


using namespace std;

int main() {

    double inicial, final, vp, temp;

    temp = 0;
    inicial = 0;
    final = 0;

    cout << "Introduce inicial value: ";
    cin >> inicial; 

    cout << "Introduce final value: ";
    cin >> final;

    temp = (100*(final - inicial)/inicial);

    vp = abs(temp);

    cout << "The percentaje variaton is: " << vp;
    
}