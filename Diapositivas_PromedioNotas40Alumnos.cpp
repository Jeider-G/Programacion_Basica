#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0, menor;

    cout << "Ingrese las 40 notas finales:\n";

    cin >> nota;
    suma += nota;
    menor = nota;

    for (int i = 2; i <= 40; i++) {
        cin >> nota;
        suma += nota;

        if (nota < menor) {
            menor = nota;
        }
    }

    float promedio = suma / 40;

    cout << "Promedio del grupo: " << promedio << endl;
    cout << "Nota mas baja: " << menor << endl;

    return 0;
}
