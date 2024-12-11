// Christian Abel Aguilar Almiron
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Entrada de datos
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Determinar el estado
    int estado =
        (num1 == num2) * 0 +  // Caso 0: números iguales
        (num1 > num2) * 1 +   // Caso 1: num1 mayor
        (num1 < num2) * 2;    // Caso 2: num2 mayor

    // Mensajes de resultado
    const char* resultado[] = {
        "Los numeros son iguales.",
        "El Primer numero es mayor.",
        "El segundo numero es mayor."
    };

    // Imprimir el resultado correspondiente
    cout << resultado[estado] << endl;

    return 0;
}
