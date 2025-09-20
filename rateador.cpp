// rastreador_distancias.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "----- Rastreador de distancias -----\n";
    int n;
    cout << "Ingrese el número de viajes: ";
    cin >> n;

    vector<double> dist(n);
    double total = 0;
    for (int i = 0; i < n; i++) {
        cout << "Distancia del viaje " << i + 1 << ": ";
        cin >> dist[i];
        total += dist[i];
    }

    double promedio = total / n;
    double maxDist = dist[0];
    for (double d : dist) if (d > maxDist) maxDist = d;

    cout << "Distancia total: " << total << "\n";
    cout << "Promedio recorrido: " << promedio << "\n";
    cout << "Viaje más largo: " << maxDist << "\n";
    return 0;
}