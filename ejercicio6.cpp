#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
int main (){

//Problema 6 Factorial de un numero 
//For
int nm; //Pedimos el numero al que vamos a conseguir su factorial
int fac = 1;
cout<<"Ingrese un numero para calcular el factorial:\n ";
cin>>nm;
for (int i = 1; i <= nm; i++) //vamos desde el numero 1 hasta el numero que ingresamos y los multiplicamos
{
    fac = fac * i;
}
cout<<"El factorial de: "<<nm<<" con for es "<<fac; //Presentamos el resultado
cout<<endl;
//while 
int ii=1; //Usamos variables con nombres diferentes pero con los mismos valores para evitar errores
int facw =1;  
while (nm>=ii)
{
    facw = facw * ii;
    ii = 1 + ii;
}
cout<<"El factorial de: "<<nm<<" con while es "<<facw; //Presentamos el resultado
cout<<endl;
//do while 
int id = 1;//Usamos variables con nombres diferentes pero con los mismos valores para evitar errores
int facd = 1;
do
{
    facd = facd * id;
    id = 1 + id;
} while (nm>=id);

cout<<"El factorial de: "<<nm<<" con do while es "<<facd; //Presentamos el resultado
cout<<endl; 

    return 0; 
}