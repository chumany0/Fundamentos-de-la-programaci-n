#include <iostream>
#include <random>
using namespace std;

int main() {
    float grupoA[5], grupoB[5], mejores[5];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 10);

    cout << "Grupo A: " << endl;
    for (int i = 0;i < 5;i++) {
       grupoA[i] = distrib(gen);
       cout << "Calificacion " << i+1 << ": " << grupoA[i] << endl;
    } 

    cout << "Grupo B: " << endl;
    for (int i = 0;i < 5;i++) { 
        grupoB[i] = distrib(gen);
        cout << "Calificacion" << i+1 << ": " << grupoB[i] << endl;
    }

    for (int i = 0;i < 5;i++) {
        mejores[i] = (grupoA[i] > grupoB[i]) ? grupoA[i] : grupoB[i];
    }
    cout << "Mejores promedios: ";
    for (int i = 0;i < 5;i++) cout << mejores[i] << " ";
}
