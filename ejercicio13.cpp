#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){
//Problema 13  Sumar los números pares hasta n
//For 
int par; //Pedimos hasta que numero hacemos la suma
int sup = 0;//donde hacemos la suma
cout<<"Ingrese hasta que numero par quiere sumar\n ";
cin>>par;
for (int w = 0; w <= par; w+=2) //hacemos la operacion 
{
    sup +=w;
}
cout<<"El resultado de la suma usando for es: "<<sup<<endl;//mostramos resultados
//while
int par1; // Número hasta el cual sumar pares
int sup1 = 0; // Variable para la suma
cout << "Ingrese hasta que numero par quiere sumar\n ";
cin >> par1;

int w1 = 0;
while (w1 <= par1) //hacemos la operacion
    {
        sup1 += w1;
        w1 += 2;
    }

cout << "El resultado de la suma usando while es: " << sup1 << endl;//mostramos resultados
//do while
int par2; // Número hasta el cual sumar pares
int sup2 = 0; // Variable para la suma
cout << "Ingrese hasta que numero par quiere sumar\n ";
cin >> par2;

int w2 = 0;
do {//hacemos la operacion
        sup2 += w2;
        w2 += 2;
    } while (w2 <= par2);
cout << "El resultado de la suma usando do-while es: " << sup2 << endl;//mostramos resultados

    return 0;
}