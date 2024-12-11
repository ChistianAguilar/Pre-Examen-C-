//Christian Abel Aguilar Almiron
#include <iostream>
using namespace std;

// Función para intercambiar los valores de dos variables usando paso por referencia
void valor(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Antes del intercambio: x = " << x << ", y = " << y << endl;

    // Llamada a la función para intercambiar los valores
    valor(x, y);

    cout << "Despues del intercambio: x = " << x << ", y = " << y << endl;

    return 0;
}
