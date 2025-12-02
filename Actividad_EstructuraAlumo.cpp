#include <iostream>
using namespace std;

struct alumno {
    int codigo;
    string nombre;
    string programa;
    float notas1[3]; // notas del semestre 1
    float notas2[3]; // notas del semestre 2
    float definitiva1;
    float definitiva2;
};

float calcular_definitiva(float n1, float n2, float n3) {
    return n1 * 0.35 + n2 * 0.35 + n3 * 0.30;
}

int main() {
    alumno A;

    cout << "Ingrese codigo del alumno: ";
    cin >> A.codigo;

    cout << "Ingrese nombre del alumno: ";
    cin.ignore();    
    getline(cin, A.nombre);

    cout << "Ingrese programa academico: ";
    getline(cin, A.programa);

    cout << "\n--- NOTAS SEMESTRE 1 ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "Nota " << i+1 << ": ";
        cin >> A.notas1[i];
    }

    cout << "\n--- NOTAS SEMESTRE 2 ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "Nota " << i+1 << ": ";
        cin >> A.notas2[i];
    }

    A.definitiva1 = calcular_definitiva(A.notas1[0], A.notas1[1], A.notas1[2]);
    A.definitiva2 = calcular_definitiva(A.notas2[0], A.notas2[1], A.notas2[2]);

    cout << "   INFORMACION DEL ALUMNO    \n";
    cout << "Codigo: " << A.codigo << endl;
    cout << "Nombre: " << A.nombre << endl;
    cout << "Programa: " << A.programa << endl;

    cout << "\nDefinitiva Semestre 1: " << A.definitiva1 << endl;
    cout << "Definitiva Semestre 2: " << A.definitiva2 << endl;

    return 0;
}
