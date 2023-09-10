#include <iostream> //Importamos la librería iostream para la entrada y salida de datos.

using namespace std; //Declaramos el espacio de nombres std para el compilador.

// En C++ la función main siempre debe retornar un entero el cual indicará si el programa se ejecutó correctamente o el error que ocurrió.
int main() {
    //Declaración de una variable: tipo nombre_variable;
    int numero1,numero2, operacion; //En caso de que se requiera inicializar se debe escribir int numero = valor;

    // Salida a consola:
    cout << "Introduce un numero entero: ";

    //Entra de teclado:
    cin >> numero1;

    cout << "\nIngresa otro numero entero: "; // \n <-- se utiliza para el salto de linea.
    cin >> numero2;
    return 0;
}
