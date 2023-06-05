#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    const int CANTIDAD_PRIMOS = 100;
    int numerosPrimos[CANTIDAD_PRIMOS];
    int contador = 0;
    int numeroActual = 2;


    while (contador < CANTIDAD_PRIMOS) {
        if (esPrimo(numeroActual)) {
            numerosPrimos[contador] = numeroActual;
            contador++;
        }
        numeroActual++;
    }

    // Mostrar la tabla de números primos
    cout << "Tabla de los primeros 100 números primos:" << endl;
    for (int i = 0; i < CANTIDAD_PRIMOS; i++) {
        cout << numerosPrimos[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}