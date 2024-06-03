#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){
//Problema 11 Encontrar el MCD (Máximo Común Divisor)
//For 
int num, num1; //Pedimos los numeros
int x = 1; //ponemos un auxiliar
cout<<"Ingrese el primer termino para conseguir el MCD (Maximo Comun Divisor)\n ";
cin>>num;
cout<<"Ingrese el segundo termino\n ";
cin>>num1;
for (int i = 2; i <= 11; i++) //Realizamos la operacion siguiendo la logica del MCD
{
    while(num % i == 0 && num1 % i == 0 )
    {
        x *=i;
        num = num/i;
        num1 = num1/i;
    } 
}
cout<<"El Maximo Comun Divisor usando for "<<" es "<<x<<endl;//Presentamos la respuesta
//while
int numw, numw1; //Volvemos a perdir los numeros para evitar errores
int y = 1; 
cout << "Ingrese el primer termino para conseguir el MCD (Maximo Comun Divisor)\n";
cin >> numw;
cout << "Ingrese el segundo termino\n";
cin >> numw1;

int ii = 2;
while (ii <= 11) 
{
     while (numw % ii == 0 && numw1 % ii == 0) //Realizamos la operacion siguiendo la logica del MCD
     {
        y *= ii;
        numw = numw / ii;
        numw1 = numw1 / ii;
     }
        ii++;
    }

cout << "El Maximo Comun Divisor usando while es " << y << endl;//Presentamos la respuesta
//Do while
int numd, numd1;
int z = 1; //Volvemos a perdir los numeros para evitar errores
cout << "Ingrese el primer termino para conseguir el MCD (Maximo Comun Divisor)\n";
cin >> numd;
cout << "Ingrese el segundo termino\n";
cin >> numd1;

int k = 2;
do {
    while (num % k == 0 && num1 % k == 0){//Realizamos la operacion siguiendo la logica del MCD
            z *= k;
            numd = numd / k;
            numd1 = numd1 / k;
    }
        k++;
} while (k <= 11);

cout << "El Maximo Comun Divisor usando do-while es " << x << endl;//Presentamos la respuesta

    return 0;
}