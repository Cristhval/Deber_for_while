#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(){
double numero; //Pedimos el numero al que queremos sacar la raiz
cout << "Ingrese un numero\n ";
cin >> numero;

double resultado = 0;
double incremento = 0.001; // Cuanto menor sea el incremento, mayor será la precisión

for (double i = 0; i * i * i <= numero; i += incremento) //hacemos las operaciones necesarias para llegar al resultado
{
    resultado = i;
}

cout << "La raiz cubica aproximada de " << numero << " es: " << resultado << endl;//mostramos el resultado lo mas cercano preciso posible
//while
double numero1;//Pedimos otravez el numero para evitar errores
cout << "Ingrese un numero\n ";
cin >> numero1;

double resultado1 = 0;
double incremento1 = 0.001; // Cuanto menor sea el incremento, mayor será la precisión

double i1 = 0;
while (i1 * i1 * i1 <= numero1) //hacemos las operaciones necesarias para llegar al resultado
{
    resultado1 = i1;
    i1 += incremento1;
}

 cout << "La raiz cubica aproximada de " << numero1 << " es: " << resultado1 << endl;//mostramos el resultado lo mas cercano preciso posible
//do while
double numero2;//Pedimos otravez el numero para evitar errores
cout << "Ingrese un numero\n ";
cin >> numero2;

double resultado2 = 0;
double incremento2 = 0.001; // Cuanto menor sea el incremento, mayor será la precisión

double i2 = 0;
do {//hacemos las operaciones necesarias para llegar al resultado
        resultado2 = i2;
        i2 += incremento2;
} while (i2 * i2 * i2 <= numero2);

cout << "La raiz cubica aproximada de " << numero2 << " es: " << resultado2 << endl;


    return 0;
}