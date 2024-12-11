// Christian Abel Aguilar Almiron
#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Elige un numero del 1 al 7 para saber el dia de la semana:";
    cin >> num;


    switch (num)
    {

    case 1:
        cout << "Has elegido el dia LUNES " ;
        break;
    case 2:
        cout << "Has elegido el dia MARTES " ;
        break;
    case 3:
        cout << "Has elegido el dia MIERCOLES " ;
        break;
    case 4:
        cout << "Has elegido el dia JUEVES " ;
        break;
    case 5:
        cout << "Has elegido el dia VIERNES ";
        break;
    case 6:
        cout << "Has elegido el dia SABADO " ;
        break;
    case 7:
        cout << "Has elegido el dia DOMINGO " ;
        break;
    default:
        cout << "Esa no es una opcion";
        break;
    }
return 0;
}
