#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(){
//Problema 16 Suma de una serie de números fraccionarios
//for 
int n; //Pedimos el numero de terminos
double rs=0;
cout<<"Ingrese un numero entero positivo\n";
cin>>n;
for (int i = 1; i <= n; i++)
{
    rs = rs +(1.0/i);
}
cout<<endl;
cout<<"El resultado de la suma con for es "<<rs<<endl;
//While
int n1; //Pedimos el numero de terminos otravez para evitar errores
double rs1 = 0;
cout << "Ingrese un numero entero positivo\n ";
cin >> n1;

int i1 = 1;
while (i1 <= n) 
{
    rs1 = rs1 + (1.0 / i1);
    i1++;
}

cout << "El resultado de la suma con while es " << rs1 << endl;
//Do while
int n2; //Pedimos el numero de terminos otravez para evitar errores
double rs2 = 0;
cout << "Ingrese un numero entero positivo\n ";
cin >> n2;

int i2 = 1;
do {
    rs2 = rs2 + (1.0 / i2);
    i2++;
} while (i2 <= n2);

cout << "El resultado de la suma con do-while es " << rs2 << endl;

    return 0;
}