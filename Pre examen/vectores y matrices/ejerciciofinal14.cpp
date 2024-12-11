#include <iostream>
using namespace std;

int main() {
    const int filas = 2;      // Número de filas
    const int columnas = 2;   // Número de columnas

    int matriz[filas][columnas]; // Declarar la matriz 2x2
    int suma = 0; //Variable donde se va a guardar la suma de los elementos

    // Llenar la matriz con datos ingresados por el usuario
    cout << "Ingresa los valores para la matriz de 2x2:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];

        }
    }

    // Imprimir la matriz
    cout << "\nMatriz ingresada:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
            suma += matriz[i][j];  // suma de elementos
        }
        cout << endl;
    }
    // Para imprimir la suma de los elementos de la matriz
     cout << "La suma de todos los elementos de la matriz es: " << suma << endl;
    return 0;
}
