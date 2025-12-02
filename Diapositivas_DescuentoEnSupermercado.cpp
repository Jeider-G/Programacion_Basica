#include <iostream>
using namespace std;

int main() {
    float compra, descuento, totalFinal;
    int numero;

    cout << "Ingrese el total de la compra: ";
    cin >> compra;

    cout << "Ingrese el numero escogido al azar: ";
    cin >> numero;

    if(numero < 74)
        descuento = compra * 0.15;
    else
        descuento = compra * 0.20;

    totalFinal = compra - descuento;

    cout << "Descuento aplicado: " << descuento << endl;
    cout << "Total a pagar: " << totalFinal;

    return 0;
}
