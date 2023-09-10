/*
 *  En esta ocación se muestra el uso de operadores de comparación
 *  y operadores lógicos.
 * */

#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Ingresa 1 numero: ";
    cin >> num1;
    cout << "Ingresa otro numero: ";
    cin >> num2;

    if(num1%2 == 0 && num2%2 == 0){ // Para comparar cuando dos numeros son iguales se utiliza el operador: "==", para utilizar el operador AND se utilza: "&&"
        cout << "Ambos numeros son pares :)" << endl;
    }else if(num1%2 == 0 || num2%2 == 0){ //Para utilizar el operador OR se utiliza "||"
        cout << "Uno de los dos numeros es par :/" << endl;
    }else if (num1%2 != 0 && num2%2 != 0){ //Para comparar cuando dos valores son diferentes se utiliza "!="
        cout << "Ambos numeros son impares :(" << endl;
    }

    //Nota: cuando requieres anidar if se utiliza la instrucción else if.

    //Nota: Cuando se declaran if independientes, aun i un if anterior cumple su condición, se verificará la condición del siguiente if.
    if(num1 > num2) { // Para comparar cuando un valor es mayor a otro se utiliza ">"
        cout << "El numero " << num1 << " es mayor" << endl;
    } else if(num1 < num2){ // Para comparr cuando un vlor es menor a otro se utiliza "<"
        cout << "El numero " << num2 << " es mayor" << endl;
    } else{
        cout << "Lo numeros son iguales :)";
    }

    return 0;
}