#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1,num2;

    cout << "Ingresa un numero entero: ";
    cin >> num1;
    cout << "Ingresa otro numero entero: ";
    cin >> num2;

    // 1. Operador suma:
    cout << "La suma es: " << num1 + num2 << endl;

    // 2. Operador resta:
    cout << "La resta es: " << num1 - num2 << endl;

    // 3. Operador multiplicación:
    cout << "La multiplicacion es: " << num1 * num2 << endl;

    // 4. Operador division:
    cout << "La division es: " << static_cast<double>(num1) / num2 << endl; //static_cast<double> realiza un casteo a double para la variable num1

    // 5. Operador módulo:
    cout << "El modulo es: " << num1 / num2 << endl;

    // 6. Operador potencia:
    cout << "La potencia es: " << pow(num1,num2);

    return 0;
}