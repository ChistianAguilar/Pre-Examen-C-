//Chistian Abel Agular Almirón
#include <iostream>
#include <string>
using namespace std;

// Función para encriptar la palabra
string encriptarPalabra(string palabra, int clave) {
    string palabraEncriptada = "";

    // Recorrer cada letra de la palabra
    for (int i = 0; i < palabra.length(); i++) {
        // Obtener el valor ASCII de la letra
        char letra = palabra[i];
        int valorAscii = (int)letra;

        // Desplazar el valor ASCII según la clave
        int valorEncriptado = valorAscii + clave;

        // Convertir el valor encriptado de vuelta a un caracter
        char letraEncriptada = (char)valorEncriptado;

        // Agregar la letra encriptada a la palabra
        palabraEncriptada += letraEncriptada;
    }

    return palabraEncriptada;
}

// Función principal
int main() {
    string palabra;
    int clave;

    // Solicitar la palabra y la clave
    cout << "Introduce una palabra: ";
    cin >> palabra;
    cout << "Introduce un número de clave del 1 al 5: ";
    cin >> clave;

    // Validar que la clave esté entre 1 y 5
    if (clave >= 1 && clave <= 5) {
        string palabraEncriptada = encriptarPalabra(palabra, clave);
        cout << "La palabra encriptada es: " << palabraEncriptada << endl;
    } else {
        cout << "Clave no válida. Debe ser un número entre 1 y 5." << endl;
    }

    return 0;
}
