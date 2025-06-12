#include <iostream>
using namespace std;

int main(){
    int n, A[30], aux;
    cout << "Intercambiador de elementos equidistantes\n";
    cout << "Ingrese la cantidad de elementos: ";   cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Ingrese el numero "<<i+1<<": ";  cin >> A[i];
    }
    cout << "Numero original : ";
    for (int i = 0; i < n; i++){
        cout << A[i];
    }
    for (int i = 0; i < n/2; i++){
        aux = A[i];
        A[i] = A[n - i - 1];
        A[n - i - 1] = aux;
    }
    cout << "\nNumero invertido: ";
    for (int i = 0; i < n; i++){
        cout << A[i];
    }
}