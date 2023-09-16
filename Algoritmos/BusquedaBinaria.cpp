#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void mostrarArreglo(const vector<int>& arreglo) {
    for (int elemento : arreglo) {
        cout << elemento << " ";
    }
    cout << endl;
}

int busquedaBinaria(const vector<int>& arreglo, int x) {
    int izquierda = 0;
    int derecha = arreglo.size() - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arreglo[medio] == x) {
            return medio;
        }

        if (arreglo[medio] < x) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    return -1;  // El elemento no se encontró en el arreglo
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    // Leer el tamaño del arreglo
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    // Crear un arreglo de enteros de tamaño n y llenarlo con números aleatorios entre 0 y 10
    vector<int> arreglo(n);
    for (int i = 0; i < n; ++i) {
        arreglo[i] = rand() % 11; // Números aleatorios entre 0 y 10
    }

    // Leer el número a buscar
    int x;
    cout << "Ingrese el número a buscar: ";
    cin >> x;

    // Mostrar el arreglo original
    cout << "Arreglo original:" << endl;
    mostrarArreglo(arreglo);

    // Realizar la búsqueda binaria
    int resultado = busquedaBinaria(arreglo, x);

    // Mostrar los resultados
    if (resultado != -1) {
        cout << "El número " << x << " se encontró en el arreglo en la posición " << resultado << " por primera vez." << endl;
    } else {
        cout << "El número " << x << " no se encontró en el arreglo." << endl;
    }

    return 0;
}
