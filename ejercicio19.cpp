#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(){
//Problema 19 Calcular el n-ésimo número triangular
//For
int n; // Número de términos
int triangular = 0; // Variable para almacenar el número triangular
cout << "Ingrese un numero entero positivo\n ";
cin >> n;

for (int i = 1; i <= n; i++)
{
        triangular += i; // Suma de los primeros n números naturales
}

cout << "El n-esimo numero triangular es: " << triangular << endl;
//while
int n1; // Número de términos los pedimos de nuevo para evitar errores
int triangular1 = 0; // Variable para almacenar el número triangular
cout << "Ingrese un numero entero positivo\n ";
cin >> n1;

int i1 = 1;
while (i1 <= n1) 
{
    triangular1 += i1; // Suma de los primeros n números naturales
    i1++;
}

    cout << "El n-esimo numero triangular es: " << triangular1 << endl;
//do while
int n2; // Número de términos los pedimos de nuevo para evitar errores
int triangular2 = 0; // Variable para almacenar el número triangular
cout << "Ingrese un numero entero positivo\n ";
cin >> n2;

int i2 = 1;
if (n2 > 0) 
{
    do {
        triangular2 += i2; // Suma de los primeros n números naturales
        i2++;
    } while (i2 <= n2);
}

cout << "El n-esimo numero triangular es: " << triangular2 << endl;


return 0;
}