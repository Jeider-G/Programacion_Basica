#include <iostream>
using namespace std;

int main() {
    float monto, cuota;

    cout << "Ingrese el monto de la fianza: ";
    cin >> monto;

    if(monto <= 50000)
        cuota = monto * 0.03;
    else
        cuota = monto * 0.02;

    cout << "La cuota a pagar es: " << cuota;

    return 0;
}
