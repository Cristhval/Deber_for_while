#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
//Problema 20  Calcular la suma de los factoriales de los primeros n números
//For
int main(){
int n; //Pedimos el numero 
cout << "Ingrese un numero entero positivo\n ";
cin >> n;

int sumaFactoriales = 0;//variable para la suma

for (int i = 1; i <= n; i++) //Realizamos la operacion para hallar el valor de los numeros y su factorial
{
    int factorial = 1;
    for (int j = 1; j <= i; j++) 
    {
        factorial *= j;
    }
    sumaFactoriales += factorial;
}

cout << "La suma de los factoriales de los primeros " << n << " numeros es: " << sumaFactoriales << endl;
//while
int n1;//Pedimos el numero otra vez para evitar errores
cout << "Ingrese un numero entero positivo\n ";
cin >> n1;

int sumaFactoriales1 = 0;
int i1 = 1;

while (i1 <= n1) //Realizamos la operacion para hallar el valor de los numeros y su factorial
{
int factorial1 = 1;
int j1 = 1;

    while (j1 <= i1) 
    {
        factorial1 *= j1;
         j1++;
    }

    sumaFactoriales1 += factorial1;
    i1++;
}

cout << "La suma de los factoriales de los primeros " << n1 << " numeros es: " << sumaFactoriales1 << endl;
//do while
int n2;//Pedimos el numero otra vez para evitar errores
cout << "Ingrese un numero entero positivo\n";
cin >> n2;

int sumaFactoriales2 = 0;
int i2 = 1;

if (n2 > 0) 
{
    do {//Realizamos la operacion para hallar el valor de los numeros y su factorial
        int factorial2 = 1;
        int j2 = 1;

         do {
            factorial2 *= j2;
            j2++;
        } while (j2 <= i2);

        sumaFactoriales2 += factorial2;
        i2++;
    } while (i2 <= n2);
}

cout << "La suma de los factoriales de los primeros " << n2 << " numeros es: " << sumaFactoriales2 << endl;


    return 0;
}
