#include <iostream>
using namespace std;

int main() {
    string nombre;
    int clave;
    float precio, precioFinal;

    cout << "Ingrese nombre del articulo: ";
    cin >> nombre;

    cout << "Ingrese clave (1 o 2): ";
    cin >> clave;

    cout << "Ingrese precio original: ";
    cin >> precio;

    if(clave == 1)
        precioFinal = precio - (precio * 0.10);
    else
        precioFinal = precio - (precio * 0.20);

    cout << "Articulo: " << nombre << endl;
    cout << "Precio con descuento: " << precioFinal;

    return 0;
}
