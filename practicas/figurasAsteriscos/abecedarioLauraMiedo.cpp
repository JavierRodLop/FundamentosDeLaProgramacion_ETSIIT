//triangulo que mezcla simbolos y alfabeto

#include <iostream>	

using namespace std;

int main(){
   int L,i;
   char letra;
   
   letra='a';//inicializar letra en a porque es la primera letra del abecedario
   
   do{
      cout<<"introduce numero mayor a 5: ";
      cin>>L;
   }while(L<=5);//repetir mientras que el usuario introduzca valores menores a 5 porque debe dere mayor a 5
   
   
   
//primera franja (no sigue el patron) 
   for(int i=0; i<L;i++){
      cout<<'*';
   }
      cout<<endl;
      
      
//segunda franja (sigue un patron) : las lineas impares son*+++
                                    //las lineas pares son abcde....
   for(int i=0;i<L;i++){
      for(int j=0; j<L-i;j++){
         cout<<'-';//triangulo inverso de la izquierda
      }
         cout<<'*';//hay un * en cada fila de la s del centro
         

      if(i%2==1){//si la fila es impar
         for(int j=0;j<i;j++){
            cout<<'+';
         }   
      }else{//si la fila es par
         for(int j=0;j<i;j++){
            cout<<letra;
            letra++;
               if (letra == 'z' + 1){//cuando termine el abecedario vuelve a empezar
					    letra = 'a';
				  }   
         }
      }
            cout<<endl;
   }
  
}
