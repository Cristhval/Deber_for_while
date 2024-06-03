#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){
//Problema 12 Sumar los números impares hasta n
//For 
int imp; //Pedimos el numero de impares a sumar
int suim = 0; //Variable para la suma
cout<<"Ingrese hasta que numero impar desea sumar\n";
cin>>imp;
for (int s = 1; s <= imp; s+=2) //hacemos las operaciones
{  
    suim += s;
}
cout<<"El resultado de la suma de los numeros impares usando for es: "<<suim<<endl;//damos el resultado
//While
int imp1; //Volvemos a pedir los numeros para evitar errores
int suim1 = 0;
cout << "Ingrese hasta que numero impar desea sumar\n";
cin >> imp1;

int ss = 1;
while (ss <= imp1) 
{
    suim1 += ss; //Hacemos la operacion
    ss+=2;
}

cout << "El resultado de la suma de los numeros impares usando while es: " << suim1 << endl;//Damos el resultado

//Do while
int imp2;//Pedimos los numeros para evitar errores
int suim2 = 0;
cout << "Ingrese hasta que numero impar desea sumar\n";
cin >> imp2;

int l = 1;
do {
        suim2 += l; //hacemos las operaciones
        l+=2;
} while (l <= imp2);

cout << "El resultado de la suma de los numeros impares usando do-while es: " << suim2 << endl; //damos el resultado

    return 0;
}