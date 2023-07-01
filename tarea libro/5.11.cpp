#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Ingrese la cantidad de números a procesar: ";
  cin >> n;

  int num;
  int mayor = INT_MIN;
  int menor = INT_MAX;
  int suma = 0;

  for (int i = 0; i < n; i++) {
    cout << "Ingrese un número: ";
    cin >> num;

    if (num > mayor) {
      mayor = num;
    }

    if (num < menor) {
      menor = num;
    }

    suma += num;
  }

  double media = static_cast<double>(suma) / n;

  cout << "El número más grande es: " << mayor << endl;
  cout << "El número más pequeño es: " << menor << endl;
  cout << "La media es: " << media << endl;

  return 0;
}