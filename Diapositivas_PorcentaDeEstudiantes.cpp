#include <iostream>
using namespace std;

int main() {
    int hombres, mujeres;
    int total;
    float porcH, porcM;

    cout << "Ingrese cantidad de hombres: ";
    cin >> hombres;

    cout << "Ingrese cantidad de mujeres: ";
    cin >> mujeres;

    total = hombres + mujeres;

    porcH = (hombres * 100.0) / total;
    porcM = (mujeres * 100.0) / total;

    cout << "Porcentaje de hombres: " << porcH << "%" << endl;
    cout << "Porcentaje de mujeres: " << porcM << "%" << endl;

    return 0;
}
