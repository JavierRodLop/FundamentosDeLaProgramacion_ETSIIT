#include <iostream>
using namespace std;

int main(){


    int L, n, i;
    
    cout << "Introducir L: ";
    cin >> L;

    // Parte superior
    for (n=1; n<=L/2; n++) {

        for (int i=1; i<=n-1; i++)
            cout << ' ';
        
        cout << '*';

        for (int i=1; i<=L/2-n; i++)
            cout << ' ';
        
        cout << '*';

        for (int i=1; i<=L/2-n; i++)
            cout << ' ';
        
        cout << '*';

        cout << endl;
    }

    // Parte central
    for (int i=1; i<=L/2; i++)
        cout << ' ';
        
    cout << '*' << endl;

    // Parte Inferior
    for (n=L/2; n>=1; n--) {

        for (int i=1; i<=n-1; i++)
            cout << ' ';
        
        cout << '*';

        for (int i=1; i<=L/2-n; i++)
            cout << ' ';
        
        cout << '*';

        for (int i=1; i<=L/2-n; i++)
            cout << ' ';
        
        cout << '*';

        cout << endl;
    }

}