#include <iostream>
using namespace std;

int main() {
    float sueldo, nuevoSueldo;

    cout << "Ingrese el sueldo actual: ";
    cin >> sueldo;

    nuevoSueldo = sueldo + (sueldo * 0.25);

    cout << "El nuevo sueldo es: " << nuevoSueldo;

    return 0;
}
