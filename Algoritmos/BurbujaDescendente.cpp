#include <iostream>
#include <vector>

using namespace std;

void ordenarBurbujaDescendente(vector<int>& arreglo) {
    int n = arreglo.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arreglo[j] < arreglo[j + 1]) {
                // Intercambiar los elementos si están en el orden incorrecto (descendente)
                swap(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}

void mostrarArreglo(const vector<int>& arreglo) {
    for (int elemento : arreglo) {
        cout << elemento << " ";
    }
    cout << endl;
}

int main() {
    int n = 0;

    // Leer el tamaño del arreglo
    while (n <= 0) {
        try {
            cout << "Ingrese el tamaño del arreglo: ";
            cin >> n;
            if (n <= 0) {
                cout << "El tamaño del arreglo debe ser mayor que cero." << endl;
            }
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
            return 1;
        }
    }

    // Crear un vector de enteros para almacenar los elementos del arreglo
    vector<int> arreglo;

    // Solicitar al usuario que llene el arreglo
    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; ++i) {
        try {
            int elemento;
            cin >> elemento;
            arreglo.push_back(elemento);
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
            return 1;
        }
    }

    // Mostrar el arreglo original
    cout << "Arreglo original:" << endl;
    mostrarArreglo(arreglo);

    // Llamar al método para ordenar los elementos del arreglo en orden descendente utilizando el método de burbuja
    ordenarBurbujaDescendente(arreglo);

    // Mostrar el arreglo ordenado en orden descendente
    cout << "Arreglo ordenado descendentemente:" << endl;
    mostrarArreglo(arreglo);

    return 0;
}
