/* 
Fecha: 13/6/2024
Autor: Yo
Orden: 7)  Escriba la función que determina si un número pasado como parámetro es múltiplo de 7.
*/
#include<iostream>
using namespace std; 


bool MultiploSiete(int num)
{
    if(num % 7 == 0)
        true;
        else
            return false;
}
int main()
{
    
    if(MultiploSiete(49))
    cout<<endl<<"49 es multiplo de 7";
    else
    cout<<endl<<"49 no es multiplo de 7";
    return 0;
}