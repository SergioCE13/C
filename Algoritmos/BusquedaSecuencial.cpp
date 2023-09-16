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

int busquedaSecuencial(const vector<int>& arreglo, int x) {
    int contador = 0;
    for (int elemento : arreglo) {
        if (elemento == x) {
            contador++;
        }
    }
    return contador;
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

    // Realizar la búsqueda secuencial
    int contador = busquedaSecuencial(arreglo, x);

    // Mostrar los resultados
    if (contador > 0) {
        cout << "El número " << x << " se encontró en el arreglo " << contador << " veces." << endl;
    } else {
        cout << "El número " << x << " no se encontró en el arreglo." << endl;
    }

    // Mostrar el arreglo generado
    cout << "Arreglo generado:" << endl;
    mostrarArreglo(arreglo);

    return 0;
}