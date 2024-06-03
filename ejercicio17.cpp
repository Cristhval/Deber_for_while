#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(){
//Problema 17 Producto de una serie de números fraccionarios
int n; // Número de términos
double rs = 1; // Inicializamos en 1 para la multiplicación
cout << "Ingrese un numero entero positivo\n ";
cin >> n;

for (int i = 1; i <= n; i++) //hacemos la operacion
{
    rs = rs * (1.0 / i);
}

cout << "El resultado del producto con for es " << rs << endl;
//While
int n1; //Pedimos el numero de terminos otravez para evitar errores
double rs1 = 1;
cout << "Ingrese un numero entero positivo\n ";
cin >> n1;

int i1 = 1;
while (i1 <= n) //hacemos la operacion
{
    rs1 = rs1 * (1.0 / i1);
    i1++;
}

cout << "El resultado del producto con while es " << rs1 << endl;
//Do while
int n2; //Pedimos el numero de terminos otravez para evitar errores
double rs2 = 1;
cout << "Ingrese un numero entero positivo\n ";
cin >> n2;

int i2 = 1;
do {//hacemos la operacion
    rs2 = rs2 * (1.0 / i2);
    i2++;
} while (i2 <= n2);

cout << "El resultado del producto con do-while es " << rs2 << endl;


    return 0;
}