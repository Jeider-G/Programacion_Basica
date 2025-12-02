#include <iostream>
using namespace std;

int main() {
    int minutos;
    int actividad; 
    float calorias;

    cout << "1. Durmiendo\n2. Sentado en reposo\n";
    cout << "Seleccione la actividad: ";
    cin >> actividad;

    cout << "Ingrese los minutos de actividad: ";
    cin >> minutos;

    if(actividad == 1)
        calorias = minutos * 1.08;
    else
        calorias = minutos * 1.66;

    cout << "Calorias consumidas: " << calorias;

    return 0;
}
