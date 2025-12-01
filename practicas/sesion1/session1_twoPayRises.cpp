#include <iostream>

using namespace std;

int main() {

    double base_salary, alt_salary, sequential_salary, two_pc;

    base_salary = 0;

    cout << "Introduce base salary (in dollars): ";
    cin >> base_salary;

    alt_salary = base_salary * 1.05;

    two_pc = base_salary * 1.02;
    sequential_salary = two_pc * 1.03;


    cout << "Your final salary with a rise of 2 percent is: " << alt_salary << " USD\n";

    cout << "The sequential salary is " << sequential_salary << " USD";
    
}