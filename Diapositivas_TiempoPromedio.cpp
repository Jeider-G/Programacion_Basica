#include <iostream>
using namespace std;

int main() {
    float lunes, miercoles, viernes;
    float promedio;

    cout << "Ingrese el tiempo del lunes: ";
    cin >> lunes;

    cout << "Ingrese el tiempo del miercoles: ";
    cin >> miercoles;

    cout << "Ingrese el tiempo del viernes: ";
    cin >> viernes;

    promedio = (lunes + miercoles + viernes) / 3.0;

    cout << "El tiempo promedio semanal es: " << promedio;

    return 0;
}
