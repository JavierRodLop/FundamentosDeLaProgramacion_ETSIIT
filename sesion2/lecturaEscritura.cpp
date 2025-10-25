#include <iostream>
#include <string>

using namespace std;

int main()
{
	int dato_int;
    double dato_double;
    char dato_char;
    string dato_string;

    cout << "Introducir entero: ";
    cin >> dato_int;

    cout << "Introducir real: ";
    cin >> dato_double;

    cout << "Introducir caracter: ";
    cin >> dato_char;

    cout << "Introducir cadena de caracteres: ";
    cin >> dato_string;

    cout << "El entero es: "   << dato_int << endl;
    cout << "El real es: "     << dato_double << endl;
    cout << "El caracter es: " << dato_char << endl;
    cout << "La cadena de caracteres es: " << dato_string << endl;
}