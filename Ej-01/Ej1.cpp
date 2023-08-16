#include <iostream>

using namespace std;

int potencia(int base, int exponente) {

    if (exponente == 0) {
        return 1;
    }

    else {
        return base * potencia(base, exponente - 1);
    }
}

int main() {
    int base, exponente;
    cout<<"Ingrese la base: "<<endl;
    cin>>base;
    cout<<"Ingrese el exponente: "<<endl;
    cin>>exponente;

    int resultado = potencia(base, exponente);
    cout<<base<<"^"<<exponente<<" = "<<resultado<<endl;

    return 0;
}
