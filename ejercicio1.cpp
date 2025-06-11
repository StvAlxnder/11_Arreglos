#include <iostream>
using namespace std;

int main (){
    int n, max, A[30];
    cout << "Ingrese el numero de elementos del arreglo: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> A[i];
    }
    max = A[0];
    for (int i = 1; i < n; i++){
        if (A[i] > max){
            max = A[i];
        }
    }
    cout << "El mayor elemento es: " << max;
    return 0;
}