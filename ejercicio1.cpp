#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std; 
int main(){

//Problema 1: suma de los digitos de un numero
//For
int nm; //número que ingresamos
int sm = 0; // donde hacemos la suma de numeros
cout<<"Ingrese un numero de tres digitos para sumar sus digitos\n "; //pedimos el numero que usameros 
cin>>nm; //Ingresamos el numero
for (int i = 0; (i = nm); i++)//hacemos las operaciones necesarias
{
    sm = sm + nm%10;
    nm = nm/10;
}
cout<<"El resultado de la suma de digitos con for es: "<<sm<<endl;//Mostramos el resultado
//While
while (nm>0)//hacemos las operaciones necesarias
{
    sm = sm + nm%10;
    nm = nm/10;
}
cout<<"El resultado de la suma de digitos con while es: "<<sm<<endl;
//Do while
do{//hacemos las operaciones necesarias
    sm = sm + nm%10;
    nm = nm/10;
}
while(nm>0); 
cout<<"El resultado de la suma de digitos con Do while es: "<<sm<<endl; 

return 0;
}