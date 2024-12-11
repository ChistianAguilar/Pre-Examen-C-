#include <iostream>
using namespace std;

int main() {
    const int filas = 2;      // Número de filas de las matrices
    const int columnas = 2;   // Número de columnas de las matrices

    int matriz1[filas][columnas]; // Declarar la matriz 1
    int matriz2[filas][columnas]; // Declarar la matriz 2
    int resultado[filas][columnas] = {0}; // Matriz resultado inicializada a 0

    // Llenar la primera matriz con datos ingresados por el usuario
    cout << "Ingresa los valores para la matriz numero 1 de 2x2:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    // Llenar la segunda matriz con datos ingresados por el usuario
    cout << "Ingresa los valores para la matriz numero 2 de 2x2:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Multiplicación de matrices
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int k = 0; k < columnas; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Imprimir la matriz resultado
    cout << "\nResultado de la multiplicacion de matrices:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
