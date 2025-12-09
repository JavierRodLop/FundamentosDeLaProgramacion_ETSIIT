#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//Nuevo "tipo de dato"
class Complejo{
   public:  
	  double real;  //Atributos
	  double imag;
};

int main(){
    Complejo c1, c2, cs;
    
    //Leer c1
    cout << "Introducir un complejo: ";
    cout << "\n parte real: ";
    cin >> c1.real;
    cout << "  parte imaginaria: ";
    cin >> c1.imag;
    
    //Leer c2
    cout << "Introducir un complejo: ";
    cout << "\n parte real: ";
    cin >> c2.real;
    cout << "  parte imaginaria: ";
    cin >> c2.imag;
    
    //Realizar la suma
    cs.real = c1.real + c2.real;
    cs.imag = c1.imag + c2.imag;
    
    //Mostrar el resultado 
    cout << "La suma es: " << cs.real 
         << '+' << cs.imag << 'i' << endl; 
}