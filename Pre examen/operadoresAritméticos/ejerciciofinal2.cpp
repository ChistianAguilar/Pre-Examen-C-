// Christian Abel Aguilar Almi�n
// Crea un programa que solicite el radio de un c�rculo y calcule su �rea y circunferencia

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int rad;
    cout << "Ingrese el radio del circulo: ";
    cin >> rad;

    float pi = 3.14159;
    float area = (pi * rad * rad );
    double cir = (2 * pi * rad);

    cout << "El area es: " << area << endl;
    cout << "La circunferencia es: " << cir ;

}
