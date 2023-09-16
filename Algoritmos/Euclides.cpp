#include <iostream>
#include <vector>

using namespace std;

int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

int calcularMCDLista(const vector<int>& valores) {
    if (valores.empty()) {
        return 0;
    }

    int mcd = valores[0];

    for (size_t i = 1; i < valores.size(); ++i) {
        mcd = calcularMCD(mcd, valores[i]);
    }

    return mcd;
}

int main() {
    int n = 0;

    // Solicitar al usuario el número de valores
    while (n <= 0) {
        try {
            cout << "Ingrese la cantidad de valores: ";
            cin >> n;
            if (n <= 0) {
                cout << "El número de valores debe ser mayor que cero." << endl;
            }
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
            return 1;
        }
    }

    // Crear un vector de enteros para almacenar los valores
    vector<int> valores;

    // Leer los valores desde el teclado
    cout << "Ingrese los valores uno por uno:" << endl;
    for (int i = 0; i < n; ++i) {
        try {
            int valor;
            cin >> valor;
            valores.push_back(valor);
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
            return 1;
        }
    }

    // Calcular el MCD de los valores utilizando el algoritmo de Euclides
    int mcd = calcularMCDLista(valores);

    // Mostrar el resultado
    cout << "El MCD de los números ingresados es: " << mcd << endl;

    return 0;
}
