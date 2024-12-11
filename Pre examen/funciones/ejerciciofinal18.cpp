#include <iostream>
using namespace std;

// Funci�n para calcular el mayor de tres n�meros
void findMax(int a, int b, int c, int &maxValue) {
    maxValue = a; // Suponemos que 'a' es el mayor inicialmente
    if (b > maxValue) {
        maxValue = b;
    }
    if (c > maxValue) {
        maxValue = c;
    }
}

int main() {
    int num1, num2, num3, maxNum;

    // Lectura de tres n�meros
    cout << "Ingrese primer numeros: ";
    cin >> num1 ;
    cout << "Ingrese segundo numeros: ";
    cin >> num2 ;
    cout << "Ingrese tres numeros: ";
    cin >> num3 ;

    // Llamada a la funci�n para encontrar el mayor
    findMax(num1, num2, num3, maxNum);

    // Mostrar el resultado
    cout << "El mayor numero es: " << maxNum << endl;

    return 0;
}
