#include <iostream>
#include <string>

using namespace std;

string saludar (string nombre){
    return nombre;
}

int main(){
    string nombre = "german";
    cout<<saludar(nombre);
    return 0;
}