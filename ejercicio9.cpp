#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){
//Problema 9 Número de dígitos de un número
//for 
int nm4; //Pedimos el numero 
int dig = 1; //usamos una variable para contar los digitos
cout<<"Ingrese el numero al cual se quiere contar los digitos\n";//ingresamos el numero
cin>>nm4;
for  ( ;nm4>= 10; dig++) //contamos los numeros 
{
    nm4 = nm4/10;
}
cout<<"El numero usando for tiene "<<dig<<" cifras";//mostramos los numeros
cout<<endl;
//while
int num4;//pedimos nueva mente el numero para evitar errores
cout<<"Ingrese el numero al cual se quiere contar los digitos\n ";
cin>>num4;
int digw =1; //usamos variables con los mismos valores anteriores para evitar errores
while (num4>=10)
{
    num4 = num4/10;
    digw++;
}
cout<<"El numero usando while tiene "<<digw<<" cifras";//mostramos los numeros
cout<<endl;
//do while
int num4d; //pedimos nueva mente el numero para evitar errores
cout<<"Ingrese el numero al cual se quiere contar los digitos\n ";
cin>>num4d;
int dgd=1;//usamos variables con los mismos valores anteriores para evitar errores
do
{
    num4d = num4d/10;
    if (num4d>=1)
    {
        dgd++;
    }
    
} while (num4d>=10);
cout<<"El numero usando do while tiene "<<dgd<<" cifras";//mostramos los numeros
cout<<endl;

    return 0;
}