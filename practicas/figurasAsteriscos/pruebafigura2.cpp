#include <iostream>
using namespace std;

int main(){
//--------------------------------------------------------------------

    int L, n, i;
    
    cout << "Introducir L: ";
    cin >> L;

    for (n=1; n<=L; n++) {
        //Subtarea 1 (Espacios)
        for (i=1; i<=L-n; i++)
            cout << ' ';

        //Subtarea 2 (Pirámide rellena)
        for (i=1; i<=2*(n-1)+1; i++)
            cout << '*';

        //Subtarea 3 (Puntos)
        for (i=1; i<=L; i++)
            cout << '.';

        //Subtarea 4 (Triangulo hueco)
        cout << '*';
        for (i=1; i<=2*(L-n)-1; i++)
            if ( n == 1 )
                cout << '*';
            else   
                cout << ' ';

        if (n != L )
            cout << '*';
        
        cout << endl;
    }

}
    