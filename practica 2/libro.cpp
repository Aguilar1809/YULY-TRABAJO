#include <iostream>
#include <string>
using namespace std;

struct Libro {
    string titulo;
    string autor;
};

const int MAX_LIBROS = 8;
Libro libros[MAX_LIBROS];
int contadorLibros = 0;

void agregarLibro() {
    if (contadorLibros >= MAX_LIBROS) {
        cout << "No se pueden agregar más libros. Límite alcanzado." << endl;
        return;
    }

    Libro nuevoLibro;

    cout << "Ingrese el título del libro: ";
    getline(cin, nuevoLibro.titulo);

    cout << "Ingrese el autor del libro: ";
    getline(cin, nuevoLibro.autor);

    libros[contadorLibros] = nuevoLibro;
    contadorLibros++;

    cout << "Libro agregado exitosamente." << endl;
}

void mostrarLibros() {
    if (contadorLibros == 0) {
        cout << "No hay libros almacenados." << endl;
        return;
    }

    cout << "Libros almacenados:" << endl;
    for (int i = 0; i < contadorLibros; i++) {
        cout << "Título: " << libros[i].titulo << endl;
        cout << "Autor: " << libros[i].autor << endl;
        cout << endl;
    }
}

int main() {
    while (true) {
        cout << "1. Agregar libro" << endl;
        cout << "2. Mostrar libros almacenados" << endl;
        cout << "3. Salir" << endl;

        int opcion;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore(); // Para limpiar el buffer del salto de línea

        switch (opcion) {
            case 1:
                agregarLibro();
                break;
            case 2:
                mostrarLibros();
                break;
            case 3:
                cout << "¡Hasta luego!" << endl;
                return 0;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    }

    return 0;
}