#include <iostream>

using namespace std;

int euclides(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return euclides(b, a % b);
    }
}

int main() {
    int a, b;
    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;

    if (a > 0 && b > 0) {
        int mcd = euclides(a, b);
        cout<<"El MCD de "<<a<<" y "<<b<<" es: "<<mcd<<endl;
    } else {
        cout<<"Los valores deben ser positivos."<<endl;
    }

    return 0;
}

