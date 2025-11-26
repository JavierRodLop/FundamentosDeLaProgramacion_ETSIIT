#include <iostream>

using namespace std;

int main() {

    int salario_base;
    int salario_final;
    int incremento;

    salario_base = 1000;
    incremento = 200;

    salario_final = salario_base;
    salario_final = salario_final + incremento;

    salario_base = 3500;
    
    cout << "\nSalario base: " << salario_base;
    cout << "\nSalario final: " << salario_final;

    
}