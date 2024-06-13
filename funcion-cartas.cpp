/* 
Fecha: 13/6/2024
Autor: Yo
Orden: Diseñe la funcion que improma una carta de un maso de naipe
el 1 = A de brillo, 2 = A de corazon
*/
#include<iostream>
using namespace std; 
void ImpromeCarta(int carta, string  simbolo)
{
    if (carta == 1 && simbolo == "Brillo")
    {
        cout<<"╔══════════╗"<<endl;
        cout<<"║          ║"<<endl;
        cout<<"║          ║"<<endl;
        cout<<"║    A♦    ║"<<endl;
        cout<<"║          ║"<<endl;
        cout<<"║          ║"<<endl;
        cout<<"╚══════════╝";
    }
}
int main()
{
cout<<endl;
ImpromeCarta(1, "Brillo");
return 0;
}
