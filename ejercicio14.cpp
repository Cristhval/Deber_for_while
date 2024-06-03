#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){
//Problema 14 Suma de los cuadrados de los primeros n números
//For 
int nc; //pedimos el numero
int sc=0; 
cout<<"Ingrese el numero de los cuadrados que desea sumar\n ";
cin>>nc;
for (int zz = 1; zz <= nc; zz++) //REalizamos la operacion
{
    sc+=zz*zz; 
}
cout<<"El resultado de la suma usando for es "<<sc<<endl;//mostramos el resultado
//while
int nc1; // Número de cuadrados para sumar
int sc1 = 0; // Variable para la suma
cout << "Ingrese el numero de los cuadrados que desea sumar\n ";
cin >> nc1;

int zz1 = 1;
while (zz1 <= nc1)  //REalizamos la operacion
{
    sc1 += zz1 * zz1;
    zz1++;
}

cout << "El resultado de la suma usando while es " << sc1 << endl;
//Do while
int nc2; // Número de cuadrados para sumar
int sc2 = 0; // Variable para la suma
cout << "Ingrese el numero de los cuadrados que desea sumar\n ";
cin >> nc2;

int zz2 = 1;
do { //REalizamos la operacion
    sc2 += zz2 * zz2;
    zz2++;
} while (zz2 <= nc2);

cout << "El resultado de la suma usando do-while es " << sc2 << endl;

    return 0;
}