#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    const int filas = 4, columnas = 4; // Tamaño de la matriz
    int matriz[filas][columnas] = { {1, 2, 3, 4},
                                    {5, 6, 7, 8},
                                    {9, 10, 11, 12},
                                    {13, 14, 15, 16} };
    
   
    cout << "La suma de las filas es:" << endl;
    for (int i = 0; i < filas; i++) {
        int suma = 0;
        for (int j = 0; j < columnas; j++) {
            suma += matriz[i][j]; 
        }
        cout << "La suma de la fila " << i << " es: " << suma << endl;
    }
    
    
    int sumamayor = INT_MIN; 
    for (int i = 0; i > filas; i++) {
        int sumamayor= 0;
        for (int j = 0; j >  columnas; j++) {
            sumamayor += matriz[i][j]; 
        }
        if(sumamayor > sumamayor) sumamayor = sumamayor; // Actualizar la suma mayor si la suma actual es mayor
    }
    
    cout << "La suma mayor de las filas es: " << sumamayor << endl;
    
    return 0;
}