//Christian Abel Aguilar Almirón
#include <iostream>
#include <string>
using namespace std;

// Función para desencriptar la palabra
string desencriptarPalabra(string palabraEncriptada, int clave) {
    string palabraDesencriptada = "";

    // Recorrer cada letra de la palabra encriptada
    for (int i = 0; i < palabraEncriptada.length(); i++) {
        // Obtener el valor ASCII de la letra
        char letra = palabraEncriptada[i];
        int valorAscii = (int)letra;

        // Desplazar el valor ASCII hacia atrás según la clave
        int valorDesencriptado = valorAscii - clave;

        // Convertir el valor desencriptado de vuelta a un caracter
        char letraDesencriptada = (char)valorDesencriptado;

        // Agregar la letra desencriptada a la palabra
        palabraDesencriptada += letraDesencriptada;
    }

    return palabraDesencriptada;
}

// Función principal
int main() {
    string palabraEncriptada;

    // Solicitar la palabra encriptada
    cout << "Introduce la palabra encriptada: ";
    cin >> palabraEncriptada;

    // Generar las 5 posibles palabras desencriptadas
    for (int clave = 1; clave <= 5; clave++) {
        string palabraDesencriptada = desencriptarPalabra(palabraEncriptada, clave);
        cout << "Con clave " << clave << ": " << palabraDesencriptada << endl;
    }

    return 0;
}
