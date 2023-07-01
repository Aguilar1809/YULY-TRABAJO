#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int base, limite;
  cout << "Ingrese la base: ";
  cin >> base;
  cout << "Ingrese el límite máximo: ";
  cin >> limite;
  for (int i = 0; (base, i) < limite; i++) {
    cout << (base, i) << " ";
  }
  cout << endl;
  return 0;
}