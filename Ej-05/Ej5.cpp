#include <iostream>

using namespace std;

int parteEnteraCociente(int a, int b) {
    if (a < b) {
        return 0;
    }
    return 1 + parteEnteraCociente(a - b, b);
}

int restoEntero(int a, int b) {
    if (a < b) {
        return a;
    }
    return restoEntero(a - b, b);
}

void imprimirDigitosSeparados(int num) {
    if (num < 10) {
        cout<<num<<" "<<endl;
    } else {
        imprimirDigitosSeparados(num / 10);
        cout<<num%10<<" "<<endl;
    }
}

int main() {
    int a, b;
    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;

    int parteEntera = parteEnteraCociente(a, b);
    int resto = restoEntero(a, b);

    cout<<"Parte entera del cociente: "<<parteEntera<<endl;
    cout<<"Resto entero: "<<resto<<endl;

    cout<<"Ingrese un entero no negativo: "<<endl;
    int num;
    cin>>num;
    cout<<"Dígitos separados: "<<endl;
    imprimirDigitosSeparados(num);

    return 0;
}

