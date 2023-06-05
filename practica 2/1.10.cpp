
#include <iostream>

#include <iostream>
using namespace std;

const int FILAS = 4;  // Número de filas de la matriz
const int COLUMNAS = 4;  // Número de columnas de la matriz

void encontrarMayorMenor(const int matriz[][COLUMNAS]) {
    int mayor = matriz[0][0];  // Elemento mayor inicializado con el primer elemento de la matriz
    int menor = matriz[0][0];  // Elemento menor inicializado con el primer elemento de la matriz
    int posMayorFila = 0;     // Posición de fila del elemento mayor
    int posMayorColumna = 0;  // Posición de columna del elemento mayor
    int posMenorFila = 0;     // Posición de fila del elemento menor
    int posMenorColumna = 0;  // Posición de columna del elemento menor

    // Recorrer la matriz para encontrar el mayor y el menor
    for (int fila = 0; fila < FILAS; fila++) {
        for (int columna = 0; columna < COLUMNAS; columna++) {
            if (matriz[fila][columna] > mayor) {
                mayor = matriz[fila][columna];
                posMayorFila = fila;
                posMayorColumna = columna;
            }
            if (matriz[fila][columna] < menor) {
                menor = matriz[fila][columna];
                posMenorFila = fila;
                posMenorColumna = columna;
            }
        }
    }

    // Mostrar el resultado en pantalla
    cout << "El elemento mayor es: " << mayor << endl;
    cout << "Se encuentra en la posición: [" << posMayorFila << "][" << posMayorColumna << "]" << endl;
    cout << "El elemento menor es: " << menor << endl;
    cout << "Se encuentra en la posición: [" << posMenorFila << "][" << posMenorColumna << "]" << endl;
}

int main() {
    int matriz[FILAS][COLUMNAS] = {
        {5, 8, 2, 6},
        {3, 1, 7, 8},
        {9, 4, 6, 2},
        {3, 5, 2, 5}
    };

    encontrarMayorMenor(matriz);

    return 0;
}