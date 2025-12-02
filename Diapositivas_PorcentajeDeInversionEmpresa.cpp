#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    float total;
    float pa, pb, pc;

    cout << "Ingrese la inversion de la primera persona: ";
    cin >> a;

    cout << "Ingrese la inversion de la segunda persona: ";
    cin >> b;

    cout << "Ingrese la inversion de la tercera persona: ";
    cin >> c;

    total = a + b + c;

    pa = (a * 100.0) / total;
    pb = (b * 100.0) / total;
    pc = (c * 100.0) / total;

    cout << "Porcentaje persona 1: " << pa << "%" << endl;
    cout << "Porcentaje persona 2: " << pb << "%" << endl;
    cout << "Porcentaje persona 3: " << pc << "%" << endl;

    return 0;
}
