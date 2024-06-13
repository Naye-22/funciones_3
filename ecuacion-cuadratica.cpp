/* 
Fecha: 13/6/2024
Autor: Yo
Orden: 4) Diseñe la función que resuelva el problema de la ecuación cuadrática. La función debe recibir 
en total 5 parámetros: los 3 primeros son los valores a, b y c que representan los coeficientes de la ecuación. 
Los 2 parámetros restantes representan los valores resultantes de la ecuación, en este caso x1, y x2 que se 
deben pasar como referencias. La función devuelve falso, si la ecuación presenta errores; caso contrario 
devuelve verdadero.
*/
#include<iostream>
#include<math.h>
using namespace std;
//calcular los valores x1 x2 de la ecuacion cuadratica
bool EcuacionCuadratica(double a, double b, double c, double x1, double x2)
    {
        if(a==0)
            return false;
        double d =(b*b) - (4*a*c);
        if(d<0) //error raiz negativa
        return false;
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
    }   
int main()
{
    double x1, x2;
    bool retustado = EcuacionCuadratica(1, 4, 4, x1, x2);
    if (retustado) {   //if resultado==true
    cout<<endl<<"El resulado de x1 de la ecuacion cuadratica: "<<x1;
    cout<<endl<<"El resulado de x1 de la ecuacion cuadratica: "<<x2;
    }
    else {
        cout<<endl<<"ERROR: no se puede resolver :( ";
    }

    return 0;
}