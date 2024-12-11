// Christian Abel Aguilar Almirón
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){

      int num1, num2, num3;
      cout << "Digite el primer numero: ";
      cin >> num1;
      cout << "Digite el segundo numero: ";
      cin >> num2;
      cout << "Digite el tercer numero: ";
      cin >> num3;

      float promedio = (num1 + num2 + num3) / 3;
      double minimo = min ({num1, num2, num3});
      double maximo = max ({num1, num2, num3});

      cout << "El promedio es: " << promedio << endl;
      cout << "El maxio es: " << maximo << endl;
      cout << "El minimo es: " << minimo << endl;
      cout << "La diferencia entre el maximo y el minimo es: "<< maximo - minimo;
      return 0;
}
