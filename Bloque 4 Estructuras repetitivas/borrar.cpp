#include <iostream>
#include <string>
#include <limits>

// No olvides la línea para evitar poner std:: en todo
using namespace std;

int main() {
    // ... Declaracion de variables y contadores ...
    const int NUM_ALUMNOS = 5;
    const int NOTA_MINIMA_APROBACION = 70;

    int aprobadosTodos = 0;
    int aprobadosAlMenosUno = 0;
    int aprobadosSoloUltimo = 0;

    // --- BUCLE EXTERNO: Para cada ALUMNO (5 veces) ---
    for (int i = 1; i <= NUM_ALUMNOS; ++i) {
        string nombreAlumno;
        int calificacion[3]; // Arreglo para las calificaciones del alumno actual
        bool aproboExamen[3]; // Arreglo para el estado de aprobacion de cada examen

        cout << "\n--- Alumno " << i << " ---\n";
        // Limpiar buffer antes de getline, por si quedó un '\n' de un cin anterior
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ingrese el nombre del alumno: ";
        getline(cin, nombreAlumno);

        // --- BUCLE INTERNO: Para las 3 CALIFICACIONES de cada alumno ---
        for (int j = 0; j < 3; ++j) {
            while (true) { // Bucle de validacion para cada calificacion
                cout << "Ingrese calificacion del Examen " << j + 1 << " (0-100): ";
                cin >> calificacion[j];

                if (cin.fail() || calificacion[j] < 0 || calificacion[j] > 100) {
                    cout << "Calificacion invalida. Ingrese un numero entre 0 y 100.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else {
                    break; // Salir del bucle de validacion de calificacion
                }
            }
            // Determinar si aprobó el examen actual
            aproboExamen[j] = (calificacion[j] >= NOTA_MINIMA_APROBACION);
        }

        // --- Lógica de CONTEO para este alumno (después de obtener sus 3 calificaciones) ---
        // a) Alumnos que aprobaron todos los exámenes.
        if (aproboExamen[0] && aproboExamen[1] && aproboExamen[2]) {
            aprobadosTodos++;
        }

        // b) Alumnos que aprobaron al menos un examen.
        if (aproboExamen[0] || aproboExamen[1] || aproboExamen[2]) {
            aprobadosAlMenosUno++;
        }

        // c) Alumnos que aprobaron unicamente el ultimo examen.
        if (!aproboExamen[0] && !aproboExamen[1] && aproboExamen[2]) {
            aprobadosSoloUltimo++;
        }
    }

    // --- Mostrar RESULTADOS FINALES (fuera del bucle de alumnos) ---
    cout << "\n--- RESUMEN FINAL DE LA CLASE ---\n";
    cout << "a) Alumnos que aprobaron todos los examenes: " << aprobadosTodos << endl;
    cout << "b) Alumnos que aprobaron al menos un examen: " << aprobadosAlMenosUno << endl;
    cout << "c) Alumnos que aprobaron unicamente el ultimo examen: " << aprobadosSoloUltimo << endl;

    // ... Pausa para salir ...
    cout << "\nPresione Enter para salir...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    return 0;
}
