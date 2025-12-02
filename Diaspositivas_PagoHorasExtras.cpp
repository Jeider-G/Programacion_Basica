#include <iostream>
using namespace std;

int main() {
    float horasTrab, pagoHora;
    float pagoTotal = 0;
    
    cout << "Ingrese el total de horas trabajadas: ";
    cin >> horasTrab;

    cout << "Ingrese el pago por hora normal: ";
    cin >> pagoHora;

    if(horasTrab <= 40) {
      
        pagoTotal = horasTrab * pagoHora;
    } 
    else {
        float horasNormales = 40;
        float horasExtra = horasTrab - 40;

        float pagoNormales = horasNormales * pagoHora;

        if(horasExtra <= 8) {
          
            float pagoExtras = horasExtra * (pagoHora * 2);
            pagoTotal = pagoNormales + pagoExtras;
        }
        else {
       
            float pago8Dobles = 8 * (pagoHora * 2);

            float horasTriple = horasExtra - 8;
            float pagoTriples = horasTriple * (pagoHora * 3);

            pagoTotal = pagoNormales + pago8Dobles + pagoTriples;
        }
    }

    cout << "El pago total es: " << pagoTotal;

    return 0;
}
