#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float capital;

    cout << "Ingrese la cantidad a invertir: ";
    cin >> capital;

    float tasa = 0.02;
    int meses = 12;

    float montoFinal = capital * pow(1 + tasa, meses);

    cout << "\nEl monto final despues de un año es: $" << montoFinal << endl;

    return 0;
}
