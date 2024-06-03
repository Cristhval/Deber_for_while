#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){
//Problema 10  Verificar si un número es primo
//for
int num5; //pedimos el numero 
cout << "Ingresa un numero para determinar si es primo:\n ";
cin >> num5;

    if (num5 <= 1) {
        cout << "No es primo usando for " << endl; //verificamos el numero
        return 0;
    }

    bool esPrimo = true; //evaluamos si es falso o verdadero 

    for (int divisor = 2; divisor <= sqrt(num5); ++divisor) { // desarrollamos el proceso para conseguir el resultado
        if (num5 % divisor == 0) {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo) { //condicionamos para mostrar el resultado 
        cout << "Es primo usando for " << endl;
    } else {
        cout << "No es primo usando for " << endl;
    }

//while
int nu;//pedimos nueva mente el numero para evitar errores
cout << "Ingresa un numero para determinar si es primo:\n ";
cin >> nu;

    if (nu <= 1) {
        cout << "No es primo usando while " << endl;//verificamos el numero
        return 0;
    }

bool esprimo = true;
int divisor2 = 2;

    while (divisor2 <= sqrt(nu)) {// desarrollamos el proceso para conseguir el resultado
        if (nu % divisor2 == 0) {
            esprimo = false;
            break;
        }
        ++divisor2;
    }

    if (esprimo) {//condicionamos para mostrar el resultado 
        cout << "Es primo usando while " << endl;
    } else {
        cout << "No es primo usando while " << endl;
    }
//do while
int nuw;//pedimos nueva mente el numero para evitar errores
cout << "Ingresa un numero para determinar si es primo:\n ";
cin >> nuw;

    if (nuw <= 1) {
        cout << "No es primo usando do while" << endl;//verificamos el numero
        return 0;
    }

bool espprimo = true;
int divisor3 = 2;

    do {// desarrollamos el proceso para conseguir el resultado
        if (nuw % divisor3 == 0) {
            espprimo = false;
            break;
        }
        ++divisor3;
    } while (divisor3 <= sqrt(nuw));

    if (espprimo) {//condicionamos para mostrar el resultado 
        cout << "Es primo usando do while " << endl;
    } else {
        cout << "No es primo usando do while " << endl;
    }

    return 0;
}