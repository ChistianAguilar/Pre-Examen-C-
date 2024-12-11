// Christian Abel Aguilar Almiron

#include "iostream"

using namespace std;
int main()
{
    int numero, suma = 0;
    cout <<  "Ingrese un numero: ";
    cin >> numero;
    while(numero >= 0)
    {
        suma = suma + numero;
        cout <<  "Ingrese un numero ";
        cin >> numero;
    }
    cout <<  "la suma total es: "<< suma;
    system("PAUSE");
    return 0;
}
