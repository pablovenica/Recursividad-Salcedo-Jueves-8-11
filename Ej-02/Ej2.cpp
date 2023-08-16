#include <iostream>

using namespace std;

int sumaArrayRecursivo(int arr[], int size, int index) {
    if (index == size - 1) {
        return arr[index];
    } else {
        return arr[index] + sumaArrayRecursivo(arr, size, index + 1);
    }
}

int main() {
    int size;
    cout<<"Ingrese el tamaño del array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Ingrese los elementos del array: "<<endl;
    for (int i = 0; i < size; ++i) {
        cin>>arr[i];
    }

    int suma = sumaArrayRecursivo(arr, size, 0);
    cout<<"La suma de los elementos del array es: "<<suma<<endl;

    return 0;
}

