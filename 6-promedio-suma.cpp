/* 
Fecha: 13/6/2024
Autor: Yo
Orden: 6) Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el 
promedio de estos números. Además, en un parámetro pasado por referencia devuelve la sumatoria de los mismos.
*/
 #include<iostream>
 using namespace std;
//debuelve el promedio de 3 numeros

double Promedio(double n1, double n2, double n3, double& sumatorioa)
{
    sumatorioa = n1 +n2 + n3;
    return sumatorioa/3;
}
 int main()

 {
    double suma;
    double res = Promedio(10, 9.5, 5.7, suma);
    cout<<endl<<"La sumade los valores es: "<< suma;
    cout<<endl<<"El preomedio es: "<<res;
    return 0;
 }