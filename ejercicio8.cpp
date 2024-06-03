#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){
//Problema 8 Producto de una serie geométrica
//for
int nm3; //numero de digitos por los que se van a multiplicar
int sg; //La serie geometrica 
int producto = 1; // donde se hara la multiplicacion
int serieg = 1; //donde se realizara la serie
int a =1; // auxiliares
int b=1;//auxiliares
cout<<"Ingrese cuan grande quiere la serie geometrica\n";
cin>>sg;
cout<<"Ingrese cuantos digitos desea multiplicar\n";
cin>>nm3;
for (int x = 0; x < sg; x++) //hacemos la serie
{
    serieg *= a * 2;
    cout<<serieg;
    cout<<" , ";
}
for (int xx = 0; xx < nm3; xx++) //hacemos la multiplicacion
{
    producto *= b*2;
    b *=2;
}
cout<<endl;
cout<<"El producto de los primeros: "<<nm3<<" numeros de la serie"<< " con for es "<<producto;//presentamos la respuesta
cout<<endl;
//While
int productow = 1; //usamos valores iguales pero variables diferentes para evitar errores
int seriegw = 1; //donde se realizara la serie
int aw =1; // auxiliares
int bw=1;//auxiliares
int xw=0; //auxiliares 
int xxw=0;
while (sg>xw)//hacemos la serie
{
    seriegw *= aw *2;
    cout<<seriegw;
    cout<<" , ";
    xw++;
}
while (nm3>xxw)//hacemos la multiplicacion
{
    productow *= bw*2;
    bw *=2;
    xxw++;
}
cout<<endl;
cout<<"El producto de los primeros: "<<nm3<<" numeros de la serie"<< " con while es "<<productow;//presentamos la respuesta
cout<<endl;
// do while
int productod = 1; //usamos valores iguales pero variables diferentes para evitar errores
int seriegd = 1; //donde se realizara la serie
int ad =1; // auxiliares
int bd=1;//auxiliares
int xd=0; //auxiliares 
int xxd=0;
do
{//hacemos la serie
    seriegd *= ad *2;
    cout<<seriegd;
    cout<<" , ";
    xd++;
} while (sg>xd);
do
{//hacemos la multiplicacion
     productod *= bd*2;
    bd *=2;
    xxd++;
} while (nm3>xxd);
cout<<endl;
cout<<"El producto de los primeros: "<<nm3<<" numeros de la serie"<< " con do while es "<<productod;//presentamos la respuesta
cout<<endl;

    return 0;
}