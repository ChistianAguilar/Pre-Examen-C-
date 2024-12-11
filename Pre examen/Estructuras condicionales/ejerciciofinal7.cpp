// Christian Abel Aguilar Almiron
#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Inserte un numero: ";
    cin >> num;

    if (num == 0){
        cout << "El numero es igual a cero." << endl;
    }else if (num > 0){
        cout << "El numero es positivo" << endl;
    }else if (num < 0){
        cout << "El numero es negativo" << endl;
    }


}
