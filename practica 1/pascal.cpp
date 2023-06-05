#include <iostream>
using namespace std;

int main() {
    int numRows = 8;

    int pascalTriangle[numRows][numRows];

    // Llenar el triángulo de Pascal
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascalTriangle[i][j] = 1;
            } else {
                pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
            }
        }
    }

    // Imprimir el triángulo de Pascal
    for (int i = 0; i < numRows; i++) {
        // Agregar espacios en blanco para alinear el triángulo
        for (int k = 0; k < numRows - i - 1; k++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << pascalTriangle[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
