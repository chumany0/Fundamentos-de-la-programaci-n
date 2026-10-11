#include <iostream>
#include <random>
using namespace std;

int main(){
    
    float ventas[100], total = 0;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 1000);
    cout << "Inserte las ventas: "<<endl;
    for (int i = 0; i < 5 ; i++) {
        ventas[i] = distrib(gen);
        total += ventas[i];
        cout << ventas[i]<<endl;
    }
    cout << "El total fue : " << total;
}
