/*Beatriz Serrano Noberto, figura: 4 
Descripcion: TRAPECIO HUECO (L/2), ROMBO HUECO (L) y TRIANGULO RELLENO (L/2)*/

#include <iostream>
using namespace std;
int main(){ 
      //Declaramos las variables 
       int L, n, i;
      
      //Entrada
       cout<< "Introduce un n�mero entero mayor o igual a 10, ser� L: ";
       cin>> L;
       
     //Parte superior( PRIMERA PARTE ROMBO HUECO)
      for(i = 1; i <= L/2; i++){
         for(n = 1; n<=2*L-i-1; n++){
          cout << " ";
         }
        for(n = 1; n<=2*i; n++){
          if(n==1 | n==2*i-1){
             cout <<"*";
          }
          else{
             cout<< " ";
          }
         }
         cout << endl;  
      }
      
     //Parte inferior 
      for(i = 1; i <= L/2; i++){
   
       //TRAPECIO HUECO
         for(n = 1; n<=i-1; n++){
             cout << " ";
           }
         for(n = 1; n<=L/2; n++){
          if (n==1 | n==L/2 | i==1 | i==L/2){
             cout << "*";
           }
          else{
             cout <<" ";
           }
         }
   
   
       //SEGUNDA PARTE ROMBO  HUECO
         if(L%2==0){
          for(n = 1; n<=L-1; n++){
               cout << " ";
            }
          for(n = 1; n<=L-2*i+1; n++){
              if(n==1 | n==L-2*i+1){
                cout <<"*";
               }
             else{
                cout << " ";
               }
            }
         } 
         else{
            for(n = 1; n<=L; n++){
               cout << " ";
            }
            for(n = 1; n<=L-2*i; n++){
               if(n==1 | n==L-2*i){
                  cout <<"*";
               }
               else{
                cout << " ";
               }
            }
         }
         
       //PIRAMIDE RELLENA
          for(n = 1; n<=L-1; n++){
             cout << " ";
           }
          for(n = 1; n<=2*i-1; n++){
             cout <<"*";
           }
       cout << endl;
     }     
   }
      
     
      
 
