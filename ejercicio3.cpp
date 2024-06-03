#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){
//Problema 3 Potencia mediante sumas sucesivas 
//for
int nm3;//numero que ingresamos para la operacion 
int exp;//Pedimos el exponente para la potencia
int sm3= 0;
cout<<"Ingrese el numero para elevarlo\n";
cin>>nm3;
cout<<"Ingrese el exponente para elevar el numero anterior\n ";
cin>>exp;
int a = pow(nm3, exp);//calculamos la potencia del numero
if(exp == 0){
    nm3 = 1;
}

for (int k = 0;k < a; k+=nm3) //hacemos que sume el mismo numero las veces necesarias para llegar a la respuesta
{
    sm3 +=nm3; 
    cout<<"+ ";
    cout<<nm3;
}
cout<<endl;
cout<<"El resultado de la potencia con for es: "<<sm3<<endl;
int smw=0; //utilizamos variables con nombres diferentes pero con los mismos valores para evitar errores
int b=a;
int wn=0;
//while
while (b>wn)
{
    smw +=nm3; 
    cout<<"+ ";
    cout<<nm3;
    wn+=nm3;
}
cout<<endl;
cout<<"El resultado de la potencia con while es: "<<smw<<endl;
//do While
int smd = 0;//utilizamos variables con nombres diferentes pero con los mismos valores para evitar errores
int dn = 0;
do
{
    smd +=nm3; 
    cout<<"+ ";
    cout<<nm3;
    dn+=nm3;
} while (a>dn);
cout<<endl;
cout<<"El resultado de la potencia con Do while es: "<<smd<<endl;

    return 0;
}