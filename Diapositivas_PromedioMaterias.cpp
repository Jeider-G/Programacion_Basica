#include <iostream>
using namespace std;

int main() {
    float exMat, t1Mat, t2Mat, t3Mat;
    float exFis, t1Fis, t2Fis;
    float exProg, t1Prog, t2Prog, t3Prog;

    float promMat, promFis, promProg, promGeneral;

    cout << "Ingrese la nota del examen de Matematicas: ";
    cin >> exMat;

    cout << "Ingrese las tres tareas de Matematicas: ";
    cin >> t1Mat >> t2Mat >> t3Mat;

    float promTareasMat = (t1Mat + t2Mat + t3Mat) / 3.0;

    promMat = (exMat * 0.90) + (promTareasMat * 0.10);


    cout << "\nIngrese la nota del examen de Fisica: ";
    cin >> exFis;

    cout << "Ingrese las dos tareas de Fisica: ";
    cin >> t1Fis >> t2Fis;

    float promTareasFis = (t1Fis + t2Fis) / 2.0;

    promFis = (exFis * 0.80) + (promTareasFis * 0.20);


    cout << "\nIngrese la nota del examen de Programacion: ";
    cin >> exProg;

    cout << "Ingrese las tres tareas de Programacion: ";
    cin >> t1Prog >> t2Prog >> t3Prog;

    float promTareasProg = (t1Prog + t2Prog + t3Prog) / 3.0;

    promProg = (exProg * 0.85) + (promTareasProg * 0.15);


    promGeneral = (promMat + promFis + promProg) / 3.0;

    cout << "\n--- RESULTADOS ---\n";
    cout << "Promedio Matematicas: " << promMat << endl;
    cout << "Promedio Fisica: " << promFis << endl;
    cout << "Promedio Programacion: " << promProg << endl;
    cout << "Promedio general de las tres materias: " << promGeneral << endl;

    return 0;
}
