// Christian Abel Aguilar Almirón
#include <iostream>
using namespace std;

int main(){

    int num1, num2;
    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    cout << "Ingrese el primer segundo entero: ";
    cin >> num2;

    int suma = (num1 + num2);
    int resta = (num1 - num2);
    int mult = (num1 * num2);
    int divi = (num1 / num2);

    cout << "El resultado es de las operaciones es:" << endl << "Suma:" << suma << endl << "Resta:" << resta << endl << "Multiplicacion:" << mult << endl << "Divicion:" << divi << endl;
}
