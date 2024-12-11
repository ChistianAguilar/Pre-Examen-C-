// Christian Abel Aguilar Almiron
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros(5); // Crear un vector para almacenar 5 números

    // Solicitar al usuario que ingrese los números
    cout << "Ingresa 5 numeros:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];

    }


    // Imprimir los números en orden inverso
    cout << "Numeros en orden inverso:" << endl;
    for (int i = 4; i >= 0; i--) { // Iterar de atrás hacia adelante
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
