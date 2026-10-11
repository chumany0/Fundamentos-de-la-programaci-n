#include <iostream>
#include <random>
using namespace std;

int main() {
    
    float alumn[10][3];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 10);
    cout << "Grupo 1"<<endl;
    for (int i=0; i <10; i++) {
        alumn[i][0]= distrib(gen);
        cout << alumn[i][0]<<endl;

    }
    cout << "Grupo 2"<<endl;
    for (int i=0; i < 10; i++) {
        alumn[i][1]= distrib(gen);
        cout << alumn[i][1]<<endl;
    }
    cout << "Mejores promedios"<<endl;
    for (int i=0; i < 10; i++) {
        alumn[i][2] = (alumn[i][0]>alumn[i][1]) ? alumn[i][0] : alumn[i][1]; //este es como un if abreviado
        cout << alumn[i][2] << endl;
    }

}
