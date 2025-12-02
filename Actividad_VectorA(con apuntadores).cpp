#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int A[N] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << "1) MOSTRAR VECTOR USANDO INDICES (i)\n";
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << "\n\n";

    cout << "2) MOSTRAR VECTOR USANDO EL NOMBRE DEL ARREGLO\n";
    for (int i = 0; i < N; i++) {
        cout << *(A + i) << " ";
    }
    cout << "\n\n";

    cout << "3) MOSTRAR VECTOR USANDO UN APUNTADOR P (SIN AVANZAR)\n";
    int *P = A;  
    for (int i = 0; i < N; i++) {
        cout << P[i] << " ";   
    }
    cout << "\n\n";

    cout << "4) MOSTRAR VECTOR USANDO UN APUNTADOR P AVANZANDO\n";
    P = A;   
    for (int i = 0; i < N; i++) {
        cout << *P << " ";   
        P++;                 
    }
    cout << "\n";

    return 0;
}
