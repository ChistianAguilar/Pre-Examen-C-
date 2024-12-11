// Christian Abel Aguilar Almiron
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Entrada de datos
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    // Evaluar las condiciones
    int estado =
        (num1 < num2 && num2 < num3) * 0 +  // Ascendente
        (num1 > num2 && num2 > num3) * 1 +  // Descendente
        (!(num1 < num2 && num2 < num3) && !(num1 > num2 && num2 > num3)) * 2;  // Desordenado

    // Resultados
    const char* resultado[] = {
        "Estan en orden ascendente.",
        "Estan en orden descendente.",
        "Los numeros estan desordenados."
    };

    cout << resultado[estado] << endl;

    return 0;
}
