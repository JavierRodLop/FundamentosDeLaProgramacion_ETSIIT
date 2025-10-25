#include <iostream>
using namespace std;

int main()
{
    char car, mayuscula;
    int codigo;
    
    cout << "Introducir un caracter: ";
    cin >> car;

  	cout << "El caracter leido es: " << car << endl;
  	
  	codigo = car;
  	
  	cout << "El codigo ASCII de '" << car 
	     << "' es: " << codigo << endl;
  	
  	//////////////////////////////////////////////////////
  	
	cout << "Introducir una letra en minuscula: ";
    cin >> car;
    
    mayuscula = car + 'A' - 'a';
    
  	cout << "La mayuscula de '" << car << "' es: " << mayuscula << endl;
}