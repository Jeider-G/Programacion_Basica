#include <iostream>
using namespace std;

int main() {
    float p1, p2, p3, examenFinal, trabajoFinal;
    float promedioParciales, notaFinal;

    cout << "Ingrese las tres notas parciales: ";
    cin >> p1 >> p2 >> p3;

    cout << "Ingrese la nota del examen final: ";
    cin >> examenFinal;

    cout << "Ingrese la nota del trabajo final: ";
    cin >> trabajoFinal;

    promedioParciales = (p1 + p2 + p3) / 3.0;

    notaFinal = (promedioParciales * 0.55) 
              + (examenFinal * 0.30)
              + (trabajoFinal * 0.15);

    cout << "La nota final es: " << notaFinal;

    return 0;
}
