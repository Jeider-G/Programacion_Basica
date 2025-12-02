#include <iostream>
using namespace std;

int main() {
    int num, pos = 0, neg = 0, neu = 0;

    cout << "Ingrese 20 numeros:\n";
    for (int i = 1; i <= 20; i++) {
        cin >> num;

        if (num > 0) pos++;
        else if (num < 0) neg++;
        else neu++;
    }

    cout << "Positivos: " << pos << endl;
    cout << "Negativos: " << neg << endl;
    cout << "Neutros: " << neu << endl;

    return 0;
}
