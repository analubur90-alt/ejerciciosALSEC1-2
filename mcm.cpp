// mcd.cpp
#include <iostream>
#include <cstdlib>

long long mcd(long long a, long long b) {
    a = std::llabs(a);
    b = std::llabs(b);
    if (a == 0) return b;
    if (b == 0) return a;
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    std::cout << "----- Máximo Común Divisor (MCD) -----\n";
    long long a, b;
    std::cout << "Ingrese dos enteros (separados por espacio): ";
    while (!(std::cin >> a >> b)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Entrada inválida. Reingrese los dos enteros: ";
    }
    long long resultado = mcd(a, b);
    std::cout << "El MCD de " << a << " y " << b << " es: " << resultado << "\n";
    return 0;
}