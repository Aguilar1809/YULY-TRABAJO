#include <iostream>
#include <climits> // Para utilizar INT_MIN

int main() {
    int matriz[4][4] = {
        {10, 2, 5, 9},
        {35, 15, 7, 12},
        {1, 81, 6, 45},
        {11, 13, 14, 16}
    };

    int maximosColumnas[4] = {INT_MIN, INT_MIN, INT_MIN, INT_MIN};

    // Obtener el número mayor de cada columna
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
            if (matriz[i][j] > maximosColumnas[j]) {
                maximosColumnas[j] = matriz[i][j];
            }
        }
    }

    // Mostrar el número mayor de cada columna
    for (int j = 0; j < 4; j++) {
        std::cout << "Número mayor de la columna " << j + 1 << ": " << maximosColumnas[j] << std::endl;
    }

    return 0;
}