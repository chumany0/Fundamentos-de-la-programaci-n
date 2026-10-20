#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

struct Alumno  { string nombre; string matricula; float calif[3]; int grupo; double promedio; };
struct Maestro { string nombre; string materia; };
struct Grupo   { string nombre; string carrera; int num_grupo; };

int main() {
    int opcion = 0; int n, zz;
    vector<Alumno> alumno; vector<Maestro> maestro; vector<Grupo> grupo;

    do {
        cout << "\n--- MENU PRINCIPAL ---\n";
        cout << "1. Capturar Alumnos\n";
        cout << "2. Capturar grupos y carreras\n";
        cout << "3. Capturar maestros\n";
        cout << "4. Mostrar Reportes\n";
        cout << "5. Salir\n";
        cin >> opcion;

        // Si escriben letras en el menu, evita el ciclo infinito
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Opcion invalida.\n";
            opcion = 0;
            continue;
        }

        switch (opcion)
        {
        case 1: {
            // No se pueden capturar alumnos sin grupos (evita salirse de rango)
            if (grupo.empty()) {
                cout << "Primero captura al menos un grupo.\n";
                break;
            }
            cout << "Cuantos alumnos son?" << endl;
            cin >> n;
            if (cin.fail() || n < 1) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Cantidad invalida.\n";
                break;
            }
            for (int i = 0; i < n; i++) {
                Alumno a;

                cout << "Nombre del alumno " << i+1 << ": ";
                cin >> a.nombre;
                cout << "Matricula " << i+1 << ": ";
                cin >> a.matricula;

                cout << "calificaciones\n";
                for (int o = 0; o < 3; o++) {
                    while (true) {
                        cout << "Calificacion " << o+1 << ": ";
                        cin >> a.calif[o];
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "No puede ingresar letras.\n";
                        } else if (a.calif[o] < 0 || a.calif[o] > 100) {
                            cout << "La calificacion debe estar entre 0 y 100.\n";
                        } else {
                            break;
                        }
                    }
                }

                // pa ver si existe un grupo
                while (true) {
                    cout << "Grupo (1-" << grupo.size() << "): ";
                    cin >> a.grupo;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout << "Ingrese un numero.\n";
                    } else if (a.grupo < 1 || a.grupo > (int)grupo.size()) {
                        cout << "Ese grupo no existe.\n";
                    } else {
                        break;
                    }
                }

                a.promedio = (a.calif[0] + a.calif[1] + a.calif[2]) / 3;
                alumno.push_back(a);
            }
            break;
        }
        case 2:
            cout << "Cuantos grupos quieres capturar? ";
            cin >> n;
            if (cin.fail() || n < 1) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Cantidad invalida.\n";
                break;
            }
            zz = grupo.size();
            for (int i = zz; i < zz + n; i++) {
                Grupo g;
                cout << "Nombre del grupo " << i+1 << ": ";
                cin >> g.nombre;
                cout << "Carrera del grupo " << i+1 << ": ";
                cin >> g.carrera;
                g.num_grupo = i+1;
                grupo.push_back(g);
            }
            break;

        case 3:
            cout << "Cuantos maestros quieres capturar? ";
            cin >> n;
            if (cin.fail() || n < 1) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Cantidad invalida.\n";
                break;
            }
            for (int i = 0; i < n; i++) {
                Maestro m;
                cout << "Nombre del maestro " << i+1 << ": ";
                cin >> m.nombre;
                cout << "Materia que imparte: ";
                cin >> m.materia;
                maestro.push_back(m);
            }
            break;

        case 4: {
            if (alumno.empty()) {
                cout << "No hay alumnos capturados.\n";
                break;
            }

            cout << "\n--Reporte--" << endl;

            // Promedio de cada alumno
            cout << "\n-- Promedio de cada alumno --\n";
            for (size_t i = 0; i < alumno.size(); i++) {
                alumno[i].promedio = (alumno[i].calif[0] + alumno[i].calif[1] + alumno[i].calif[2]) / 3;
                cout << alumno[i].nombre << " (" << alumno[i].matricula << "): ";
                cout << alumno[i].promedio << endl;
            }

            // Mejor promedio por grupo
            cout << "\n-- Mejor promedio por grupo --\n";
            for (size_t g = 0; g < grupo.size(); g++) {
                int mejor = -1;
                for (size_t i = 0; i < alumno.size(); i++) {
                    if (alumno[i].grupo == (int)g + 1) {
                        if (mejor == -1 || alumno[i].promedio > alumno[mejor].promedio)
                            mejor = i;
                    }
                }
                cout << grupo[g].nombre << ": ";
                if (mejor == -1) cout << "sin alumnos\n";
                else cout << alumno[mejor].nombre << " (" << alumno[mejor].promedio << ")\n";
            }

            // Alumnos por carrera
            cout << "\n-- Alumnos por carrera --\n";
            vector<string> carreras;
            vector<int> cuenta;
            for (size_t i = 0; i < alumno.size(); i++) {
                string car = grupo[alumno[i].grupo - 1].carrera;
                bool encontrada = false;
                for (size_t c = 0; c < carreras.size(); c++) {
                    if (carreras[c] == car) { cuenta[c]++; encontrada = true; break; }
                }
                if (!encontrada) { carreras.push_back(car); cuenta.push_back(1); }
            }
            for (size_t c = 0; c < carreras.size(); c++)
                cout << carreras[c] << ": " << cuenta[c] << endl;
            break;
        }

        default:
            if (opcion != 5) cout << "Opcion invalida.\n";
            break;
        }

    } while (opcion != 5);
    return 0;
}