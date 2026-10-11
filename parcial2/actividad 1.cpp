#include <iostream>
using namespace std;

int main() {
    float calif[6];
    float suma = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Calificacion " << i + 1 << ": ";
        cin >> calif[i];
        suma += calif[i];
    }
    calif[5] = suma / 5;
    cout << "Calificaciones: ";
    for (int i = 0; i < 6; i++) {
        cout << calif[i] << " ";
    }
}
