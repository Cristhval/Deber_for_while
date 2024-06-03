#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){
//Problema 18 Contar los números primos hasta n
//For
int n;//Pedimos el numero de primos que deseamos contar
cout << "Ingrese hasta que numero desea contar los primos\n ";
cin >> n;

int total = 0;

for (int i = 2; i <= n; i++) //vemos si los numeros son primos
{
    bool esPrimo = true;
    for (int j = 2; j <= i / 2; j++) 
    {
        if (i % j == 0) 
        {
            esPrimo = false; //validamos si el numero es primo
            break;
        }
        }
        if (esPrimo) 
        {
            total++;
            
    }
    
}
cout << "El total de numeros primos hasta " << n << " es usando for:  " << total << endl;//damos el resultado
//while
int n1;//Volvemos a pedir los numeros para evitar errores
cout << "Ingrese hasta que numero desea contar los primos\n ";
cin >> n1;

int total1 = 0;
int i1 = 2;

    while (i1 <= n1) {
        bool esPrimo1 = true; //validamos si el numero es primo
        int j1 = 2;
        while (j1 <= i1 / 2) {
            if (i1 % j1 == 0) {
                esPrimo1 = false;
                break;
            }
            j1++;
        }
        if (esPrimo1) {
            total1++;
        }
        i1++;
    }

cout << "El total de numeros primos hasta " << n1 << " es " << total1 << endl;//damos el resultado
//Do while
int n2;//Volvemos a pedir los numeros para evitar errores
cout << "Ingrese hasta que numero desea contar los primos\n ";
cin >> n2;

int total2 = 0;
int i2 = 2;

    if (n2 >= 2) {
        do { //validamos si el numero es primo
            bool esPrimo2 = true;
            int j2 = 2;
            while (j2 <= i2 / 2) {
                if (i2 % j2 == 0) {
                    esPrimo2 = false;
                    break;
                }
                j2++;
            }
            if (esPrimo2) {
                total2++;
            }
            i2++;
        } while (i2 <= n2);
    }

cout << "El total de numeros primos hasta " << n2 << " es " << total2 << endl;//damos el resultado



    return 0;
}