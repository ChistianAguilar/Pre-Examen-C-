// Christian Abel Aguilar Almiron
#include "iostream"

using namespace std;
int main()
{
    int opcion = 0, num;
    do
    {
        cout << "Ingrese 1 Calcular el cuadrado de un numero\n";
        cout << "Ingrese 2 Calcular el cubo de un numero\n";
        cout << "Ingrese 0 para salir\n";

        cout << "Ingrese una opcion a ejecutar\n";
        cin >> opcion;

        switch (opcion){

        case 1 :
            cout << "Ingrese un numero: ";
            cin >> num;
            cout << "El cuadrado de " << num << " es: " << num * num << endl;
            break;
        case 2 :
            cout << "Ingrese un numero";
            cin >> num;
            cout << "El cubo de " << num << " es:" << num * num * num << endl;
            break;
        case 0:
            cout << "SALIENDOOOOOOOOOOO...";
            break;
        default:
            cout << "Esa no es una opcion";
            break;

        }
    }
    //Mostramos el menú hasta que la opción sea cero
    while(opcion != 0);
    system("PAUSE");
    return 0;
}
