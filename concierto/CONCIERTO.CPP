#include <iostream>
using namespace std;

int main() {
  int ubicacion;
    int cantidad;
    int precio;
    string bebida;
    int total;

    cout << "Ubicaciones disponibles:" << endl;
    cout << "1. General - 50" << endl;
    cout << "2. Preferencial - 80" << endl;
    cout << "3. Platea - 120" << endl;
    cout << "4. VIP - 160" << endl;

    cout << "Ingrese la ubicación deseada (1-4): ";
    cin >> ubicacion;

    cout << "Ingrese la cantidad de entradas: ";
    cin >> cantidad;

    switch (ubicacion) {
        case 1:
            precio = 50;
            break;
        case 2:
            precio = 80;
            break;
        case 3:
            precio = 120;
            break;
        case 4:
            precio = 160;
            cout << "Elija una bebida (gaseosa, cerveza, agua): ";
            cin >> bebida;
            break;
        default:
            cout << "Opción inválida." << endl;
            return 0;
    }

     total = precio * cantidad;
    cout << "El total a pagar es: $" << total << endl;

    if (ubicacion == 4) { //QUE SIGNIFICA ESTA LINEA DE CODIGO
      //if es una condición
      //(ubicacion ==4)se utiliza para comprobar los valores
        cout << "Bebida seleccionada: " << bebida << endl;
    }

    return 0;
}
