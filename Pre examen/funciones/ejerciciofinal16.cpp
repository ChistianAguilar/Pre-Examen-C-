//Christian Abel Aguilar Almiron
#include <iostream>
using namespace std;

// Función que recibe dos números enteros y devuelve su suma
int sumarNumeros(int a, int b) {
    return a + b;
}

int main() {
    int numero1, numero2;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingresa el primer numero: ";
    cin >> numero1;
    cout << "Ingresa el segundo numero: ";
    cin >> numero2;

    // Llamar a la función y mostrar el resultado
    int resultado = sumarNumeros(numero1, numero2);
    cout << "La suma es: " << resultado << endl;

    return 0;
}
