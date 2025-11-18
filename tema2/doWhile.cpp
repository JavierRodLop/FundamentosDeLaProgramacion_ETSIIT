#include <iostream>

using namespace std;

int main() {

    /*
    
    int n;

    do {
        cout << "Introducir valor positivo: ";
        cin >> n;
    } while ( n < 0 );
    
    */
 
    
    /*Realizar un filtro para forzar la lectura de una vocal*/
    
    char vocal;
    

    do {

        cout << "Introduzca una vocal: ";
        cin >> vocal;
 
    } while ( !( vocal == 'a' || vocal == 'b' || vocal == 'c' || vocal == 'o' || vocal == 'u' ) );



}