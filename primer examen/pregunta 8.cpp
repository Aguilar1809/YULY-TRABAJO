#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 4> numeros;
    
    std::cout << "Ingresa 4 números: " << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cin >> numeros[i];
    }
    
    int numeroMayor = *std::max_element(numeros.begin(), numeros.end());
    int numeroMenor = *std::min_element(numeros.begin(), numeros.end());
    
    int dobleMayor = (numeroMayor * 2) + 2;
    int dobleMenor = (numeroMenor * 2) + 2;
    
    std::cout << "El doble del número mayor más 2 es: " << dobleMayor << std::endl;
    std::cout << "El doble del número menor más 2 es: " << dobleMenor << std::endl;
    
    return 0;
}