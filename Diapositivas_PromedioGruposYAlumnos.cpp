#include <iostream>
using namespace std;

int main() {
    int g, n, m;
    cout << "Ingrese el numero de grupos: ";
    cin >> g;

    cout << "Ingrese numero de alumnos por grupo: ";
    cin >> n;

    cout << "Ingrese numero de materias por alumno: ";
    cin >> m;

    float promedioGrupos = 0;

    for (int grupo = 1; grupo <= g; grupo++) {
        cout << "\n=== Grupo " << grupo << " ===\n";

        float sumaPromAlumnos = 0;

        for (int alumno = 1; alumno <= n; alumno++) {
            cout << "\nAlumno " << alumno << ":\n";
            float sumaMaterias = 0;

            for (int materia = 1; materia <= m; materia++) {
                float n1, n2, n3;
                cout << "Materia " << materia << " - Ingrese 3 notas: ";
                cin >> n1 >> n2 >> n3;

                float promMateria = (n1 + n2 + n3) / 3.0;
                cout << "Promedio materia: " << promMateria << endl;

                sumaMaterias += promMateria;
            }

            float promAlumno = sumaMaterias / m;
            cout << "Promedio alumno: " << promAlumno << endl;

            sumaPromAlumnos += promAlumno;
        }

        float promGrupo = sumaPromAlumnos / n;
        cout << "\nPromedio del grupo " << grupo << ": " << promGrupo << endl;

        promedioGrupos += promGrupo;
    }

    float promedioTotal = promedioGrupos / g;
    cout << "\n=== Promedio total de todos los grupos: " << promedioTotal << " ===\n";

    return 0;
}
