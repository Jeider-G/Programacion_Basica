#include <iostream>
using namespace std;

int main() {
    float presupuesto;
    float gine, trauma, pedia;

    cout << "Ingrese el presupuesto total del hospital: ";
    cin >> presupuesto;

    gine = presupuesto * 0.40;
    trauma = presupuesto * 0.30;
    pedia = presupuesto * 0.30;

    cout << "Ginecologia recibe: " << gine << endl;
    cout << "Traumatologia recibe: " << trauma << endl;
    cout << "Pediatria recibe: " << pedia << endl;

    return 0;
}
