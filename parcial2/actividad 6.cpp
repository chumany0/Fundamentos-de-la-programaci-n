#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    string matricula;
    float calif[3], promedio;
};

int main() {
    Alumno grupo[5];

    for(int i=0;i<5;i++){
        cout << "Alumno " << i+1 << " nombre: ";
        cin >> grupo[i].nombre;
        cout << "Matricula: ";
        cin >> grupo[i].matricula;
        float suma=0;
        for(int j=0;j<3;j++){
            cout << "Calif " << j+1 << ": ";
            cin >> grupo[i].calif[j];
            suma += grupo[i].calif[j];
        }
        cout << "Promedio: " << suma/3 << " ";
    }
}
