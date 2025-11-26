#include <iostream>

using namespace std;

int main() {

    double base_salary, final_salary;

    base_salary = 0;

    cout << "Introduce base salary (in dollars): ";
    cin >> base_salary;

    final_salary = base_salary * 1.02;

    cout << "Your final salary with a rise of 2 percent is: " << final_salary << "USD";
    
}