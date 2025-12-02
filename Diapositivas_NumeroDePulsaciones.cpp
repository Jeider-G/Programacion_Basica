#include <iostream>
using namespace std;

int main() {
    int edad;
    float pulsaciones;

    cout << "Ingrese la edad: ";
    cin >> edad;

    pulsaciones = (220 - edad) / 10.0;

    cout << "Pulsaciones cada 10 segundos: " << pulsaciones;

    return 0;
}
