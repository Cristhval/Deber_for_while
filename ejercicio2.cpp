#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){

//Problema 2 Inverso de un numero
//For
int nm2; // numero que ingresamos para la operacion 
int sm2 = 0; //variable necesaria para invertir los numeros
cout<<"Ingrese un numero para ser invertido\n";
cin>>nm2;
for (int j = 0; (j = nm2); j++) //hacemos las operaciones
{
    sm2 = sm2 * 10 + nm2 %10; 
    nm2 = nm2/10; 
}
cout<<"El inverso del numero con for es: "<<sm2<<endl;
//While
while (nm2>0)//hacemos las operaciones
{
    sm2 = sm2 * 10 + nm2 %10; 
    nm2 = nm2/10; 
}
cout<<"El inverso del numero con while es: "<<sm2<<endl;
//Do while
do
{//hacemos las operaciones
    sm2 = sm2 * 10 + nm2 %10; 
    nm2 = nm2/10; 

} while (nm2>0);

cout<<"El inverso del numero con do while es: "<<(sm2/10)<<endl;

    return 0; 
}