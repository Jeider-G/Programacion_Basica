#include <iostream>
using namespace std;

int main() {
    int cantidad;
    float precioUnit, total, totalFinal;

    cout << "Ingrese cantidad de camisas: ";
    cin >> cantidad;

    cout << "Ingrese precio unitario: ";
    cin >> precioUnit;

    total = cantidad * precioUnit;

    if(cantidad >= 3)
        totalFinal = total - (total * 0.20);
    else
        totalFinal = total - (total * 0.10);

    cout << "Total a pagar: " << totalFinal;

    return 0;
}
