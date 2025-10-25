#include <iostream>
#include <cmath>

using namespace std;

int main() {

    bool is_infinite;
    
    double x = 1e308;

    cout << x;

    x = x * 1000;

    is_infinite = isinf(x);

    if (is_infinite)
        cout << "incorrect operation: " << x << endl;
    else 
        cout << "correct operation";
    return 0;
} 