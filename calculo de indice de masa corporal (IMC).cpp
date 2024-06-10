#include <iostream>

int main() {
    float peso, altura, imc;

    std::cout << "Ingresa tu peso en kilogramos: ";
    std::cin >> peso;

    std::cout << "Ingresa tu altura en metros: ";
    std::cin >> altura;

    imc = peso / (altura * altura);

    std::cout << "Tu índice de masa corporal (IMC) es: " << imc << std::endl;

    return 0;
}