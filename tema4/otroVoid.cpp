// Empezamos con a=x b=y y terminamos con a=y b=x, hacer en casa

#include <iostream>

using namespace std;

// Con el & es paso por referencia

void Intercambiar(int &x, int &y) {

    int tmp = x;
    x = y;
    y = tmp;

}
// Todo cambio en los formales NO incide en los actuales


int main() {

    int a=30;
    int b=70;

    Intercambiar(a,b);

    cout << a << " " << b;
    
}