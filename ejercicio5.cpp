#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
int main(){
//Problema 5 Serie de Fibonacci
//For
int nf; //Pedimos el numero de digitos a presentar
int fb1 = 0;//colocamos los primeros numeros de la serie Fibonacci
int fb2 = 1;//colocamos los primeros numeros de la serie Fibonacci
int fb3 = 0;//Creamos una variable donde sumaremos los numeros de la serie
cout<<"Ingrese el numero de digitos para la serie Fibonacci\n ";
cin>>nf;
cout<<"La serie fibonacci con for:"<< " 1 , ";
for (int ff = 1; ff < nf; ff++)
{
    fb3 = fb1+fb2;  //sumamos los numeros
    cout<<fb3<<" , ";//presentamos los numeros
    fb1 = fb2;//cambiamos los numeros entre ellos para sumar los numeros anteriores y conseguir el siguiente numero
    fb2 = fb3;
}
cout<<endl;
//while
int fw = 1; //usamos variables con valores iguales pero con nombres diferentes para evitar errores.
int fbw = 0;
int fbw2 = 1;
int fbw3 = 0;
cout<<"La serie fibonacci con while:"<< " 1 , ";
while (fw<nf)
{
    fbw3 = fbw+fbw2;  //sumamos los numeros
    cout<<fbw3<<" , ";//presentamos los numeros
    fbw = fbw2;//cambiamos los numeros entre ellos para sumar los numeros anteriores y conseguir el siguiente numero
    fbw2 = fbw3;
    fw = 1 +fw;
}
cout<<endl;
//do while
int fd = 1; //usamos variables con valores iguales pero con nombres diferentes para evitar errores.
int fbd = 0;
int fbd2 = 1;
int fbd3 = 0;
cout<<"La serie fibonacci con do while:"<< " 1 , ";
do
{
     fbd3 = fbd+fbd2;  //sumamos los numeros
    cout<<fbd3<<" , ";//presentamos los numeros
    fbd = fbd2;//cambiamos los numeros entre ellos para sumar los numeros anteriores y conseguir el siguiente numero
    fbd2 = fbd3;
    fd = 1 +fd;
} while (fd<nf);

    return 0;
}