#include <iostream>

float celcius_para_fahrenheit(float celcius) {
    return celcius * 1.8 + 32;
}

float fahrenheit_para_celcius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

int main() {
    int modo;
    float celcius, fahrenheit;

    std::cout << "Você quer converter de Celcius para Fahrenheit ou vice-versa?\n";
    std::cout << "C° -> F° (0)\n";
    std::cout << "F° -> C° (1)\n";

    std::cin >> modo;

    std::cout << "Escolha a quantidade da unidade escolhida: ";

    if (modo) {
	std::cin >> fahrenheit;
        
        std::cout << "-------------------\n";
        std::cout << "O resultado é: " << fahrenheit_para_celcius(fahrenheit) << "C°\n";
        std::cout << "-------------------\n";

    
    } else if (!modo) {
	std::cin >> celcius;    

        std::cout << "-------------------\n";
        std::cout << "O resultado é: " << celcius_para_fahrenheit(celcius) << "F°\n";
        std::cout << "-------------------\n";
    }	

    return 0;
}
