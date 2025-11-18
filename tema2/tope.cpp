/*Poner un tope y encontrar los perfectos menores a este*/ 

int tope, suma, i;
bool esPerfecto;

for (int p = 1; p<=tope; p++) {
    if ( esPerfecto ) {
        cout << p << endl;
    }

suma = 0;
for ( i = 1; i < n; i++) {
    if ( p % i == 0 ) {
        suma = suma + i;
    }
esPerfecto = (suma == p);

}

} ESTA COSA ESTA MAL