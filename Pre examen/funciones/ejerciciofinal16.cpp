//Christian Abel Aguilar Almiron
#include <iostream>
using namespace std;

// Funci�n que recibe dos n�meros enteros y devuelve su suma
int sumarNumeros(int a, int b) {
    return a + b;
}

int main() {
    int numero1, numero2;

    // Solicitar al usuario que ingrese dos n�meros
    cout << "Ingresa el primer numero: ";
    cin >> numero1;
    cout << "Ingresa el segundo numero: ";
    cin >> numero2;

    // Llamar a la funci�n y mostrar el resultado
    int resultado = sumarNumeros(numero1, numero2);
    cout << "La suma es: " << resultado << endl;

    return 0;
}
