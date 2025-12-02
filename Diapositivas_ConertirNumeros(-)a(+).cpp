#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingrese 15 numeros negativos:\n";
    for (int i = 1; i <= 15; i++) {
        cin >> num;
        if (num < 0) {
            num = -num; 
        }
        cout << "Positivo: " << num << endl;
    }

    return 0;
}
