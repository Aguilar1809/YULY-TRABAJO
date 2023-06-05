#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;  // Tamaño del vector
    int numeros[SIZE];    // Vector para almacenar los números
    int suma = 0;         // Variable para almacenar la suma de los números

    // Leer los números y calcular la suma
    cout << "Ingresa 10 números enteros:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    // Calcular la media aritmética
    double media = static_cast<double>(suma) / SIZE;

    // Mostrar la suma y la media
    cout << "La suma de los números es: " << suma << endl;
    cout << "La media aritmética es: " << media << endl;

    return 0;
}
