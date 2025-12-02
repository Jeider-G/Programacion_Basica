#include <iostream>
using namespace std;

int main() {
    float pesos, tasaCambio, dolares;

    cout << "Ingrese la cantidad en pesos: ";
    cin >> pesos;

    cout << "Ingrese la tasa de cambio (pesos por dolar): ";
    cin >> tasaCambio;

    dolares = pesos / tasaCambio;

    cout << "Equivalencia en dolares: " << dolares;

    return 0;
}
