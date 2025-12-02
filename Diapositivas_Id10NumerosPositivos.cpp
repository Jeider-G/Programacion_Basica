#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingrese 10 numeros:\n";
    for (int i = 1; i <= 10; i++) {
        cin >> num;
        if (num > 0) {
            cout << "Positivo: " << num << endl;
        }
    }

    return 0;
}
