#include <iostream>
using namespace std;

int main(){
    int p;
    do{
        cout << "Introduce un entero PAR mayor o igual a cuatro: ";
        cin >> p;
    }while(p%2==1||p<4);

    cout << endl;
    for(int f=1;f<=2*p+1;f++){
        if(f<=p){
            for(int i=1;i<=p-(f-1);i++){
                cout << " ";
            }
            for(int i=1;i<=2*(f-1)-1;i++){
                cout << "*";
            }
            if(f==1){
                for(int i=1;i<=(3*p/2)-1;i++){
                    cout << " ";
                }
            }
            else{
                for(int i=1;i<=(3*p)/2;i++){
                    cout << " ";
                }
            }
            for(int i=1; i<=(2*p+1)-2*f;i++){
                    if(i==1||i==(2*p+1)-2*f){
                        cout << "#";
                    }
                    else{
                        cout << " ";
                    }
            }
        }

        if(f==p+1){
            for(int i=1;i<=2*p-1;i++){
                cout << "*";
            }
            for(int i=1;i<=p/2;i++){
                cout << "o";
            }
            for(int i=1;i<=2*p-1;i++){
                cout << "*";
            }
        }

        if(f>p+1){
            for(int i=1;i<=(p-1)-(f-(p+2));i++){
                cout << " ";
            }
            for (int i=1;i<=(f-(p+1));i++){
                cout << "+";
            }
            for (int i=1;i<=(3*p)/2-1;i++){
                cout << " ";
            }
            for (int i=1;i<=(f-(p+1));i++){
                cout << " ";
            }
            for(int i=1;i<=(2*p-1)-2*(f-(p+1));i++){
                cout << "*";
            }                

        }

        cout << endl;
    }
}