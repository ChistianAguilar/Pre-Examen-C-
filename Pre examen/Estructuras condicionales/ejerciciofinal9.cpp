//Christian Abel Aguilar Almiron
#include <iostream>
using namespace std;
int main() {
    int opcion;
    double num1, num2, resultado;

    // menú de operaciones
    cout << "Seleccione una operacion:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "Opcion: ";
    cin >> opcion;

    cout << "Digite el primer numero: ";
    cin >> num1;
    cout << "Digite el segundo numero: ";
    cin >> num2;

    // Usar switch para realizar las operaciones
    switch (opcion) {
        case 1: // Suma
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;

        case 2: // Resta
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;

        case 3: // Multiplicación
            resultado = num1 * num2;
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
            break;

        case 4: // División
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "El resultado de la division es: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;

        default: // Opción inválida
            cout << "Opcion no valida. Por favor seleccione entre 1 y 4." << endl;
    }

    return 0;
}
