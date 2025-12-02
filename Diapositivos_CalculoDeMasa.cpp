#include <iostream>
using namespace std;

int main() {
    float presion, volumen, temperatura;
    float masa;

    cout << "Ingrese presion: ";
    cin >> presion;

    cout << "Ingrese volumen: ";
    cin >> volumen;

    cout << "Ingrese temperatura: ";
    cin >> temperatura;

    masa = (presion * volumen) / (0.37 * (temperatura + 460));

    cout << "La masa es: " << masa;

    return 0;
}
