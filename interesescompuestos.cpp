// interes_compuesto.cpp
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << "----- Cálculo de Interés Compuesto -----\n";
    double P, r;
    int n, t;

    std::cout << "Capital inicial (P): ";
    while (!(std::cin >> P) || P < 0) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Entrada inválida. Ingrese un número >= 0: ";
    }

    std::cout << "Tasa anual (%) (ej: 5 para 5%): ";
    while (!(std::cin >> r)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Entrada inválida. Reingrese la tasa: ";
    }

    std::cout << "Número de periodos por año (n, ej 12): ";
    while (!(std::cin >> n) || n <= 0) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Entrada inválida. Ingrese un entero positivo: ";
    }

    std::cout << "Número de años (t): ";
    while (!(std::cin >> t) || t < 0) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Entrada inválida. Ingrese un entero >= 0: ";
    }

    double rd = r / 100.0;
    double M = P * std::pow(1.0 + rd / n, n * t);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Monto final después de " << t << " años: " << M << "\n";
    return 0;
}
