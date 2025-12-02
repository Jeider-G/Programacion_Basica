#include <iostream>
using namespace std;

int main() {
    int n;
    float sueldoBase, valorVenta;

    cout << "Ingrese el numero de vendedores: ";
    cin >> n;

    cout << "Ingrese el sueldo base: ";
    cin >> sueldoBase;

    cout << "Ingrese el valor de cada venta: ";
    cin >> valorVenta;

    for (int i = 1; i <= n; i++) {
        float comision = 3 * valorVenta * 0.10;
        float sueldoFinal = sueldoBase + comision;

        cout << "\nVendedor " << i << ":\n";
        cout << "  Comision por 3 ventas: $" << comision << endl;
        cout << "  Sueldo final: $" << sueldoFinal << endl;
    }

    return 0;
}
