#include <iostream>
using namespace std;


int sumaDivisores(int x) {
    int suma = 0;
    for (int i = 1; i <= x / 2; i++) {
        if (x % i == 0) {
            suma += i;
        }
    }
    return suma;
}


int main() {
    int n, m;

    cout << "Ingrese el limite inferior n: ";
    cin >> n;

    cout << "Ingrese el limite superior m: ";
    cin >> m;

    cout << "\nPares de numeros amigos entre " << n << " y " << m << ":\n";

    for (int a = n; a <= m; a++) {
        int b = sumaDivisores(a);

        // Evitar imprimir pares duplicados (a,b) y (b,a)
        if (b > a && b <= m) {
            if (sumaDivisores(b) == a) {
                cout << a << " y " << b << " son amigos." << endl;
            }
        }
    }

    return 0;
}
