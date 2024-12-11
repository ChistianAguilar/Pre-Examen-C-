//Chistian Abel Aguilar Almiron
#include <iostream>


using namespace std;

int main(){

    int numr,num1,num2,num3,num4,num5;
    cout << "Ingres el numero de referencia: ";
    cin >> numr;
    cout << "Ingres el pimer numero: ";
    cin >> num1;
    cout << "Ingres el segundo numero: ";
    cin >> num2;
    cout << "Ingres el tercer numero: ";
    cin >> num3;
    cout << "Ingres el cuarto numero: ";
    cin >> num4;
    cout << "Ingres el quinto numero: ";
    cin >> num5;


    bool numayor1 =
        (num1 > numr);
    bool numayor2 =
        (num2 > numr);
    bool numayor3 =
        (num3 > numr);
    bool numayor4 =
        (num4 > numr);
    bool numayor5 =
        (num5 > numr);

    const char* resultado[] = {"no es mayor que el de referencia", "es mayor que el de referncia"};
    cout << "El primer numero " << resultado[numayor1] << endl;
    cout << "El segundo numero " << resultado[numayor2] << endl;
    cout << "El tercer numero " << resultado[numayor3] << endl;
    cout << "El cuarto numero " << resultado[numayor4] << endl;
    cout << "El quinto numero " << resultado[numayor5] << endl;

    return 0;

}






