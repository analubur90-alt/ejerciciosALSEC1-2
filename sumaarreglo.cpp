// suma_arreglo.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "----- Suma de elementos de un arreglo -----\n";
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Ingrese " << n << " números enteros:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long suma = 0;
    for (int x : arr) suma += x;

    cout << "La suma de los elementos es: " << suma << "\n";
    return 0;
}