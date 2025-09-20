// costo_tienda.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "----- Calculadora de costo total en tienda -----\n";
    int n;
    cout << "Ingrese número de productos: ";
    cin >> n;

    double total = 0;
    for (int i = 0; i < n; i++) {
        double precio;
        int cantidad;
        cout << "Producto " << i + 1 << " - Precio: ";
        cin >> precio;
        cout << "Cantidad: ";
        cin >> cantidad;
        total += precio * cantidad;
    }

    cout << "Costo total a pagar: " << total << "\n";
    return 0;
}