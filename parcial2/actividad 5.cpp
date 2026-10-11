#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main (){
    string nombre, apellido;
    cout << "Inserte su nombre: ";
    cin>>nombre;
    cout<<"Inserte su apellido: ";
    cin>>apellido;
    
    for (int i = 0 ;i<nombre.length(); i++){
        
        char caracter = nombre[i];
        if (isdigit(caracter)){
            cout<<"Tiene un numero el nombre";
        }
    }
   
    for (int i = 0 ;i<apellido.length(); i++){
        
        char caracter = apellido[i];
        if (isdigit(caracter)){
            cout<<"Tiene un numero el apellido";
        }
    }
}
