#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){
//Problema 7 suma de una serie aritmetica 
//For
int nm2; //Pedimos el numero de digitos a sumar
int sr; //Pedimos cuan grande va a ser la serie
int serie;//Agregamos la variable donde vamos a imprimir la serie
int suma = 0;//variable para la suma 
cout<<"Ingrese el numero de digitos para la serie\n ";
cin>>sr;
cout<<"Ingrese cuantos digitos de la serie desea sumar\n ";
cin>>nm2;
for (int j = 1; j <= sr; j++)//hacemos la serie
{
    serie = j;
    cout<<" + ";
    cout<<serie;
}
   for (int jj = 0;jj <= nm2; jj++) //hacemos un for solo para la suma
    {
        suma = suma + jj; 
    }

cout<<endl;
cout<<"La suma de los primeros: "<<nm2<<" numeros de la serie"<<" con for es "<<suma;//presentamos el resultado
cout<<endl;
//while 
int jw = 1; //Usamos los mismos valores pero con nombres diferentes para evitar errores
int seriew;
int sumaw=0;
int jjw= 0; 
while (sr>=jw) //hacemos la serie
{
    seriew = jw;
    cout<<" + ";
    cout<<seriew;   
    jw++;
}
while (jjw<=nm2) //hacemos la suma
{
    sumaw = sumaw + jjw;
    jjw++;
}
cout<<endl;
cout<<"La suma de los primeros: "<<nm2<<" numeros de la serie "<<" con while es "<<sumaw;//presentamos el resultado
cout<<endl;
//DO while
int jd = 1;//Usamos los mismos valores pero con nombres diferentes para evitar errores
int seried;
int sumad=0;
int jjd =0;

do//hacemos la serie
{
    seried = jd;
    cout<<" + "; 
    cout<<seried;
    jd++;
} while (sr>=jd);
do
{
    sumad = sumad + jjd;
    jjd++;
} while (jjd<=nm2);//hacemos la suma
cout<<endl;
cout<<"La suma de los primeros: "<<nm2<<" numeros de la serie"<<" con do while es "<<sumad<<endl;//presentamos el resultado


    return 0;
}
