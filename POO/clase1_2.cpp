#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//    //Definición del tipo de dato Complejo !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
class Complejo{
    public: 
    	double real;  //Atributos (datos miembro)
	    double imag;
};

//Módulos con las operaciones sobre Complejos
void Set_Complejo(double x, double y, Complejo &c ){
    	c.real = x;
    	c.imag = y; 	
}

int Get_Part_real(Complejo c) {
	    return c.real;
}
	
int Get_Part_imaginaria(Complejo c){
	    return c.imag;
}
	
Complejo Sumar_Complejos(Complejo c1, Complejo c2){
	    Complejo cs;
	
	    cs.real = c1.real + c2.real;
        cs.imag = c1.imag + c2.imag;
        
        return cs;
}

string ToString( Complejo c ){
	string salida = to_string(c.real) + '+' + to_string(c.imag) + 'i';
	
	return salida; 
}

int main(){
    double x, y;
    Complejo c1, c2, cs;
    
    //Entrada
    cout << " Introducir complejo 1: ";
    cin >> x >> y;
    Set_Complejo(x, y, c1);

    cout << " Introducir complejo 2: ";
    cin >> x >> y;
    Set_Complejo(x, y, c2);

    //Proceso
    cs = Sumar_Complejos(c1, c2);

    //Salida (Dos posibles formas: )
    cout << "La suma de los complejos es: " << ToString(cs) << endl;

    cout << "La suma de los complejos es: " << Get_Part_real(cs) << '+' 
                                            << Get_Part_imaginaria(cs) << 'i' <<endl;
}