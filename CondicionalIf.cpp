#include <iostream>
using namespace std;

int main(){
    int numero;

    cout << "Ingresa un numero para verificar si es par: ";
    cin >> numero;

    if(numero%2 == 0) { //Ponemos un condicional para verificar si el residuo de la division entre numero y 2 es 0
        cout << "El numero es par" << endl;
    }else{ // En caso de que no se cumpla la condición anterior indicamos el caso default
        cout << "El numero es impar" << endl;
    }
    return 0;
}
