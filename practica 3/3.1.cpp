#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, h;

    cout << "Ingrese la longitud del lado a: ";
    cin >> a;

    cout << "Ingrese la longitud del lado b: ";
    cin >> b;


    h = double ((a*a) +(b*b));

    cout << "La hipotenusa del triángulo es: " << h << endl;

    return 0;
}

