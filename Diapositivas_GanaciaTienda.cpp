#include <iostream>
using namespace std;

int main() {
    float precioCompra, precioVenta;

    cout << "Ingrese el precio de compra del articulo: ";
    cin >> precioCompra;

    precioVenta = precioCompra + (precioCompra * 0.30);

    cout << "El precio de venta debe ser: " << precioVenta;

    return 0;
}
